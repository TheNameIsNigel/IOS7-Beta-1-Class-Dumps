/* SBFolderObserver.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBFolderObserver <NSObject>
-(void)folder:(id)folder didRemoveLists:(id)lists atIndexes:(id)indexes;
-(void)folder:(id)folder didAddList:(id)list;
@end
