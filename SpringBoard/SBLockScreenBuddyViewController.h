/* SBLockScreenBuddyViewController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBLockOverlayViewController.h"

@class NSArray, SBLockScreenViewController, NSString, SBActivationInfoViewController, NSTimer;

__attribute__((visibility("hidden")))
@interface SBLockScreenBuddyViewController : XXUnknownSuperclass <SBLockOverlayViewController> {
	BOOL _showingLogo;
	BOOL _startsWithBlackBackground;
	SBLockScreenViewController* _lockScreenViewController;
	NSArray* _slideToUnlockStrings;
	NSArray* _titleStrings;
	unsigned _currentStringIndex;
	NSTimer* _stringCycleTimer;
	SBActivationInfoViewController* _activationInfoViewController;
}
@property(assign, nonatomic) BOOL startsWithBlackBackground;
@property(assign, nonatomic, getter=isShowingLogo) BOOL showingLogo;
@property(retain, nonatomic) SBActivationInfoViewController* activationInfoViewController;
@property(retain, nonatomic) NSTimer* stringCycleTimer;
@property(assign, nonatomic) unsigned currentStringIndex;
@property(copy, nonatomic) NSArray* titleStrings;
@property(copy, nonatomic) NSArray* slideToUnlockStrings;
@property(assign, nonatomic) SBLockScreenViewController* lockScreenViewController;
@property(readonly, assign, nonatomic) NSString* slideToUnlockText;
-(void)backlightDidTurnOn:(id)backlight;
-(void)backlightDidDim:(id)backlight;
-(void)toggleShowsIMEIandICCID:(id)iccid;
-(void)cycleTimerDidFire:(id)cycleTimer;
-(void)stopCyclingLocalizedStrings;
-(void)startCyclingLocalizedStrings;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)hideBootScreenImmediately;
-(id)overlayView;
-(id)buddyView;
-(void)loadView;
-(void)dealloc;
-(id)initWithLockScreenViewController:(id)lockScreenViewController;
@end
