/* MNNavigationOverviewBar.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MapsChromeTopBarContent.h"
#import "Maps-Structs.h"

@class UIBarButtonItem, TopBarTitleView, NSString, MainChromeViewController;
@protocol MNNavigationOverviewBarDelegate;

__attribute__((visibility("hidden")))
@interface MNNavigationOverviewBar : XXUnknownSuperclass <MapsChromeTopBarContent> {
	id<MNNavigationOverviewBarDelegate> _delegate;
	TopBarTitleView* _titleView;
	UIBarButtonItem* _title;
	UIBarButtonItem* _end;
	UIBarButtonItem* _overview;
	BOOL _overviewHidden;
	BOOL _isDimmed;
	MainChromeViewController* _chromeViewController;
}
@property(assign, nonatomic) MainChromeViewController* chromeViewController;
@property(assign, nonatomic) BOOL isDimmed;
@property(assign, nonatomic) BOOL compact;
@property(retain, nonatomic) NSString* titleLabelText;
@property(assign, nonatomic) id<MNNavigationOverviewBarDelegate> delegate;
-(void)delayRefreshForAnimation;
-(void)setShowsDimmedDisplay:(BOOL)display animation:(id)animation;
-(void)_overviewTapped;
-(void)_endTapped;
-(id)toolbarItemsForIdiom:(int)idiom;
-(void)topBarSizeWillChange:(CGSize)topBarSize;
-(void)topBarSizeDidChange:(CGSize)topBarSize;
-(void)setOverviewButtonHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)setDetailLabelText:(id)text;
-(void)dealloc;
-(id)initForActivity:(int)activity;
@end
