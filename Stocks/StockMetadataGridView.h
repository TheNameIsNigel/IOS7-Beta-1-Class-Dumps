/* StockMetadataGridView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Stocks-Structs.h"
#import <Foundation/NSString.h>

@class NSArray, Stock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface StockMetadataGridView : NSString {
	NSArray* _nameArray;
	NSMutableArray* _valueArray;
	Stock* _stock;
	BOOL _metadataUpdated;
}
@property(assign, nonatomic) BOOL metadataUpdated;
-(void).cxx_destruct;
-(void)displayMetadataForStock:(id)stock;
-(void)updateValueStringsForStock:(id)stock reducedFractionDigits:(BOOL)digits;
-(void)drawRect:(CGRect)rect;
-(void)_drawColumnOfStrings:(id)strings atPoint:(CGPoint)point forWidth:(float)width lineHeight:(float)height lineSpacing:(float)spacing font:(id)font alignment:(int)alignment;
-(id)init;
@end
