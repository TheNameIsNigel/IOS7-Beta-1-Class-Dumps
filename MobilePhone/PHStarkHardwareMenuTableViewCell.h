/* PHStarkHardwareMenuTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PHStarkGenericTableViewCell.h"

@class UILabel, UIImageView;

__attribute__((visibility("hidden")))
@interface PHStarkHardwareMenuTableViewCell : PHStarkGenericTableViewCell {
	UILabel* _mainLabel;
	UIImageView* _iconImageView;
}
@property(retain) UIImageView* iconImageView;
@property(retain) UILabel* mainLabel;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
