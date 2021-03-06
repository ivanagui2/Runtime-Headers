/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNCDCustomPropertySaveExecutor : NSObject

+ (void)_addCustomPropertiesWithRemoteCustomProperties:(id)arg1 managedObjectContext:(id)arg2;
+ (id)_customPropertiesInManagedObjectContext:(id)arg1;
+ (void)_deleteCustomPropertiesWithPropertyNames:(id)arg1 managedObjectContext:(id)arg2;
+ (id)_fetchAllCustomPropertyValuesForOwnerWithIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)_fetchCustomPropertyWithPropertyName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)_fetchRecordWithIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)_saveCustomPropertyValuesForRemoteRecord:(id)arg1 inManagedObjectContext:(id)arg2;
+ (BOOL)saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 withPersistenceStack:(id)arg3 error:(id*)arg4;
+ (BOOL)saveCustomPropertyValuesForRemoteRecords:(id)arg1 withPersistenceStack:(id)arg2 error:(id*)arg3;

@end
