/* SBAwayBulletinCell.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAwayListItemCell.h"

@class SBBulletinLockBar, SBUnlockActionContext;

__attribute__((visibility("hidden")))
@interface SBAwayBulletinCell : SBAwayListItemCell {
	SBBulletinLockBar* _lockBar;
	SBUnlockActionContext* _actionContext;
	BOOL _disableUnlockSound;
}
@property(readonly, assign, nonatomic) SBUnlockActionContext* actionContext;
+(Class)contentViewClass;
+(float)rowHeightForSubtitle:(id)subtitle imageHeight:(float)height;
+(float)rowHeightForSubtitle:(id)subtitle message:(id)message maxLines:(unsigned)lines rowWidth:(float)width buttonLabels:(id)labels;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)_lockBarSlidBackToOrigin:(id)origin withDuration:(double)duration;
-(void)lockBarSlidBackToOrigin:(id)origin;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)lockBarStartedTracking:(id)tracking;
-(void)lockBarUnlocked:(id)unlocked;
-(void)resetLockBar;
-(void)setDisableUnlockSound:(BOOL)sound;
-(void)setUnlockActionContext:(id)context;
-(id)_lockBar;
-(void)_createLockBarOnlyIfNeeded;
-(void)_layoutLockBar;
-(void)_createLockBar;
-(BOOL)_createsLockBarEarly;
-(void)layoutSubviews;
-(void)setVIP:(BOOL)vip;
-(void)setAttachmentText:(id)text;
-(void)setAttachmentImage:(id)image;
-(void)setStartDate:(id)date endDate:(id)date2 timeZone:(id)zone allDay:(BOOL)day formatStyle:(int)style;
-(void)setSubtitle:(id)subtitle;
-(void)setMaxMessageLines:(unsigned)lines;
-(void)dealloc;
-(void)_createContentView;
@end
