/* MusicNoContentView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Music-Structs.h"

@class UILabel, _UIBackdropView, UIButton;

__attribute__((visibility("hidden")))
@interface MusicNoContentView : XXUnknownSuperclass {
	BOOL _canShowStoreButton;
	_UIBackdropView* _dimmingView;
	UIButton* _storeButton;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
}
+(void)endApplicationTranslucency;
+(void)beginApplicationTranslucency;
-(void).cxx_destruct;
-(void)_updateStoreButton;
-(void)_musicStoreRestrictionDidChangeNotification:(id)_musicStoreRestriction;
-(void)_storeButtonAction:(id)action;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
