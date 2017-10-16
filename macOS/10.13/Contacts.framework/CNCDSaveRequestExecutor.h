/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNCDSaveRequestExecutor : NSObject {
    CNCDContactSaveExecutor * _contactSaveExecutor;
    CNCDGroupMembershipSaveExecutor * _groupMembershipSaveExecutor;
    CNCDGroupSaveExecutor * _groupSaveExecutor;
    CNCDSaveContext * _saveContext;
}

+ (BOOL)executeSaveRequest:(id)arg1 inPersistenceStack:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)allContactIdentifiers;
- (id)allGroupIdentifiers;
- (BOOL)executeSaveRequest:(id*)arg1;
- (id)init;
- (id)initWithSaveRequest:(id)arg1 persistenceContext:(id)arg2 context:(id)arg3;
- (BOOL)loadContactsCache:(id*)arg1;
- (BOOL)loadGroupsCache:(id*)arg1;
- (BOOL)updateContactsCache:(id*)arg1;
- (BOOL)updateGroupsCache:(id*)arg1;

@end