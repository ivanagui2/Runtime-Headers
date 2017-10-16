/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCardViewMultiValueReadOnlyTransformer : NSObject <ABCardViewMultiValueTransformer> {
    ABCardViewPersonMapper * _personMapper;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) ABCardViewPersonMapper *personMapper;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)accountPermissionsMultiValue:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)demuxEntryAtIndex:(unsigned long long)arg1 forMultiValue:(id)arg2;
- (id)initWithPersonMapper:(id)arg1;
- (id)personMapper;
- (id)readOnlyPersonIdentifiers:(id)arg1;
- (id)reverseTransformMultiValue:(id)arg1;
- (void)setPersonMapper:(id)arg1;
- (id)transformMultiValue:(id)arg1;
- (id)writablePersonIdentifiers:(id)arg1;

@end