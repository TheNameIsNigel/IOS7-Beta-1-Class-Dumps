/* ASApplePackCellLayout.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AppStore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, NSString;

__attribute__((visibility("hidden")))
@interface ASApplePackCellLayout : XXUnknownSuperclass {
	UILabel* _descriptionLabel;
	int _position;
	UILabel* _titleLabel;
}
@property(copy, nonatomic) NSString* title;
@property(copy, nonatomic) NSString* shortDescription;
@property(assign, nonatomic) int position;
-(void).cxx_destruct;
-(void)setBackgroundColor:(id)color;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
@end
