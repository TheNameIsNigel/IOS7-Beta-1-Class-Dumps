/* ISURLOperationDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ISOperationDelegate.h"


@protocol ISURLOperationDelegate <ISOperationDelegate>
@optional
-(id)operation:(id)operation sanitizedStringForString:(id)string;
-(BOOL)operation:(id)operation willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;
-(void)operation:(id)operation willSendRequest:(id)request;
-(BOOL)operation:(id)operation processData:(id)data error:(id*)error;
-(id)operation:(id)operation needNewBodyStream:(id)stream;
-(void)operation:(id)operation finishedWithOutput:(id)output;
-(void)operation:(id)operation didReceiveResponse:(id)response;
-(void)operation:(id)operation didDiscoverContentLength:(id)length;
@end