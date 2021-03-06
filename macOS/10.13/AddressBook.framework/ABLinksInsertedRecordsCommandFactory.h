/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABLinksInsertedRecordsCommandFactory : ABLinksUnlinkedRecordsCommandFactory {
    NSArray * _insertedRecords;
}

@property (atomic, readwrite, copy) NSArray *insertedRecords;

- (Class)builtCommandClass;
- (id)combineInsertedAndMatchingRecords:(id)arg1;
- (void)dealloc;
- (id)fetchContactsWithIdentifiers:(id)arg1;
- (id)fetchPeople;
- (id)identifiersOfCollidedPeople;
- (id)insertedRecords;
- (void)setInsertedRecords:(id)arg1;

@end
