/* PreferencesAppController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Preferences-Structs.h"
#import "UIApplicationDelegate.h"
#import "EAAccessoryDelegate.h"
#import "MCProfileConnectionObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow, PrefsRootController, PSSplitViewController, NSMutableSet, EAAccessory;

__attribute__((visibility("hidden")))
@interface PreferencesAppController : XXUnknownSuperclass <UIApplicationDelegate, EAAccessoryDelegate, MCProfileConnectionObserver> {
	PSSplitViewController* _splitViewController;
	PrefsRootController* _controller;
	UIWindow* _window;
	BOOL _isLocked;
	NSMutableSet* _busyControllers;
	BOOL _dontSelectGeneralOnLaunch;
	BOOL _loadingExternalURL;
	unsigned _backgroundTaskHandle;
	double _timeoutLimit;
	BOOL _settingsWasResigned;
	unsigned _rootDomainConnect;
	unsigned _pmNotifier;
	IONotificationPortRef _systemPowerPortRef;
	CFRunLoopSourceRef _pmSource;
	EAAccessory* _speakerAccessory;
}
@property(retain, nonatomic) UIWindow* window;
@property(assign) BOOL dontSelectGeneralOnLaunch;
@property(assign) unsigned rootDomainConnect;
-(void)accessoryDidDisconnect:(id)accessory;
-(void)_accessoryDidConnect:(id)_accessory;
-(void)_deregisterForPowerNotifications;
-(void)_registerForPowerNotifications;
-(void)dealloc;
-(double)defaultImageSnapshotExpiration;
-(void)resetLocale;
-(void)significantTimeChange;
-(void)systemDidWake:(id)system;
-(void)_resetSnapshotImage;
-(void)userDefaultsDidChange:(id)userDefaults;
-(void)_handleExternalApplicationChange;
-(void)_suspendControllers;
-(void)_handleBusyControllers;
-(void)controllerFinished:(id)finished;
-(void)endAndInvalidateBackgroundTask;
-(void)addBusyControllersFromRootController:(id)rootController;
-(id)oneTimeJumpURL;
-(void)generateURL;
-(void)processURL:(id)url;
-(void)applicationOpenURL:(id)url;
-(id)keyValueDictionaryForURL:(id)url;
-(void)applicationDidResumeForEventsOnly;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationWillResignActive:(id)application;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationWillTerminate:(id)application;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(void)updateSoftwareUpdateBadgeOnSpecifier:(id)specifier;
-(BOOL)runTest:(id)test options:(id)options;
-(void)clearControllersForSuspendedState;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)profileConnection userInfo:(id)info;
-(id)appWindow;
-(void)stopPlayback;
-(id)rootController;
@end