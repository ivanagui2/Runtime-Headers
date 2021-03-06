/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTMetadataItem : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    QTMetadataItemInternal * _priv;
}

@property (atomic, readonly) NSData *dataValue;
@property (atomic, readonly) NSDate *dateValue;
@property (atomic, readonly, copy) NSDictionary *extraAttributes;
@property (atomic, readonly, copy) <NSCopying> *key;
@property (atomic, readonly, copy) NSString *keySpace;
@property (atomic, readonly, copy) NSLocale *locale;
@property (atomic, readonly) NSNumber *numberValue;
@property (atomic, readonly) NSString *stringValue;
@property (atomic, readonly) struct { long long x1; long long x2; long long x3; } time;
@property (atomic, readonly, copy) <NSCopying> *value;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extraAttributes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributes:(id)arg1 value:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 keySpace:(id)arg2 locale:(id)arg3 time:(struct { long long x1; long long x2; long long x3; })arg4 value:(id)arg5 extraAttributes:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (id)keySpace;
- (id)locale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; long long x2; long long x3; })time;
- (id)value;

// QTMetadataItem (QTMetadataItem_ArrayFiltering)

+ (id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2;

// QTMetadataItem (QTMetadataItem_TypeCoercion)

- (id)dataValue;
- (id)dateValue;
- (id)numberValue;
- (id)stringValue;

@end
