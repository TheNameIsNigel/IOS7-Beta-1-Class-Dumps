/* SBShowcaseViewController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBShowcaseViewControllerProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBShowcaseController;

__attribute__((visibility("hidden")))
@interface SBShowcaseViewController : XXUnknownSuperclass <SBShowcaseViewControllerProtocol> {
	SBShowcaseController* _showcase;
	int _revealMode;
}
@property(assign, nonatomic) int revealMode;
@property(assign, nonatomic) SBShowcaseController* showcase;
-(BOOL)activateIgnoringTouches;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)expectsFaceContact;
-(void)revealModeWillChange:(int)revealMode;
-(float)revealAmountForMode:(int)mode;
-(float)bottomBarHeight;
-(void)viewDidRotateFromInterfaceOrientation:(int)view;
-(void)viewWillAnimateRotationToInterfaceOrientation:(int)view;
-(void)viewWillRotateToInterfaceOrientation:(int)view;
-(void)viewDidDisappear;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)viewWillAppear;
-(id)view;
@end
