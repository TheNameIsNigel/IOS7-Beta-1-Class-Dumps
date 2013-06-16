/* MNClassicSignsDisplay.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MNGuidanceSignsDisplay.h"
#import "Maps-Structs.h"
#import "MNGuidanceSignViewDelegate.h"

@class InterruptibleAnimation, ChromeViewController, UIView, MNGuidanceSignView, NSMutableArray, MNGuidanceSecondarySignView, MNGuidanceSignContainerView;
@protocol MapsChromeModeController;

__attribute__((visibility("hidden")))
@interface MNClassicSignsDisplay : MNGuidanceSignsDisplay <MNGuidanceSignViewDelegate> {
	CGRect _currentStatusBarFrame;
	CGRect _currentUnobscuredBounds;
	ChromeViewController* _viewController;
	id<MapsChromeModeController> _container;
	UIView* _superview;
	BOOL _simulatingStatusBarFrame;
	CGRect _simulatedStatusBarFrame;
	BOOL _hidingSigns;
	BOOL _suspendUpdates;
	BOOL _anyUpdateRequiresChangingPrimarySign;
	BOOL _useMetric;
	BOOL _useYardsForShortDistance;
	int _guidanceState;
	BOOL _isAnimatingSignFlyIn;
	BOOL _isAnimatingSignFlyOut;
	BOOL _runLoopIsWaitingForSecondarySignCall;
	NSMutableArray* _pendingSignQueue;
	InterruptibleAnimation* _hidingAnimation;
	MNGuidanceSignView* _signView;
	MNGuidanceSecondarySignView* _secondarySignView;
	MNGuidanceSignView* _pendingSignView;
	MNGuidanceSecondarySignView* _pendingSecondarySignView;
	MNGuidanceSignContainerView* _currentSignContainerView;
	MNGuidanceSignContainerView* _pendingSignContainerView;
	double _timeIntervalToDestination;
	double _distanceToDestination;
	CGRect _navigationBarFrame;
}
@property(retain, nonatomic) InterruptibleAnimation* hidingAnimation;
@property(readonly, assign, nonatomic) CGRect _unobscuredBounds;
@property(readonly, assign, nonatomic) CGRect _navigationBarFrame;
@property(readonly, assign, nonatomic) CGRect _statusBarFrame;
@property(retain, nonatomic) MNGuidanceSignContainerView* _pendingSignContainerView;
@property(retain, nonatomic) MNGuidanceSignContainerView* _currentSignContainerView;
@property(retain, nonatomic) MNGuidanceSecondarySignView* _pendingSecondarySignView;
@property(retain, nonatomic) MNGuidanceSecondarySignView* _secondarySignView;
@property(retain, nonatomic) MNGuidanceSignView* _pendingSignView;
@property(retain, nonatomic) MNGuidanceSignView* _signView;
@property(assign, nonatomic) double distanceToDestination;
@property(assign, nonatomic) double timeIntervalToDestination;
-(void)_didChangeCurrentLocale:(id)locale;
-(void)setDestinationDisplayName:(id)name;
-(void)showRecalculationFailedWithSignColor:(int)signColor;
-(void)showRecalculatingWithSignColor:(int)signColor;
-(void)resetForNewReceivedRoute;
-(void)showArrived;
-(void)hideSecondaryManeuver;
-(void)showSecondaryManeuver:(int)maneuver junction:(id)junction instructions:(id)instructions shorterAlternativeInstructions:(id)instructions4 shieldType:(int)type shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)setTimeToManeuver:(double)maneuver distanceToManeuver:(double)maneuver2;
-(void)showManeuverAlertForAnnouncementStage:(int)announcementStage;
-(void)showNewManeuver:(int)maneuver junction:(id)junction instructions:(id)instructions shorterAlternativeInstructions:(id)instructions4 shieldType:(int)type shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)showProceedingToRouteDistance:(double)routeDistance displayString:(id)string signColor:(int)color;
-(void)setTotalRemainingTime:(double)time remainingDistance:(double)distance;
-(void)showNoGuidance;
-(void)_hideSigns;
-(void)guidanceSignViewSingleTap:(id)tap;
-(void)_flyInNewSign:(id)newSign behindOldSign:(id)sign completion:(id)completion;
-(void)_animateInNewSecondarySign:(id)newSecondarySign completion:(id)completion;
-(void)_scheduleSignDisplay;
-(void)_handleQueueItem:(id)item;
-(void)_makeNewPrimarySign:(id)sign secondarySign:(id)sign2;
-(void)_flyAwaySign:(id)sign completion:(id)completion;
-(void)removeFromContainingViewController;
-(void)_setFrameForContainerView:(id)containerView;
-(void)setMaximumWidthForContainerView:(id)containerView;
-(void)updateInsets;
-(void)layoutForUnobscuredBoundsChange;
-(void)_updateBlur;
-(void)_updateCurrentSignStyle;
-(void)setShowsDimmedSigns:(BOOL)signs animation:(id)animation;
-(void)setCompact:(BOOL)compact;
-(id)_newSecondarySignView;
-(id)_newSignView;
-(void)setHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)_useStatusBarFrame:(CGRect)frame withinBlock:(id)block;
-(void)dealloc;
-(id)initWithContainingChromeViewController:(id)containingChromeViewController mode:(id)mode inView:(id)view;
@end