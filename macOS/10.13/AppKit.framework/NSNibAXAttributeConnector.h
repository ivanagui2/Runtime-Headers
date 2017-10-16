/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNibAXAttributeConnector : NSObject <NSCoding> {
    NSString * _attributeType;
    NSString * _attributeValue;
    id  _destination;
}

- (id)attributeType;
- (id)attributeValue;
- (void)dealloc;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (void)establishConnection;
- (id)initWithCoder:(id)arg1;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (id)label;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)setAttributeType:(id)arg1;
- (void)setAttributeValue:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

// NSNibAXAttributeConnector (NSIBObjectDataAXExtras)

- (BOOL)_isAXConnector;

@end