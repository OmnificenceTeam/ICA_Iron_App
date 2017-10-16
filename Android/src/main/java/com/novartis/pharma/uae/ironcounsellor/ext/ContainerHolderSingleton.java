package com.novartis.pharma.uae.ironcounsellor.ext;

/**
 * Created by Prabhu Easwar on 6/7/2017.
 */

import com.google.android.gms.tagmanager.ContainerHolder;

public class ContainerHolderSingleton {
    private static ContainerHolder containerHolder;

    /**
     * Utility class; don't instantiate.
     */
    private ContainerHolderSingleton() {
    }

    public static ContainerHolder getContainerHolder() {
        return containerHolder;
    }

    public static void setContainerHolder(ContainerHolder c) {
        containerHolder = c;
    }
}
