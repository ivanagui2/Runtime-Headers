/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPropertySummaryBuilder : NSObject <ABPropertySummaryBuilding> {
    NSMutableDictionary * _builders;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)buildSummaryForValue:(id)arg1 property:(id)arg2;
- (id)builderForProperty:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)makeBuilderForProperty:(id)arg1;

@end
