/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNPredicate : NSPredicate <CNDonatedContactsPredicate, NSCopying> {
    BOOL  _augmentMainStoreResults;
    NSPredicate * _cn_predicate;
    NSArray * _mainStoreContactIdentifiers;
}

@property (nonatomic, readwrite) BOOL augmentMainStoreResults;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) NSArray *mainStoreContactIdentifiers;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)augmentMainStoreResults;
- (id)cn_predicate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)mainStoreContactIdentifiers;
- (void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(BOOL)arg2;
- (id)predicateFormat;
- (void)setAugmentMainStoreResults:(BOOL)arg1;
- (void)setMainStoreContactIdentifiers:(id)arg1;

// CNPredicate (Donations)

- (id)contactsFromDonationStore:(id)arg1;

// CNPredicate (Suggested)

+ (id)_convertSuggestions:(id)arg1 withSortOrder:(long long)arg2 mutableObjects:(BOOL)arg3;

- (void)_convertContactMatches:(id)arg1 withService:(id)arg2 intoSuggestions:(id)arg3;
- (id)suggestedContactsWithSortOrder:(long long)arg1 keysToFetch:(id)arg2 mutableObjects:(BOOL)arg3 service:(id)arg4 error:(id*)arg5;

@end
