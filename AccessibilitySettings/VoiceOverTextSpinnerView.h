/* VoiceOverTextSpinnerView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PSHeaderFooterView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface VoiceOverTextSpinnerView : XXUnknownSuperclass <PSHeaderFooterView> {
@private
	UILabel* _text;
	UIActivityIndicatorView* _spinner;
}
-(void)layoutSubviews;
-(void)hideSpinner;
-(void)showSpinner;
-(float)preferredHeightForWidth:(float)width;
-(void)dealloc;
-(id)initWithSpecifier:(id)specifier;
@end
