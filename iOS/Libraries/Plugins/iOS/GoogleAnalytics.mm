//
//  GoogleAnalytics.m
//  Unity-iPhone
//
//  Created by Prabhu on 26/05/17.
//
//

#import <Foundation/Foundation.h>
#import "TAGDataLayer.h"
#import "TAGContainer.h"
#import "TAGContainerOpener.h"
#import "TAGManager.h"

extern NSString* UniWebViewMakeNSString(const char* str);


@interface GoogleAnalyticsManager : NSObject<TAGContainerOpenerNotifier>
@property (nonatomic, strong) TAGManager *tagManager;

@end

@implementation GoogleAnalyticsManager

@synthesize tagManager;

- (GoogleAnalyticsManager*)initialize {
    self.tagManager = [TAGManager instance];
    [self.tagManager.logger setLogLevel:kTAGLoggerLogLevelVerbose];
    
    [TAGContainerOpener openContainerWithId:@"GTM-5MTPB2Z"
                                 tagManager:self.tagManager
                                   openType: kTAGOpenTypePreferFresh
                                    timeout:nil
                                   notifier:self];
    
    return self;
}

-(void)containerAvailable:(TAGContainer*)container {
    //self.container = container;
}

-(void)logEvent:(NSString*)event key:(NSString*)key value:(NSString*)value {
    TAGDataLayer *dataLayer = [TAGManager instance].dataLayer;
    
    [dataLayer push:@{@"event": event , key:value}];
}

@end

GoogleAnalyticsManager* g_analytics = nil;

extern "C" void Initialize() {
    if(g_analytics == nil)
        g_analytics = [[GoogleAnalyticsManager alloc] initialize];
}

extern "C" void LogEvent(const char* eventName, const char* key, const char* value) {
    [g_analytics logEvent:UniWebViewMakeNSString(eventName) key:UniWebViewMakeNSString(key) value:UniWebViewMakeNSString(value)];
}
