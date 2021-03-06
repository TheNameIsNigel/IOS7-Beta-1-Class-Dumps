/* SBUIPluginHost.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIPluginControllerHost.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBUIPluginController;

__attribute__((visibility("hidden")))
@interface SBUIPluginHost : XXUnknownSuperclass <SBUIPluginControllerHost> {
	SBUIPluginController* _plugin;
	BOOL _expectsFaceContact;
	BOOL _isPluginRunning;
}
@property(retain) SBUIPluginController* pluginController;
@property(readonly, assign) BOOL isPluginRunning;
@property(readonly, assign) BOOL isPluginVisible;
-(void)uiPlugin:(id)plugin forceUpdateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;
-(void)uiPluginUserEventOccurred:(id)occurred;
-(BOOL)uiPlugin:(id)plugin openURL:(id)url;
-(BOOL)uiPlugin:(id)plugin launchApplicationWithBundleID:(id)bundleID openURL:(id)url;
-(void)uiPlugin:(id)plugin setExpectsFaceContact:(BOOL)contact;
-(void)_updateFaceContactForVisibilityChange:(BOOL)visibilityChange;
-(BOOL)uiPluginExpectsFaceContact:(id)contact;
-(void)uiPlugin:(id)plugin isNowRunning:(BOOL)running;
-(void)_updateExpectsFaceContactWithChangedValue:(BOOL)changedValue;
-(BOOL)uiPluginWantsActivation:(id)activation forEvent:(int)event completion:(id)completion;
-(BOOL)uiPluginAttemptDeviceUnlock:(id)unlock withPassword:(id)password lockViewOwner:(id)owner;
-(void)uiPluginWantsDismissal:(id)dismissal withAnimation:(BOOL)animation;
-(BOOL)pluginSuppressesNotifications;
-(BOOL)pluginWantsScreenDimInterval:(double*)interval;
-(BOOL)pluginWantsInterfaceOrientation:(int*)orientation;
-(BOOL)pluginHandledWiredMicButtonTap;
-(BOOL)pluginHandledMenuButtonTap;
-(BOOL)pluginHandledMenuButtonDownEvent;
-(BOOL)pluginHandledPasscodeUnlockWithCompletion:(id)completion;
-(void)dismissPluginForEvent:(int)event;
-(void)_dismissUIPlugin:(id)plugin animated:(BOOL)animated;
-(void)cancelPendingPluginActivationEvent:(int)event;
-(void)preparePluginForActivationEvent:(int)activationEvent afterInterval:(double)interval;
-(BOOL)pluginWantsActivationEvent:(int)event interval:(double*)interval;
-(BOOL)activatePluginForEvent:(int)event context:(void*)context;
-(BOOL)activatePluginForEvent:(int)event;
-(BOOL)expectsFaceContact;
-(void)_notePluginVisibilityDidChange;
-(void)_restoreOrientation;
-(void)_remoteLocked:(id)locked;
-(void)_deviceBlocked:(id)blocked;
-(void)_uiLocked:(id)locked;
-(void)_noteDeviceLockedOrBlocked;
-(void)_pluginWillUnload:(id)_plugin;
-(void)_pluginDidLoad:(id)_plugin;
-(void)_removeObserversForPlugin:(id)plugin;
-(BOOL)pluginSupportedAndEnabled;
-(void)dealloc;
-(id)init;
@end
