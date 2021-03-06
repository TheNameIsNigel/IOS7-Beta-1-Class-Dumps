/* SearchResultsPageRenderer.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "MapPageRenderer.h"

@class SearchManager, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SearchResultsPageRenderer : MapPageRenderer {
	SearchManager* _searchManager;
	NSMutableArray* _searchResultCells;
	XXStruct_gLbvpC topLeftCorner;
	XXStruct_gLbvpC mlMapPoint;
	XXStruct_gLbvpC mrMapPoint;
}
@property(retain, nonatomic) SearchManager* searchManager;
-(void)dealloc;
-(void)drawContentForPageAtIndex:(int)index inRect:(CGRect)rect;
-(void)_drawPinsInRect:(CGRect)rect zoomLevel:(float)level;
-(void)drawTopContentInRect:(CGRect)rect forPageAtIndex:(int)index;
-(CGRect)overviewRect;
-(int)numberOfPages;
-(void)_preparePageContent;
-(int)searchResultsPerPage;
-(void)prepareForDrawingPages:(NSRange)drawingPages;
-(id)initWithSearchManager:(id)searchManager worldView:(id)view;
-(float)_zoomLevelForCoordinateRegion:(XXStruct_Yvvv9D)coordinateRegion clampTo:(float)to;
@end
