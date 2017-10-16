/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNCDContactSaveExecutor : NSObject {
    CNCDSaveContext * _saveContext;
}

+ (id)contactSaveExecutorLog;
+ (id)contactsLinkedToContact:(id)arg1 inSaveContext:(id)arg2;

- (void).cxx_destruct;
- (void)addContacts;
- (id)allContactIdentifiers;
- (void)applyDiff:(id)arg1 toUnifiedContact:(id)arg2 withIdentifierMap:(id)arg3;
- (void)deleteContacts;
- (void)enumerateAddedContacts:(id)arg1;
- (id)initWithSaveContext:(id)arg1;
- (id)insertedContactIdentifiers;
- (void)saveContacts;
- (void)updateCacheWithAddedContacts;
- (void)updateContactSnapshots;
- (void)updateContacts;
- (void)updateMeContact;
- (void)updateNonUnifiedContacts:(id)arg1;
- (void)updateUnifiedContacts:(id)arg1;

@end