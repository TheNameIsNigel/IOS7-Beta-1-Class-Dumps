/* SBBulletinListSection.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSArray, UIImage, NSString, NSMutableSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBBulletinListSection : XXUnknownSuperclass {
	NSString* _sectionID;
	int _sectionType;
	int _sectionCategory;
	id _widget;
	NSMutableArray* _bulletins;
	NSMutableSet* _bulletinIDs;
	NSArray* _sortDescriptors;
	NSString* _displayName;
	UIImage* _iconImage;
	unsigned _notificationCenterLimit;
	BOOL _showsInLockScreen;
	BOOL _displaysCriticalBulletins;
	NSDate* _lastSortDate;
}
@property(assign, nonatomic) BOOL showsInLockScreen;
@property(assign, nonatomic) unsigned notificationCenterLimit;
@property(retain, nonatomic) UIImage* iconImage;
@property(copy, nonatomic) NSString* displayName;
@property(retain, nonatomic) NSArray* sortDescriptors;
@property(retain, nonatomic) id widget;
@property(readonly, assign, nonatomic) NSArray* bulletins;
@property(assign, nonatomic) int sectionCategory;
@property(copy, nonatomic) NSString* sectionID;
-(BOOL)hasBulletinWithID:(id)anId;
-(id)bulletinWithBulletinID:(id)bulletinID;
-(id)bulletinAtIndex:(unsigned)index;
-(unsigned)replaceBulletin:(id)bulletin withBulletin:(id)bulletin2;
-(unsigned)removeBulletin:(id)bulletin;
-(unsigned)_removeBulletin:(id)bulletin;
-(unsigned)addBulletin:(id)bulletin;
-(unsigned)indexOfBulletinWithLocalNotification:(id)localNotification;
-(unsigned)indexOfBulletinID:(id)bulletinID;
-(unsigned)_indexForNewBulletin:(id)newBulletin;
-(int)compareSection:(id)section forOrder:(int)order;
-(int)compare:(id)compare;
-(void)dealloc;
-(id)initWithSectionInfo:(id)sectionInfo;
-(BOOL)showsTodaysDate;
-(BOOL)displaysCriticalBulletins;
-(id)lastSortDate;
-(BOOL)hasClearableBulletins;
-(unsigned)bulletinCount;
-(BOOL)isBulletinSection;
-(BOOL)isWidgetSection;
-(id)description;
@end
