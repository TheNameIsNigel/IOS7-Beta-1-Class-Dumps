/* AccountLinkButtonView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PSHeaderFooterView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AccountLinkButton, NSURL;

__attribute__((visibility("hidden")))
@interface AccountLinkButtonView : XXUnknownSuperclass <PSHeaderFooterView> {
	AccountLinkButton* _linkButton;
	NSURL* _helpURL;
	float _height;
}
-(float)preferredHeightForWidth:(float)width;
-(void)layoutSubviews;
-(void)_goToAccountURL;
-(void)dealloc;
-(id)initWithSpecifier:(id)specifier;
@end
