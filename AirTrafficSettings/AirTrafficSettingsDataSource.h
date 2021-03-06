/* AirTrafficSettingsDataSource.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATConnectionDelegate.h"

@class ATConnection, ATWakeupCall, NSMutableSet, NSTimer, NSDictionary, NSString;
@protocol AirTrafficSettingsDataSourceDelegate;

@interface AirTrafficSettingsDataSource : XXUnknownSuperclass <ATConnectionDelegate> {
	ATConnection* _connection;
	ATWakeupCall* _wakeupCall;
	NSString* _libraryIdentifier;
	NSMutableSet* _connectedLibraries;
	NSMutableSet* _wakeableLibraries;
	NSMutableSet* _wakingLibraries;
	NSMutableSet* _librariesWaitingToSync;
	NSMutableSet* _syncingLibraries;
	NSTimer* _waitingForSyncTimer;
	unsigned _backgroundTaskIdentifier;
	BOOL _registered;
	id<AirTrafficSettingsDataSourceDelegate> _delegate;
	NSDictionary* _lastProgressDict;
}
@property(readonly, assign, nonatomic, getter=isWifiEnabled) BOOL wifiEnabled;
@property(readonly, assign, nonatomic) BOOL waitingToWake;
@property(readonly, assign, nonatomic) BOOL waitingToSync;
@property(readonly, assign, nonatomic) BOOL syncing;
@property(readonly, assign, nonatomic) BOOL connected;
@property(assign, nonatomic) id<AirTrafficSettingsDataSourceDelegate> delegate;
+(id)sharedDataSource;
-(void)connectionWasInterrupted:(id)interrupted;
-(void)connection:(id)connection updatedProgress:(id)progress;
-(void)stopScanningWakeableLibraries;
-(void)scanWakeableLibraries;
-(id)hostForIdentifier:(id)identifier;
-(id)hostIdentifiers;
-(void)cancelSync;
-(void)requestSync;
-(void)unregisterForProgress;
-(void)registerForProgressWithLibraryIdentifier:(id)libraryIdentifier;
-(void)syncTimeoutExpired;
-(void)unregisterConnectionIfUnused;
-(id)connection;
-(void)dealloc;
-(id)initWithLibraryIdentifier:(id)libraryIdentifier;
-(id)init;
@end
