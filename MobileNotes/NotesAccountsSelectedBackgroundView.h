/* NotesAccountsSelectedBackgroundView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileNotes-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIBezierPath;

__attribute__((visibility("hidden")))
@interface NotesAccountsSelectedBackgroundView : XXUnknownSuperclass {
	unsigned _rectCorners;
	UIBezierPath* _cachedPath;
	CGRect _cachedRect;
}
-(void).cxx_destruct;
-(void)drawRect:(CGRect)rect;
-(id)initWithRoundedTopCorners:(BOOL)roundedTopCorners bottomCorners:(BOOL)corners;
@end