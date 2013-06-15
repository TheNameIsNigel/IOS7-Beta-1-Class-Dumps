/* SBStarkBackgroundProvider.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBStarkBackgroundProvider : XXUnknownSuperclass {
	NSString* _serviceName;
	NSString* _viewControllerClassName;
	unsigned _priority;
}
@property(readonly, assign, nonatomic) unsigned priority;
@property(readonly, assign, nonatomic) NSString* viewControllerClassName;
@property(readonly, assign, nonatomic) NSString* serviceName;
-(id)description;
-(void)dealloc;
-(id)initWithServiceName:(id)serviceName viewControllerClassName:(id)name priority:(unsigned)priority;
-(id)initWithServiceName:(id)serviceName options:(id)options;
@end