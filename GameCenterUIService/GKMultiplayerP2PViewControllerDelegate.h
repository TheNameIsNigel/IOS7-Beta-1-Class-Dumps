/* GKMultiplayerP2PViewControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol GKMultiplayerP2PViewControllerDelegate <NSObject>
-(void)multiplayerP2PViewController:(id)controller sendData:(id)data;
-(void)multiplayerP2PViewController:(id)controller cancelInviteToPlayer:(id)player;
-(void)multiplayerP2PViewController:(id)controller startMatchingWithRequest:(id)request;
-(void)multiplayerP2PViewControllerWasCancelled:(id)cancelled;
-(void)multiplayerP2PViewController:(id)controller didFinishWithError:(id)error;
@end