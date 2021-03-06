/* MNNavigationSessionUIDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "MNDirectionsSessionUIDelegate.h"


@protocol MNNavigationSessionUIDelegate <MNDirectionsSessionUIDelegate>
-(void)navigationSessionTransportTypeChanged:(id)changed newTransportType:(int)type;
-(void)navigationSessionDetectedNewTransportType:(id)type newTransportType:(int)type2;
-(void)navigationSessionHasArrived:(id)arrived;
-(void)navigationSessionHideSecondaryStep:(id)step;
-(void)navigationSession:(id)session displaySecondaryStepManeuverType:(int)type junctionType:(int)type3 junctionElements:(XXStruct_DtYHXC*)elements count:(unsigned long)count instructions:(id)instructions shorterAlternativeInstructions:(id)instructions7 shieldType:(int)type8 shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)navigationSession:(id)session displayManeuverAlertForAnnouncementStage:(int)announcementStage;
-(void)navigationSession:(id)session displayPrimaryStepManeuverType:(int)type junctionType:(int)type3 junctionElements:(XXStruct_DtYHXC*)elements count:(unsigned long)count instructions:(id)instructions shorterAlternativeInstructions:(id)instructions7 shieldType:(int)type8 shieldText:(id)text drivingSide:(int)side signColor:(int)color maneuverStepIndex:(unsigned)index isSynthetic:(BOOL)synthetic;
-(void)navigationSession:(id)session remainingTime:(double)time remainingDistance:(double)distance distanceUntilManeuver:(double)maneuver timeUntilManeuver:(double)maneuver5;
-(void)navigationSession:(id)session proceedToRouteDistance:(double)routeDistance displayString:(id)string remainingTime:(double)time remainingDistance:(double)distance signColor:(int)color closestStepIndex:(unsigned)index;
-(void)navigationSession:(id)session updatePointOfInterest:(XXStruct_gLbvpC)interest focusStyle:(int)style;
-(void)navigationSessionStartingNextStep:(id)step;
-(void)navigationSession:(id)session didChangeState:(int)state;
-(void)navigationSession:(id)session updatedMatchedLocation:(id)location;
-(void)navigationSessionWillResumeFromPause:(id)navigationSession;
-(void)navigationSessionWillPause:(id)navigationSession;
-(void)navigationSession:(id)session failedWithErrorCode:(int)errorCode;
-(void)navigationSessionWillEnd:(id)navigationSession;
-(void)navigationSession:(id)session willStartForRoute:(id)route;
@end
