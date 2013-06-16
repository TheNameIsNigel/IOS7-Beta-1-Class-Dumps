/* URLCompletionMatchBookmarkListData.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "WBSURLCompletionMatchData.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, HistoryItem, NSMutableArray;

__attribute__((visibility("hidden")))
@interface URLCompletionMatchBookmarkListData : XXUnknownSuperclass <WBSURLCompletionMatchData> {
	NSMutableArray* _bookmarks;
	HistoryItem* _historyItem;
}
@property(readonly, assign, nonatomic) BOOL lastVisitWasFailure;
@property(readonly, assign, nonatomic) double lastVisitedTimeInterval;
@property(readonly, assign, nonatomic) BOOL containsBookmark;
@property(readonly, assign, nonatomic) NSString* originalURLString;
-(float)topSitesScoreAtTime:(double)time;
-(BOOL)matchesAutocompleteTrigger:(id)trigger;
-(void)enumerateUserVisibleURLsUsingBlock:(id)block;
-(void)enumeratePageTitlesUsingBlock:(id)block;
-(id)matchDataByMergingWithMatchData:(id)matchData;
-(id)pageTitleForUserVisibleURLStringAtIndex:(unsigned)index;
-(id)userVisibleURLStringAtIndex:(unsigned)index;
-(id)userVisibleURLStringForPageTitleAtIndex:(unsigned)index;
-(id)pageTitleAtIndex:(unsigned)index;
-(id)_historyItemUserVisibleURLString;
-(id)_bookmarkUserVisibleURLString;
-(void)dealloc;
-(id)bookmark;
-(id)initWithBookmark:(id)bookmark andBookmark:(id)bookmark2;
-(id)initWithBookmark:(id)bookmark historyItem:(id)item;
@end