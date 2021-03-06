/* UnifiedField.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TopHitCompletionView, NSString, TopHitCompletionPromotionRecognizer, URLCompletionItem;
@protocol UnifiedFieldDelegate;

__attribute__((visibility("hidden")))
@interface UnifiedField : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	BOOL _lastEditWasADeletion;
	NSString* _pendingTopHitNavigationText;
	URLCompletionItem* _topHit;
	TopHitCompletionView* _topHitCompletionView;
	TopHitCompletionPromotionRecognizer* _topHitCompletionPromotionRecognizer;
	int _cursorPositioning;
}
@property(readonly, assign, nonatomic) NSString* textWithoutWhitespace;
@property(readonly, assign, nonatomic) float placeholderHorizontalInset;
@property(assign, nonatomic) int cursorPositioning;
@property(assign, nonatomic) id<UnifiedFieldDelegate> delegate;
-(id)_findPleasingWordBoundaryFromPosition:(id)position;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)layoutSubviews;
-(void)_layoutTopHitCompletionView;
-(void)topHitDidBecomeReady;
-(void)_setTopHit:(id)hit;
-(id)_topHit;
-(void)_promoteTopHitCompletion;
-(id)_topHitCompletionString;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)_removeTopHitCompletionView;
-(void)_cancelPendingTopHitNavigation;
-(BOOL)_caretHiddenDueToTopHit;
-(CGRect)placeholderRectForBounds:(CGRect)bounds;
-(void)setText:(id)text;
-(BOOL)keyboardInputShouldDelete:(id)keyboardInput;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(id)_topHitForCurrentText;
-(BOOL)_waitingForTopHitForCurrentText;
-(void)_textDidChangeFromTyping;
-(void)_updateReturnKey;
-(void)_endEditingWithCurrentText;
-(unsigned)_unifiedFieldInputType;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
