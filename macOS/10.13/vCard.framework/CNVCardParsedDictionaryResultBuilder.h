/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
 */

@interface CNVCardParsedDictionaryResultBuilder : NSObject <CNVCardParsedResultBuilder> {
    NSMutableDictionary * _dictionaryRep;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)factory;

- (void).cxx_destruct;
- (id)build;
- (BOOL)canSetValueForProperty:(id)arg1;
- (id)init;
- (BOOL)setImageData:(id)arg1;
- (BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (void)setUnknownProperties:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (id)validCountryCodes;
- (id)valueForProperty:(id)arg1;

@end