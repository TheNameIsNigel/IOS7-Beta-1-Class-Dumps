/* MNDriveNavigator.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MNNavigator.h"
#import "Maps-Structs.h"


__attribute__((visibility("hidden")))
@interface MNDriveNavigator : MNNavigator {
}
-(BOOL)_allowNavigatorSwitchToTransportType:(int)transportType distanceToDestination:(double)destination;
-(BOOL)_shouldChangeActiveTransportTo:(int)to distanceTraveled:(double)traveled speed:(double)speed;
-(BOOL)_checkForArrival:(id)arrival;
-(int)_transportType;
-(id)_newMapMatcher;
-(Class)_guidanceManagerClass;
@end
