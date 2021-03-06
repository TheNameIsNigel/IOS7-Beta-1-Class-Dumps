/* PHEmergencyDialerViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhoneBaseViewController.h"
#import "TPDialerKeypadDelegate.h"
#import "DialerViewDelegate.h"

@class NSTimer, PHHandsetDialerLCDView, UIButton, PHHandsetDialerView;

__attribute__((visibility("hidden")))
@interface PHEmergencyDialerViewController : XXUnknownSuperclass <PhoneBaseViewController, TPDialerKeypadDelegate, DialerViewDelegate> {
	BOOL _inApplicationMode;
	BOOL _callEnding;
	short _currentState;
	PHHandsetDialerLCDView* _lcdView;
	PHHandsetDialerView* _dialerView;
	NSTimer* _callDurationTimer;
	UIButton* _backButton;
}
@property(assign) BOOL callEnding;
@property(assign, nonatomic) short currentState;
@property(retain) UIButton* backButton;
@property(retain) NSTimer* callDurationTimer;
@property(retain) PHHandsetDialerView* dialerView;
@property(retain) PHHandsetDialerLCDView* lcdView;
@property(assign) BOOL inApplicationMode;
+(id)defaultPNGName;
+(int)statusBarStyle;
+(int)viewType;
-(void)dialEmergencyCall;
-(void)updateEmergencyTitleLabelForCallDuration;
-(id)currentCallStatusStringForDisplay;
-(void)phonePad:(id)pad dialerCharacterButtonWasHeld:(unsigned)held;
-(void)phonePad:(id)pad replaceLastDigitWithString:(id)string;
-(void)phonePadDidEndSounds:(id)phonePad;
-(void)phonePadWillBeginSounds:(id)phonePad;
-(void)phonePad:(id)pad keyUp:(BOOL)up;
-(void)phonePad:(id)pad keyDown:(BOOL)down;
-(void)phonePadDeleteLastDigit:(id)digit;
-(void)phonePad:(id)pad appendString:(id)string;
-(void)callStatusChangedNotification:(id)notification;
-(void)transitionInFromViewType:(int)viewType animated:(BOOL)animated completionBlock:(id)block;
-(void)prepareForTransitionInFromViewType:(int)viewType animated:(BOOL)animated;
-(void)handleURL:(id)url;
-(void)prepareToHandleURL:(id)handleURL;
-(void)updateViewControllerForOrientation:(int)orientation;
-(void)prepareForSnapshot;
-(BOOL)shouldSnapshot;
-(BOOL)shouldDisableEdgeClip;
-(void)continueCyclingEmergencyTitleLabel;
-(void)setCurrentState:(short)state animated:(BOOL)animated;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)backButtonTapped:(id)tapped;
-(void)callButtonTapped:(id)tapped;
-(void)deleteButtonTapped:(id)tapped;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
