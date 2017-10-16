/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface ABCDRecord : NSManagedObject {
    NSMutableDictionary * _propertyValueCache;
    ABRecord * _publicRecord;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readwrite, retain) NSSet *customProperties;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readwrite, retain) NSDate *primitiveCreationDate;
@property (nonatomic, readwrite, retain) NSNumber *primitiveCreationDateYear;
@property (nonatomic, readwrite, retain) NSNumber *primitiveCreationDateYearless;
@property (nonatomic, readwrite, retain) NSDate *primitiveModificationDate;
@property (nonatomic, readwrite, retain) NSNumber *primitiveModificationDateYear;
@property (nonatomic, readwrite, retain) NSNumber *primitiveModificationDateYearless;
@property (nonatomic, readwrite, retain) NSString *primitiveUniqueId;
@property (nonatomic, readwrite, retain) NSString *uniqueId;

// Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence

+ (BOOL)_isPublicRecord;
+ (id)_newUniqueIdForTable:(id)arg1;
+ (id)_table;
+ (BOOL)abEntityKnowsKey:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)abEntityName;
+ (id)bitwiseAndPredicateForKey:(id)arg1 andNumber:(long long)arg2 comparingToNumber:(long long)arg3 withComparisonType:(unsigned long long)arg4;
+ (void)clearCachedPropertyValue:(id)arg1;
+ (id)compoundPredicateForKey:(id)arg1 option:(id)arg2 andSubPredicate:(id)arg3;
+ (void)extractYear:(long long*)arg1 yearlessDate:(double*)arg2 fromDate:(id)arg3;
+ (id)fetchObjectForClass:(Class)arg1 withUniqueId:(id)arg2 managedObjectContext:(id)arg3;
+ (id)fetchObjectForClass:(Class)arg1 withUniqueId:(id)arg2 managedObjectContext:(id)arg3 affectedStores:(id)arg4;
+ (BOOL)hasAddressBookContentForRecord:(id)arg1;
+ (void)initialize;
+ (id)insertNewObjectInManagedObjectContact:(id)arg1;
+ (id)makeUniqueId;
+ (id)managedObjectModel;
+ (id)managedObjectModelUrl;
+ (id)newIncrementedSearchString:(id)arg1;
+ (id)newNormalizedSearchString:(id)arg1;
+ (id)newNormalizedSortString:(id)arg1;
+ (id)prefetchRelationshipKeyPaths;

- (BOOL)_isPublicRecord;
- (id)_table;
- (BOOL)_valueHasChangedForKey:(id)arg1;
- (id)aggregateModificationDate;
- (void)awakeFromInsert;
- (id)bucketKey;
- (void)cachePropertyValue:(id)arg1 withKey:(id)arg2 uniqueId:(id)arg3;
- (void)clearCachedPropertyValue:(id)arg1 withKey:(id)arg2;
- (void)clearCachedPropertyValuesWithKey:(id)arg1;
- (long long)creationDateYear;
- (double)creationDateYearless;
- (void)dealloc;
- (void)didTurnIntoFault;
- (id)displayName;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)initWithEntity:(id)arg1 uniqueId:(id)arg2 insertIntoManagedObjectContext:(id)arg3;
- (void)invalidateAllCachedPropertyValues;
- (void)invalidateCachedPropertyValuesWithKey:(id)arg1;
- (BOOL)isKindOfEntityNamed:(id)arg1;
- (long long)modificationDateYear;
- (double)modificationDateYearless;
- (id)nts_ChangedProperties;
- (BOOL)nts_HasChangedProperties;
- (id)nts_UniqueId;
- (id)primitivePublicRecord;
- (id)propertyValueCache;
- (void)setAggregateModificationDate:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCreationDateYear:(id)arg1;
- (void)setCreationDateYearless:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setModificationDateYear:(id)arg1;
- (void)setModificationDateYearless:(id)arg1;
- (void)setPrimitivePublicRecord:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 withEntityName:(id)arg3 entityKey:(id)arg4;
- (void)touch:(id)arg1;
- (id)valueForKey:(id)arg1 withEntityName:(id)arg2 entityKey:(id)arg3;

// ABCDRecord (ABCDRecordFormatter)

- (unsigned long long)nameOrderWithFormatter:(id)arg1;
- (id)nameWithFormatter:(id)arg1 rangeOfSortingSubstring:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;

// Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook

// ABCDRecord (AddressBook)

