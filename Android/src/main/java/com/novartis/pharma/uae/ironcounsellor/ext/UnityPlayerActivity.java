package com.novartis.pharma.uae.ironcounsellor.ext;

/*
import com.google.firebase.analytics.FirebaseAnalytics;
import com.google.android.gms.appindexing.Action;
import com.google.android.gms.appindexing.AppIndex;
import com.google.android.gms.appindexing.Thing;
import com.google.android.gms.common.api.GoogleApiClient;
*/

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.graphics.PixelFormat;
import android.os.Bundle;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.Window;

import com.google.android.gms.common.api.PendingResult;
import com.google.android.gms.common.api.ResultCallback;
import com.google.android.gms.tagmanager.Container;
import com.google.android.gms.tagmanager.Container.FunctionCallMacroCallback;
import com.google.android.gms.tagmanager.Container.FunctionCallTagCallback;
import com.google.android.gms.tagmanager.ContainerHolder;
import com.google.android.gms.tagmanager.DataLayer;
import com.google.android.gms.tagmanager.TagManager;
import com.unity3d.player.UnityPlayer;

import org.json.JSONException;

import java.util.Map;
import java.util.concurrent.TimeUnit;

public class UnityPlayerActivity extends Activity {

    private static final long TIMEOUT_FOR_CONTAINER_OPEN_MILLISECONDS = 2000;
    private static final String CONTAINER_ID = "GTM-PCZ3GGG";
    volatile private Container mContainer;

    protected UnityPlayer mUnityPlayer; // don't change the name of this variable; referenced from native code
    protected Context context;

    public UnityPlayerActivity() {

    }

    // Setup activity layout
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        super.onCreate(savedInstanceState);
        getWindow().setFormat(PixelFormat.RGBX_8888); // <--- This makes xperia play happy

        android.util.Log.e(ReminderSetup.TAG, "Initializing GTM container");
        try {
            TagManager tagManager = TagManager.getInstance(this);
            tagManager.setVerboseLoggingEnabled(true);
            PendingResult<ContainerHolder> pending =
                    tagManager.loadContainerPreferNonDefault(CONTAINER_ID,
                            R.raw.gtm_pcz3ggg);

            pending.setResultCallback(new ResultCallback<ContainerHolder>() {
                @Override
                public void onResult(ContainerHolder containerHolder) {
                    ContainerHolderSingleton.setContainerHolder(containerHolder);
                    Container container = containerHolder.getContainer();
                    if (!containerHolder.getStatus().isSuccess()) {
                        Log.e("IronApp", "Failure loading container");
                        return;
                    }
                    ContainerLoadedCallback.registerCallbacksForContainer(container);
                    containerHolder.setContainerAvailableListener(new ContainerLoadedCallback());
                }
            }, TIMEOUT_FOR_CONTAINER_OPEN_MILLISECONDS, TimeUnit.MILLISECONDS);

            DataLayer dataLayer = tagManager.getDataLayer();
            dataLayer.pushEvent("openScreen", DataLayer.mapOf("screenName", "Home Screen"));
        } catch (Exception e) {
            e.printStackTrace();
        }

