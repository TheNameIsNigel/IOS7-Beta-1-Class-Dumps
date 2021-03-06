/* MCProfileConnectionObserver.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MCProfileConnectionObserver <NSObject>
@optional
-(void)profileConnectionDidReceiveAppWhitelistChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveDefaultsChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)profileConnection userInfo:(id)info;
@end
