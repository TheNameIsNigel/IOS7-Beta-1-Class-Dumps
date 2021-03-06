/* SBLockScreenNotificationCell.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBGlintyStringViewDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBNotificationCell.h"

@class SBGlintyStringView, SBLockScreenNotificationScrollView, NSTimer, UIView, NSArray, SBUnlockActionContext;
@protocol SBAwayListCellButtonHandler, SBLockScreenNotificationCellDelegate, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationCell : SBNotificationCell <SBGlintyStringViewDelegate> {
	BOOL _isTopCell;
	BOOL _drawsSeparators;
	float _currentContentAlpha;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	NSArray* _actionButtons;
	id<SBAwayListCellButtonHandler> _actionButtonHandler;
	SBLockScreenNotificationScrollView* _contentScrollView;
	SBUnlockActionContext* _unlockActionContext;
	SBGlintyStringView* _unlockTextView;
	NSTimer* _unlockTextRevealTimer;
	id<UIScrollViewDelegate, SBLockScreenNotificationCellDelegate> _delegate;
}
@property(retain, nonatomic) NSArray* actionButtons;
@property(readonly, assign, nonatomic) BOOL wantsUnlockActionText;
@property(retain, nonatomic) SBUnlockActionContext* unlockActionContext;
@property(assign, nonatomic) BOOL drawsSeparators;
@property(assign, nonatomic) BOOL isTopCell;
@property(assign, nonatomic) id<UIScrollViewDelegate, SBLockScreenNotificationCellDelegate> delegate;
+(float)primaryPaddingLeft;
+(float)rowHeightForTitle:(id)title body:(id)body maxLines:(unsigned)lines attachmentSize:(CGSize)size datesVisible:(BOOL)visible rowWidth:(float)width;
+(id)defaultColorForEventDate;
+(id)defaultColorForRelevanceDate;
+(id)defaultColorForSecondaryText;
+(id)defaultColorForPrimaryText;
+(id)defaultFontForEventDate;
+(id)defaultFontForRelevanceDate;
+(id)defaultFontForSecondaryText;
+(id)defaultFontForPrimaryText;
-(void)layoutSubviews;
-(void)glintyAnimationDidStop;
-(void)glintyAnimationDidStart;
-(void)_handleActionButtonPress:(id)press;
-(id)_buttonWithLabel:(id)label;
-(id)_buttonsWithLabels:(id)labels;
-(void)setButtonLabels:(id)labels handler:(id)handler;
-(void)_animateToUnlockTextVisible:(BOOL)unlockTextVisible duration:(float)duration;
-(void)_unlockTextRevealTimerFired:(id)fired;
-(void)_setUnlockTextRevealTimer;
-(void)_clearUnlockTextRevealTimer;
-(void)hideUnlockTextImmediately;
-(void)showUnlockTextImmediately;
-(void)prepareUnlockText;
-(void)setContentAlpha:(float)alpha;
-(void)scrollToOriginAnimated:(BOOL)originAnimated;
-(void)resetScrollViewWithWidth:(float)width;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
