/* ComposeServiceRemoteViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MFMailComposeViewControllerDelegate.h"
#import "MFMailComposeRemoteService.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, ComposeNavigationController, _MFMailCompositionContext;

__attribute__((visibility("hidden")))
@interface ComposeServiceRemoteViewController : XXUnknownSuperclass <MFMailComposeViewControllerDelegate, MFMailComposeRemoteService> {
	ComposeNavigationController* _navigationController;
	_MFMailCompositionContext* _compositionContext;
	NSMutableDictionary* _attachmentIdentifiersMap;
}
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)autosaveWithReply:(id)reply;
-(void)framesForAttachmentsWithIdentifiers:(id)identifiers withReply:(id)reply;
-(void)setContentVisible:(BOOL)visible;
-(void)_invokeReply:(id)reply;
-(void)commitCompositionValuesWithReply:(id)reply;
-(void)addAttachmentData:(id)data mimeType:(id)type fileName:(id)name identifier:(id)identifier;
-(void)setUICustomizationData:(id)data;
-(void)setCompositionValues:(id)values;
-(void)_firstDraw:(id)draw;
-(void)viewServiceDidTerminateWithError:(id)viewService;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)_hostApplicationWillEnterForeground;
-(void)_hostApplicationDidEnterBackground;
-(void)_willAppearInRemoteViewController;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
