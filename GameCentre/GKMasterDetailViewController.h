/* GKMasterDetailViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UINavigationController, UIViewController;

__attribute__((visibility("hidden")))
@interface GKMasterDetailViewController : XXUnknownSuperclass {
	UINavigationController* _masterNavigationController;
	UINavigationController* _detailNavigationController;
}
@property(retain, nonatomic) UINavigationController* detailNavigationController;
@property(retain, nonatomic) UINavigationController* masterNavigationController;
@property(retain, nonatomic) UIViewController* rootDetailViewController;
-(void)didTouchMasterBackButton;
-(void)setRootDetailViewController:(id)controller animated:(BOOL)animated;
-(void)popToRootDetailViewControllerAnimated:(BOOL)rootDetailViewControllerAnimated;
-(void)pushMasterViewController:(id)controller;
-(id)blankRootDetailViewController;
-(void)dealloc;
-(id)init;
@end
