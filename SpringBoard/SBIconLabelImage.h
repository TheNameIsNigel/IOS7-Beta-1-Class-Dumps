/* SBIconLabelImage.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBCountedMapValue.h"

@class SBIconLabelImageParameters;

__attribute__((visibility("hidden")))
@interface SBIconLabelImage : XXUnknownSuperclass <SBCountedMapValue> {
	SBIconLabelImageParameters* _parameters;
	CGPoint _maxSizeOffset;
}
@property(readonly, assign, nonatomic) CGPoint maxSizeOffset;
@property(readonly, assign, nonatomic) SBIconLabelImageParameters* parameters;
+(void)checkinLabelImage:(id)image;
+(id)checkoutLabelImageForParameters:(id)parameters;
+(id)_drawLabelImageForParameters:(id)parameters;
+(id)_labelImageCountedMap;
+(void)drawImageInRect:(CGRect)rect fromParameters:(id)parameters;
+(CGRect)rectFromParameters:(id)parameters constrainedToRect:(CGRect)rect;
+(CGRect)_rectWithDrawing:(BOOL)drawing inRect:(CGRect)rect fromParameters:(id)parameters;
-(id)description;
-(id)countedMapKey;
-(void)dealloc;
-(id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;
-(id)_initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation parameters:(id)parameters maxSizeOffset:(CGPoint)offset;
@end
