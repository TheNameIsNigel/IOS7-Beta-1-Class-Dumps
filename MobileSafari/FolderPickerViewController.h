/* FolderPickerViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PopoverSizingTableViewController.h"

@class NSMutableArray, WebBookmarkCollection, WebBookmark, NSSet;
@protocol FolderPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface FolderPickerViewController : PopoverSizingTableViewController {
	id<FolderPickerViewControllerDelegate> _delegate;
	WebBookmarkCollection* _collection;
	NSSet* _hiddenFolderIdentifiers;
	WebBookmark* _parentBookmark;
	NSMutableArray* _bookmarkFolders;
	int _selectedFolderIndex;
}
-(void)willShowForParentBookmark:(id)parentBookmark hiddenFolderIdentifiers:(id)identifiers;
-(void)_cancel;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tintedFolderIcon;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate bookmarkCollection:(id)collection;
-(float)minimumHeightInPopoverView;
-(void)_bookmarksDidReload;
-(void)_bookmarksChanged;
-(id)_bookmarkFolders;
-(void)_appendFolderAndChildren:(id)children toArray:(id)array;
-(void)_appendFolderAndChildren:(id)children toArray:(id)array depth:(unsigned)depth;
@end