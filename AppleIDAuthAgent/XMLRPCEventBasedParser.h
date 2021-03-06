/* XMLRPCEventBasedParser.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSXMLParserDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class XMLRPCEventBasedParserDelegate, NSXMLParser;

__attribute__((visibility("hidden")))
@interface XMLRPCEventBasedParser : XXUnknownSuperclass <NSXMLParserDelegate> {
@private
	NSXMLParser* myParser;
	XMLRPCEventBasedParserDelegate* myParserDelegate;
	BOOL isFault;
}
-(void)dealloc;
-(BOOL)isFault;
-(id)parserError;
-(void)abortParsing;
-(id)parse;
-(id)initWithData:(id)data;
-(void)parser:(id)parser parseErrorOccurred:(id)occurred;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
@end
