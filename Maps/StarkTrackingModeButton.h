/* StarkTrackingModeButton.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface StarkTrackingModeButton : XXUnknownSuperclass {
	BOOL _updatingImages;
	int _trackingMode;
}
@property(assign, nonatomic) int trackingMode;
-(void)_updateImages;
-(CGSize)sizeThatFits:(CGSize)fits;
-(id)initWithFrame:(CGRect)frame;
@end