+ (id)abEntityDescriptionInAddressBook:(id)arg1;
+ (BOOL)abEntityKnowsKey:(id)arg1 inAddressBook:(id)arg2;
+ (void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(struct __CFDictionary { }*)arg4 valueWithEntityConverter:(struct __CFDictionary { }*)arg5;
+ (long long)addPropertiesAndTypes:(id)arg1 forClass:(Class)arg2 withAddressBook:(id)arg3;
+ (long long)addPropertiesAndTypes:(id)arg1 forClass:(Class)arg2 withAddressBook:(id)arg3 acquireLock:(BOOL)arg4 save:(BOOL)arg5;
+ (id)copyPublicRecordForClass:(Class)arg1 withDatabaseImpl:(id)arg2 inAddressBook:(id)arg3;
+ (id)copyPublicRecordsForClass:(Class)arg1 withDatabaseImpls:(id)arg2 inAddressBook:(id)arg3;
+ (id)customPropertyDefinitionWithName:(id)arg1 addressBook:(id)arg2 persistentStore:(id)arg3;
+ (id)customPropertyDescriptionWithName:(id)arg1 addressBook:(id)arg2 persistentStore:(id)arg3;
+ (id)customPropertyDescriptionsWithAddressBook:(id)arg1 persistentStore:(id)arg2;
+ (id)customPropertyValueKeyNameForPropertyType:(long long)arg1 isSerializedPropertyList:(BOOL*)arg2;
+ (id)entityNameForPropertyKey:(id)arg1;
+ (id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3;
+ (id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3 entityWithValueSel:(SEL*)arg4 valueWithEntitySel:(SEL*)arg5;
+ (id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3 entityWithValueSel:(SEL*)arg4 valueWithEntitySel:(SEL*)arg5 converterKeys:(id*)arg6;
+ (id)managedObjectContextForAddressBook:(id)arg1;
+ (id)metadataType;
+ (id)propertyForKey:(id)arg1;
+ (id)propertyTypesForClass:(Class)arg1 withAddressBook:(id)arg2 acquireLock:(BOOL)arg3;
+ (id)publicRecordsForClass:(Class)arg1 withDatabaseImpls:(id)arg2 inAddressBook:(id)arg3;
+ (long long)typeOfCustomProperty:(id)arg1 addressBook:(id)arg2;
+ (long long)typeOfProperty:(id)arg1 forRecord:(id)arg2;

- (void)abPublicRecordIsGone:(id)arg1;
- (id)account;
- (id)accountBaseURL;
- (id)accountRepository;
- (id)addressBook;
- (id)allCustomPropertyValuesWithCustomProperty:(id)arg1;
- (id)allCustomPropertyValuesWithCustomPropertyDescription:(id)arg1;
- (BOOL)applyMultiValue:(id)arg1 withProperty:(id)arg2 toRecord:(id)arg3;
- (id)copyMultiValueWithRecord:(id)arg1 withProperty:(id)arg2;
- (id)customPropertyDefinitionWithName:(id)arg1 persistentStore:(id)arg2;
- (id)customPropertyDescriptionWithName:(id)arg1 persistentStore:(id)arg2;
- (id)fetchCustomPropertyValuesWithCustomProperty:(id)arg1 addressBook:(id)arg2;
- (id)fetchPropertyValuesWithKey:(id)arg1 uniqueId:(id)arg2;
- (id)initWithUniqueId:(id)arg1 addressBook:(id)arg2;
- (id)metadataURL;
- (id)nts_AffectsSmartGroupsIsNew:(BOOL)arg1 record:(id)arg2;
- (id)nts_ParentGroupsOfRecord:(id)arg1;
- (void)nts_SetSingleValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)nts_SetValue:(id)arg1 forProperty:(id)arg2 record:(id)arg3;
- (id)nts_SingleValueForProperty:(id)arg1;
- (id)nts_ValueForProperty:(id)arg1 record:(id)arg2 addressBook:(id)arg3;
- (id)permanentObjectID;
- (id)propertyValueWithKey:(id)arg1 uniqueId:(id)arg2;
- (id)propertyValueWithKey:(id)arg1 uniqueId:(id)arg2 preventFetching:(BOOL)arg3;
- (id)propertyValuesWithKey:(id)arg1;
- (id)publicRecord;
- (id)publicRecordCreatingRecordIfNecessary;
- (void)setPublicRecord:(id)arg1;
- (id)sortedPropertyValuesWithKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end