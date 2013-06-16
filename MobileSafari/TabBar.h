/* TabBar.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, TabBarItem, UIPanGestureRecognizer;
@protocol TabBarDelegate;

__attribute__((visibility("hidden")))
@interface TabBar : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	UIPanGestureRecognizer* _reorderRecognizer;
	CGPoint _reorderOrigin;
	CGPoint _reorderEffectiveTouchLocation;
	TabBarItem* _floatingItem;
	TabBarItem* _sinkingItem;
	BOOL _usesPrivateBrowsingStyle;
	BOOL _shouldShowMoreTabsButton;
	id<TabBarDelegate> _delegate;
	NSArray* _items;
}
@property(assign, nonatomic) BOOL usesPrivateBrowsingStyle;
@property(assign, nonatomic) BOOL shouldShowMoreTabsButton;
@property(copy, nonatomic) NSArray* items;
@property(assign, nonatomic) id<TabBarDelegate> delegate;
+(float)defaultHeight;
-(void)dealloc;
-(void)_item:(id)item didUpdateFromTitle:(id)title toTitle:(id)title3;
-(unsigned)_maximumTruncationIndexForTitle:(id)title;
-(CGRect)moreTabsPopoverPresentationRect;
-(CGRect)addTabPopoverPresentationRect;
-(void)reorder:(id)reorder;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)_finishReorderingAnimated:(BOOL)animated;
-(void)_beginReorderingItem:(id)item;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(id)_itemForTouch:(id)touch;
-(id)_itemAtLocation:(CGPoint)location;
-(void)setItems:(id)items animated:(BOOL)animated;
-(void)setItems:(id)items animated:(BOOL)animated completion:(id)completion;
-(void)layoutSubviews;
-(void)_layoutIndexes:(id)indexes ofItems:(id)items;
-(unsigned)_effectiveIndexForIndex:(unsigned)index ofItems:(id)items;
-(CGRect)_frameForItemAtIndex:(unsigned)index;
-(unsigned)itemCountThatFits;
-(void)_layoutItem:(id)item inRect:(CGRect)rect withPreviousItem:(id)previousItem seenActiveItemYet:(BOOL)yet;
-(void)_itemDidPressMoreTabsButton:(id)_item;
-(void)_itemDidPressCloseButton:(id)_item;
-(void)_tabButtonPressed;
-(id)initWithFrame:(CGRect)frame;
@end