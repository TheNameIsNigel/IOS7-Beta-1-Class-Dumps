/* iPodOutLabel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "iPodOut-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface iPodOutLabel : XXUnknownSuperclass {
	UIColor* highlightedShadowColor;
	UIColor* savedShadowColor;
	UIColor* savedTextColor;
	CGSize highlightedShadowOffset;
	CGSize savedShadowOffset;
}
@property(retain, nonatomic) UIColor* savedTextColor;
@property(assign, nonatomic) CGSize savedShadowOffset;
@property(retain, nonatomic) UIColor* savedShadowColor;
@property(assign, nonatomic) CGSize highlightedShadowOffset;
@property(retain, nonatomic) UIColor* highlightedShadowColor;
-(void).cxx_destruct;
-(void)setShadowOffset:(CGSize)offset;
-(void)setShadowColor:(id)color;
-(void)setTextColor:(id)color;
-(void)setHighlighted:(BOOL)highlighted;
@end