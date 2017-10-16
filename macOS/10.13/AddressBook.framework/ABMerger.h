/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABMerger : NSObject {
    NSMutableArray * _addedPeople;
    NSMutableArray * _addedToGroup;
    NSMutableArray * _allPeople;
    NSMutableArray * _deletedPeople;
    ABGroup * _group;
    ABPerson * _meCard;
    NSMutableDictionary * _mergedIntoGroup;
    NSArray * _personProperties;
    NSMutableDictionary * _selfMergedPeople;
    ABUIController * _uiController;
    NSMutableArray * _updatedPeople;
    NSMutableArray * _updatedPeopleProperties;
    NSMutableSet * _updatedPeopleSet;
}

- (void)_addPeople:(id)arg1 usingAddressBook:(id)arg2;
- (unsigned long long)_insertionIndexForPerson:(id)arg1;
- (void)addMember:(id)arg1 toGroup:(id)arg2;
- (void)addPerson:(id)arg1;
- (id)addedPeople;
- (id)addedToGroup;
- (id)allPeople;
- (id)allPersonProperties;
- (void)dealloc;
- (void)deletePerson:(id)arg1;
- (id)deletedPeople;
- (id)duplicatesForPeople:(id)arg1;
- (id)emulateUpdateCard:(id)arg1 withImportedCard:(id)arg2 changes:(id)arg3;
- (void)finalize;
- (BOOL)findSimilarMultiValuesForPerson:(id)arg1;
- (id)initWithUIController:(id)arg1 group:(id)arg2;
- (void)mergeSimilarMultiValuesForPerson:(id)arg1;
- (void)setMeCard:(id)arg1;
- (id)updateCard:(id)arg1 withImportedCard:(id)arg2;
- (id)updatedPeople;

@end