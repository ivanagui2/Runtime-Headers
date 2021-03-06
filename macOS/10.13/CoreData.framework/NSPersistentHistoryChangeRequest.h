/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {
    NSDate * _date;
    struct __persistentHistoryChangeRequestDescriptionFlags { 
        unsigned int _useQueryGenerationToken : 1; 
        unsigned int _deleteHistoryRequest : 1; 
        unsigned int _reservedPersistentHistoryChangeRequestDescription : 30; 
    }  _persistentHistoryChangeRequestDescriptionFlags;
    long long  _resultType;
    NSPersistentHistoryToken * _token;
    NSArray * _transactionIDs;
    NSNumber * _transactionNumber;
}

@property (atomic, readwrite) long long resultType;
@property (atomic, readonly) NSPersistentHistoryToken *token;

+ (id)deleteHistoryBeforeDate:(id)arg1;
+ (id)deleteHistoryBeforeToken:(id)arg1;
+ (id)deleteHistoryBeforeTransaction:(id)arg1;
+ (id)fetchHistoryAfterDate:(id)arg1;
+ (id)fetchHistoryAfterToken:(id)arg1;
+ (id)fetchHistoryAfterTransaction:(id)arg1;

- (id)date;
- (void)dealloc;
- (id)description;
- (id)entityNameToFetch;
- (unsigned long long)fetchLimit;
- (unsigned long long)fetchOffset;
- (BOOL)includesPropertyValues;
- (BOOL)includesSubentities;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 delete:(BOOL)arg2;
- (id)initWithToken:(id)arg1;
- (id)initWithToken:(id)arg1 delete:(BOOL)arg2;
- (id)initWithTransactionID:(id)arg1 delete:(BOOL)arg2;
- (id)initWithTransactionIDs:(id)arg1;
- (BOOL)isDelete;
- (id)predicate;
- (id)propertiesToFetch;
- (id)propertiesToGroupBy;
- (unsigned long long)requestType;
- (long long)resultType;
- (BOOL)returnsDistinctResults;
- (void)setResultType:(long long)arg1;
- (void)setUseQueryGenerationToken:(BOOL)arg1;
- (id)sortDescriptors;
- (id)token;
- (id)transactionNumber;
- (BOOL)useQueryGenerationToken;

// NSPersistentHistoryChangeRequest (XPCStoreSupport)

+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2;

- (id)encodeForXPC;

@end
