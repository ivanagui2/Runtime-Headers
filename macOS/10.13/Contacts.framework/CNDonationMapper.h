/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNDonationMapper : NSObject <CNDataMapper> {
    CNDonationStore * _donationStore;
    CNContactsEnvironment * _environment;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) CNDonationStore *donationStore;
@property (nonatomic, readonly) CNContactsEnvironment *environment;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)log;
+ (id)mapperIdentifier;

- (void).cxx_destruct;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)defaultContainerIdentifier;
- (id)donationStore;
- (id)environment;
- (BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)initWithDonationStore:(id)arg1 environment:(id)arg2;
- (id)meContactIdentifiers:(id*)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id)arg2;
- (BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;

@end
