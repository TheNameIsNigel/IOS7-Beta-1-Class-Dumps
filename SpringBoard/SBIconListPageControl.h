/* SBIconListPageControl.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@protocol SBIconListPageControlDelegate;

__attribute__((visibility("hidden")))
@interface SBIconListPageControl : XXUnknownSuperclass {
	id _delegate;
	BOOL _firstPageIsSearch;
}
@property(assign, nonatomic) BOOL firstPageIsSearch;
@property(assign, nonatomic) id<SBIconListPageControlDelegate> delegate;
-(void)setFrame:(CGRect)frame;
-(id)_pageIndicatorCurrentImageForPage:(int)page;
-(id)_pageIndicatorImageForPage:(int)page;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(float)defaultHeight;
@end
