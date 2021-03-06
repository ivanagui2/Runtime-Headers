/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface ABCDDeletedRecordLog : ABCDRecord {
    id  _creationDate;
}

@property (atomic, readwrite, copy) NSString *deletedRecordUniqueId;

// Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence

+ (BOOL)_isPublicRecord;
+ (id)_table;
+ (id)abEntityName;

- (id)creationDate;
- (void)dealloc;
- (void)setCreationDate:(id)arg1;
- (void)setPrimitiveCreationDate:(id)arg1;
- (void)setPrimitiveCreationDateYear:(id)arg1;
- (void)setPrimitiveCreationDateYearless:(id)arg1;
- (void)touch:(id)arg1;

// Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook

// ABCDDeletedRecordLog (AddressBook)

+ (void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(struct __CFDictionary { }*)arg4 valueWithEntityConverter:(struct __CFDictionary { }*)arg5;
+ (void)doRemoveRecordsAndCreateLogsWithAddressBook:(id)arg1;

@end
