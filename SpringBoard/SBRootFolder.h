/* SBRootFolder.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBIconIndexNodeObserver.h"
#import "SBFolder.h"

@class SBDockIconListModel;

__attribute__((visibility("hidden")))
@interface SBRootFolder : SBFolder <SBIconIndexNodeObserver> {
	SBDockIconListModel* _dock;
}
-(void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
-(void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
-(void)_notifyIndexChange:(int)change identifiers:(id)identifiers withValidationBlock:(id)validationBlock;
-(id)nodeDescriptionWithPrefix:(id)prefix;
-(id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
-(id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
-(id)containedNodeIdentifiers;
-(BOOL)containsNodeIdentifier:(id)identifier;
-(id)nodeIdentifier;
-(void)placeIconsOnFirstPage:(id)page;
-(id)representation;
-(BOOL)resetWithRepresentation:(id)representation model:(id)model leafIdentifiersAdded:(id)added;
-(id)_listsForCompaction;
-(BOOL)canEditDisplayName;
-(BOOL)canRemoveIcons;
-(id)folderType;
-(id)iconsOfClass:(Class)aClass;
-(void)markIconStateClean;
-(BOOL)isIconStateDirty;
-(void)removeEmptyList:(id)list;
-(id)listContainingLeafIconWithIdentifier:(id)identifier;
-(id)listContainingIcon:(id)icon;
-(unsigned)indexOfList:(id)list;
-(id)listAtIndex:(unsigned)index;
-(id)dockModel;
-(void)dealloc;
-(id)init;
-(Class)controllerClass;
-(Class)listViewClass;
-(Class)listModelClass;
@end