/* WFServicePINEntryNavigationController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WFServicePINEntryControllerProtocol.h"

@class UINavigationController, NSURL, WFServicePINEntryViewController, NSString;
@protocol WFPINEntryViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface WFServicePINEntryNavigationController : XXUnknownSuperclass <WFServicePINEntryControllerProtocol> {
	id<WFPINEntryViewControllerProtocol> _remoteViewControllerProxy;
	UINavigationController* _navController;
	WFServicePINEntryViewController* _PINEntryViewController;
	NSURL* _URL;
	NSString* _pageTitle;
}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void).cxx_destruct;
-(void)didCancelEnteringPIN;
-(void)didAcceptEnteredPIN;
-(void)cancel;
-(void)setPageTitle:(id)title;
-(void)setURL:(id)url;
-(void)_willAppearInRemoteViewController:(id)remoteViewController;
-(void)viewDidLoad;
@end