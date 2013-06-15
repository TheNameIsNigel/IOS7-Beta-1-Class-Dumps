/* SBLockScreenTimerViewController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "BBObserverDelegate.h"

@class NSDate, NSString, BBObserver, NSTimer;
@protocol SBLockScreenTimerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenTimerViewController : XXUnknownSuperclass <BBObserverDelegate> {
	BOOL _enabled;
	NSTimer* _updateTimer;
	NSDate* _endDate;
	BBObserver* _observer;
	NSString* _timerBulletinID;
	id<SBLockScreenTimerViewControllerDelegate> _delegate;
}
@property(retain) NSString* timerBulletinID;
@property(assign) id<SBLockScreenTimerViewControllerDelegate> delegate;
-(void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(void)setContentAlpha:(float)alpha;
-(void)_updateTimerLabelView;
-(void)_updateTimerFired;
-(void)_startTimer;
-(void)_stopTimer;
-(BOOL)_isEndDateValid;
-(id)timerView;
-(void)setEndDate:(id)date;
-(void)setTimerHidden:(BOOL)hidden;
-(BOOL)isTimerActive;
-(void)setEnabled:(BOOL)enabled;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end