/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCNLegacyAddressBookDataMapper : NSObject <ABCNDataMapper, ABCNDataMapperSaveTransaction> {
    ABAddressBook * _addressBook;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (void)applyContact:(id)arg1 toABPerson:(id)arg2 inAddressBook:(id)arg3;
+ (id)executeAddedPeople:(id)arg1 inAddressBook:(id)arg2;
+ (id)executeAddedPerson:(id)arg1 inAddressBook:(id)arg2 accountIdentifier:(id)arg3;
+ (id)executeDeletedContact:(id)arg1 inAddressBook:(id)arg2 usingPreparedCollection:(id)arg3;
+ (id)executeUpdatedContacts:(id)arg1 inAddressBook:(id)arg2;
+ (id)fetchRequestForGroups;
+ (id)nts_fetchGroupsWithCoreDataRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;

- (id)accountForContactWithIdentifier:(id)arg1;
- (id)accountsForContactsWithIdentifiers:(id)arg1;
- (void)addContacts:(id)arg1 withSaveResponse:(id)arg2;
- (void)addGroup:(id)arg1 toAccountWithIdentifier:(id)arg2 withSaveResponse:(id)arg3;
- (void)addGroups:(id)arg1 withSaveResponse:(id)arg2;
- (void)clearMeCardIdentifierWithSaveResponse:(id)arg1;
- (BOOL)commitChangesWithSaveResponse:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)deleteContacts:(id)arg1 withSaveResponse:(id)arg2;
- (void)deleteGroups:(id)arg1 withSaveResponse:(id)arg2;
- (void)executeSaveTransactionWithBlock:(id)arg1;
- (id)fetchContactsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)fetchContactsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)fetchContactsWithIdentifiers:(id)arg1 unify:(BOOL)arg2 error:(id*)arg3;
- (id)fetchContactsWithLinkIdentifier:(id)arg1 error:(id*)arg2;
- (unsigned long long)fetchCountOfContactsWithLinkIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchDistributionListIdentifierWithProperty:(id)arg1 contactIdentifier:(id)arg2 groupIdentifier:(id)arg3;
- (id)fetchGroupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (void)fetchGroupsMatchingPredicate:(id)arg1 withObserver:(id)arg2;
- (id)fetchGroupsWithCoreDataRequest:(id)arg1 error:(id*)arg2;
- (id)fetchIdentifierForMeCard:(id*)arg1;
- (id)fetchIdentifiersForMeCards:(id*)arg1;
- (id)init;
- (id)initWithAddressBook:(id)arg1;
- (BOOL)isContactReadOnly:(id)arg1;
- (id)photoForContact:(id)arg1;
- (id)photoForContacts:(id)arg1;
- (BOOL)setImageData:(id)arg1 onContact:(id)arg2 error:(id*)arg3;
- (void)setMeCardIdentifier:(id)arg1 withSaveResponse:(id)arg2;
- (void)updateContacts:(id)arg1 withSaveResponse:(id)arg2;
- (void)updateGroup:(id)arg1 withSaveResponse:(id)arg2;
- (void)updateGroups:(id)arg1 withSaveResponse:(id)arg2;

@end