        mUnityPlayer = new UnityPlayer(this);
        setContentView(mUnityPlayer);
        mUnityPlayer.requestFocus();
    }

    @Override
    protected void onNewIntent(Intent intent) {
        // To support deep linking, we need to make sure that the client can get access to
        // the last sent intent. The clients access this through a JNI api that allows them
        // to get the intent set on launch. To update that after launch we have to manually
        // replace the intent with the one caught here.
        setIntent(intent);
    }

    // Quit Unity
    @Override
    protected void onDestroy() {
        mUnityPlayer.quit();
        super.onDestroy();
    }

    // Pause Unity
    @Override
    protected void onPause() {
        Log.i(ReminderSetup.TAG, "On pause...");
        super.onPause();
        mUnityPlayer.pause();
    }

    // Resume Unity
    @Override
    protected void onResume() {
        Log.i(ReminderSetup.TAG, "On resume ...");
        super.onResume();
        mUnityPlayer.resume();
    }

    // Low Memory Unity
    @Override
    public void onLowMemory() {
        super.onLowMemory();
        mUnityPlayer.lowMemory();
    }

    // Trim Memory Unity
    @Override
    public void onTrimMemory(int level) {
        super.onTrimMemory(level);
        if (level == TRIM_MEMORY_RUNNING_CRITICAL) {
            mUnityPlayer.lowMemory();
        }
    }

    // This ensures the layout will be correct.
    @Override
    public void onConfigurationChanged(Configuration newConfig) {
        super.onConfigurationChanged(newConfig);
        mUnityPlayer.configurationChanged(newConfig);
    }

    // Notify Unity of the focus change.
    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        mUnityPlayer.windowFocusChanged(hasFocus);
    }

    // For some reason the multiple keyevent type is not supported by the ndk.
    // Force event injection by overriding dispatchKeyEvent().
    @Override
    public boolean dispatchKeyEvent(KeyEvent event) {
        if (event.getAction() == KeyEvent.ACTION_MULTIPLE)
            return mUnityPlayer.injectEvent(event);
        return super.dispatchKeyEvent(event);
    }

    // Pass any events not handled by (unfocused) views straight to UnityPlayer
    @Override
    public boolean onKeyUp(int keyCode, KeyEvent event) {
        return mUnityPlayer.injectEvent(event);
    }

    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        return mUnityPlayer.injectEvent(event);
    }

    @Override
    public boolean onTouchEvent(MotionEvent event) {
        return mUnityPlayer.injectEvent(event);
    }

    /*API12*/
    public boolean onGenericMotionEvent(MotionEvent event) {
        return mUnityPlayer.injectEvent(event);
    }

    @Override
    public void onBackPressed() {
        // Do Here what ever you want do on back press;
    }

    /* Reminder Events */
    public void ManageEvents(String eventList) throws JSONException {
        Log.i(ReminderSetup.TAG, "Managing events");
        ReminderSetup reminderSetup = new ReminderSetup();
        reminderSetup.ManageEvents(eventList);
    }

    public void LogGAEvent(String screenName, String key, String value) {
        DataLayer dataLayer = TagManager.getInstance(context).getDataLayer();
        dataLayer.push(DataLayer.mapOf("event", screenName, key, value));
    }

    @Override
    public void onStart() {
        super.onStart();
    }

    @Override
    public void onStop() {
        super.onStop();
    }

    private static class ContainerLoadedCallback implements ContainerHolder.ContainerAvailableListener {
        @Override
        public void onContainerAvailable(ContainerHolder containerHolder, String containerVersion) {
            // We load each container when it becomes available.
            Container container = containerHolder.getContainer();
            registerCallbacksForContainer(container);
        }

        public static void registerCallbacksForContainer(Container container) {
            // Register two custom function call macros to the container.
            container.registerFunctionCallMacroCallback("increment", new CustomMacroCallback());
            container.registerFunctionCallMacroCallback("mod", new CustomMacroCallback());
            // Register a custom function call tag to the container.
            container.registerFunctionCallTagCallback("custom_tag", new CustomTagCallback());
        }
    }

    private static class CustomMacroCallback implements FunctionCallMacroCallback {
        private int numCalls;

        @Override
        public Object getValue(String name, Map<String, Object> parameters) {
            if ("increment".equals(name)) {
                return ++numCalls;
            } else if ("mod".equals(name)) {
                return (Long) parameters.get("key1") % Integer.valueOf((String) parameters.get("key2"));
            } else {
                throw new IllegalArgumentException("Custom macro name: " + name + " is not supported.");
            }
        }
    }

    private static class CustomTagCallback implements FunctionCallTagCallback {
        @Override
        public void execute(String tagName, Map<String, Object> parameters) {
            // The code for firing this custom tag.
            Log.i("CuteAnimals", "Custom function call tag :" + tagName + " is fired.");
        }
    }
}