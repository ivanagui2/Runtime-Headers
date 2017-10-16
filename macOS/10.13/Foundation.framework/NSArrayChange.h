/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSArrayChange : NSObject

@property (atomic, readonly) unsigned long long changeType;
@property (atomic, readonly) unsigned long long destinationIndex;
@property (atomic, readonly) unsigned long long sourceIndex;
@property (atomic, readonly) id value;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned long long)changeType;
- (unsigned long long)destinationIndex;
- (id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4;
- (unsigned long long)sourceIndex;
- (id)value;

@end