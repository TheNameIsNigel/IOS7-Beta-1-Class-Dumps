/* MPDetailSliderDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MPDetailSliderDelegate <NSObject>
@optional
-(void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;
-(void)detailSlider:(id)slider didChangeValue:(float)value;
-(void)detailSliderTrackingDidCancel:(id)detailSliderTracking;
-(void)detailSliderTrackingDidEnd:(id)detailSliderTracking;
-(void)detailSliderTrackingDidBegin:(id)detailSliderTracking;
@end
