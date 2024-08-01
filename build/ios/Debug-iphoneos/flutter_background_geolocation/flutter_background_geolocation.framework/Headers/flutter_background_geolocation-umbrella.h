#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "TSActivityChangeStreamHandler.h"
#import "TSAuthorizationStreamHandler.h"
#import "TSBackgroundGeolocationStreamHandler.h"
#import "TSConnectivityChangeStreamHandler.h"
#import "TSEnabledChangeStreamHandler.h"
#import "TSGeofencesChangeStreamHandler.h"
#import "TSGeofenceStreamHandler.h"
#import "TSHeartbeatStreamHandler.h"
#import "TSHttpStreamHandler.h"
#import "TSLocationStreamHandler.h"
#import "TSMotionChangeStreamHandler.h"
#import "TSNotificationActionStreamHandler.h"
#import "TSPowerSaveChangeStreamHandler.h"
#import "TSProviderChangeStreamHandler.h"
#import "TSScheduleStreamHandler.h"
#import "TSBackgroundGeolocationPlugin.h"

FOUNDATION_EXPORT double flutter_background_geolocationVersionNumber;
FOUNDATION_EXPORT const unsigned char flutter_background_geolocationVersionString[];

