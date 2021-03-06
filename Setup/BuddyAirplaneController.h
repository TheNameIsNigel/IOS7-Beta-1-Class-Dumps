/* BuddyAirplaneController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Setup-Structs.h"
#import "BuddyTableViewController.h"
#import "BuddyController.h"

@class BuddyAirplaneView;
@protocol BuddyControllerDelegate;

__attribute__((visibility("hidden")))
@interface BuddyAirplaneController : BuddyTableViewController <BuddyController> {
	id<BuddyControllerDelegate> _delegate;
	BuddyAirplaneView* _buddyAirplaneView;
}
-(void)viewWillAppear:(BOOL)view;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)setDelegate:(id)delegate;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)init;
@end
