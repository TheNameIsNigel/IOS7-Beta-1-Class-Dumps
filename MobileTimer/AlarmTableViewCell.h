/* AlarmTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AlarmView;
@protocol AlarmActiveDelegate;

__attribute__((visibility("hidden")))
@interface AlarmTableViewCell : XXUnknownSuperclass {
	id<AlarmActiveDelegate> _alarmActiveDelegate;
	AlarmView* _alarmView;
	BOOL _enabled;
}
+(float)defaultHeight;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)willTransitionToState:(unsigned)state;
-(void)_alarmActiveChanged:(id)changed;
-(void)setAlarmActiveDelegate:(id)delegate;
-(void)refreshUI:(id)ui animated:(BOOL)animated;
-(void)setBackgroundColor:(id)color;
-(void)internalSetBackgroundColor:(id)color;
-(void)dealloc;
-(id)init;
@end
