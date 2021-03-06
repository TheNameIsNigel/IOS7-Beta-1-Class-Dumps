/* MSNotificationDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */



@protocol MSNotificationDelegate
-(void)_invalidateSectionParametersForNotificationService:(id)notificationService;
-(void)notificationService:(id)service didRemoveMessageIds:(id)ids;
-(void)notificationService:(id)service didFetchSummaryForMessages:(id)messages;
-(void)notificationService:(id)service didFetchMessages:(id)messages;
-(void)notificationService:(id)service didChangeAccounts:(id)accounts;
-(void)messageFlagsChangedForNotificationService:(id)notificationService;
-(void)protectedDataBecameAvailableForNotificationService:(id)notificationService;
-(void)notificationServiceDidShutdown:(id)notificationService withError:(id)error;
@end
