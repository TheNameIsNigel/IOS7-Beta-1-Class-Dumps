/* iPodOutNavigationController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface iPodOutNavigationController : XXUnknownSuperclass {
	NSMutableArray* navigationStack;
}
@property(retain, nonatomic) NSMutableArray* navigationStack;
-(void).cxx_destruct;
-(id)popViewControllerWithTransition:(int)transition;
-(id)popToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;
-(void)pushViewController:(id)controller animated:(BOOL)animated;
-(void)pushViewController:(id)controller transition:(int)transition;
-(void)updateTopNavigationPathComponent;
-(id)initWithRootViewController:(id)rootViewController;
@end