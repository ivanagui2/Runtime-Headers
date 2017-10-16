/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNCDGroupFetcher : NSObject {
    BOOL  _allowGenericPredicate;
    CNCDPersistenceContext * _persistenceContext;
    NSPredicate * _predicate;
}

+ (id)groupsMatchingPredicate:(id)arg1 inPersistenceStack:(id)arg2 allowGenericPredicate:(BOOL)arg3 error:(id*)arg4;
+ (id)groupsMatchingPredicate:(id)arg1 inPersistenceStack:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)effectivePredicate:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)fetchContainerScopedGroupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)fetchCoreDataGroupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)fetchExchangeGroupsMatchingPredicate:(id)arg1;
- (id)fetchExchangeGroupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)fetchGroups:(id*)arg1;
- (id)fetchRequestWithPredicate:(id)arg1;
- (id)init;
- (id)initWithPredicate:(id)arg1 persistenceContext:(id)arg2 allowGenericPredicate:(BOOL)arg3;
- (id)validatePredicate:(id)arg1 error:(id*)arg2;

@end