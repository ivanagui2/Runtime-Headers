/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABLegacyIMSearchElementTransformer : ABSearchElementTransformer

+ (id)sharedLegacyIMTransformer;

- (id)convertToModernIMSearchElement:(id)arg1;
- (BOOL)isLegacyIMSearchElement:(id)arg1;
- (id)recursivelyTransformChildren:(id)arg1;
- (id)transformConjunction:(id)arg1;
- (id)transformSearchElement:(id)arg1;

@end
