/* ContactsSplitViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UISplitViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"

@class UIPopoverController, ContactCardNavigationController, ABPeoplePickerNavigationController, CNContact;

__attribute__((visibility("hidden")))
@interface ContactsSplitViewController : XXUnknownSuperclass <UISplitViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate> {
	ABPeoplePickerNavigationController* _peoplePicker;
	ContactCardNavigationController* _contactContainer;
	UIPopoverController* _presentedPopover;
}
@property(retain, nonatomic) UIPopoverController* presentedPopover;
@property(retain, nonatomic) ContactCardNavigationController* contactContainer;
@property(readonly, assign, nonatomic) CNContact* displayedContact;
@property(retain, nonatomic) ABPeoplePickerNavigationController* peoplePicker;
-(void).cxx_destruct;
-(void)_updateSplitSizeForOrientation:(int)orientation;
-(void)_showContactForRecord:(void*)record;
-(BOOL)splitViewController:(id)controller shouldHideViewController:(id)controller2 inOrientation:(int)orientation;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewDidLoad;
-(void)addContact:(id)contact;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end