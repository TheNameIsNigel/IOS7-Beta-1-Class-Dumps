/* MUPlaceCardLocVCardProvider.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MUSearchResultActivityProvider.h"

@class NSString, CNContact;

__attribute__((visibility("hidden")))
@interface MUPlaceCardLocVCardProvider : MUSearchResultActivityProvider {
	CNContact* _contact;
	NSString* _temporaryVCardFilename;
}
@property(readonly, assign, nonatomic) NSString* temporaryVCardFilename;
@property(retain, nonatomic) CNContact* contact;
-(void)_setRecord:(void*)record property:(int)property stringValue:(id)value label:(id)label;
-(id)activityViewController:(id)controller itemForActivityType:(id)activityType;
-(id)activityViewControllerPlaceholderItem:(id)item;
-(void)dealloc;
-(id)initWithSearchResult:(id)searchResult contact:(id)contact;
@end
