/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSMetadataQuery : NSObject {
    unsigned long long  _flags;
    double  _interval;
    /* Warning: unhandled array encoding: '[11@]' */ id  _private;
    void * _reserved;
}

@property (atomic, readwrite) <NSMetadataQueryDelegate> *delegate;
@property (getter=isGathering, atomic, readonly) BOOL gathering;
@property (atomic, readonly, copy) NSArray *groupedResults;
@property (atomic, readwrite, copy) NSArray *groupingAttributes;
@property (atomic, readwrite) double notificationBatchingInterval;
@property (atomic, readwrite, retain) NSOperationQueue *operationQueue;
@property (atomic, readwrite, copy) NSPredicate *predicate;
@property (atomic, readonly) unsigned long long resultCount;
@property (atomic, readonly, copy) NSArray *results;
@property (atomic, readwrite, copy) NSArray *searchItems;
@property (atomic, readwrite, copy) NSArray *searchScopes;
@property (atomic, readwrite, copy) NSArray *sortDescriptors;
@property (getter=isStarted, atomic, readonly) BOOL started;
@property (getter=isStopped, atomic, readonly) BOOL stopped;
@property (atomic, readwrite, copy) NSArray *valueListAttributes;
@property (atomic, readonly, copy) NSDictionary *valueLists;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (id)_allAttributes;
- (BOOL)_canModifyQueryOrObserversInCurrentContext;
- (void)_disableAutoUpdates;
- (void)_enableAutoUpdates;
- (id)_externalDocumentsBundleIdentifier;
- (void)_inOriginalContextInvokeBlock:(id)arg1;
- (BOOL)_isMDQuery;
- (void)_noteNote1:(id)arg1;
- (void)_noteNote2:(id)arg1;
- (void)_noteNote3:(id)arg1;
- (void)_noteNote4:(id)arg1;
- (void)_noteNote5:(id)arg1;
- (id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(BOOL)arg2;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)_queryString;
- (void)_recreateQuery;
- (void)_resetQueryState;
- (void)_setBatchingParams;
- (void)_setExternalDocumentsBundleIdentifier:(id)arg1;
- (id)_sortingAttributes;
- (void)_update;
- (void)_validateInvocationContext;
- (void)_validatePredicate:(id)arg1 withScopes:(id)arg2;
- (void)_zapResultArrayIfIdenticalTo:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)enumerateResultsUsingBlock:(id)arg1;
- (void)enumerateResultsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)groupedResults;
- (id)groupingAttributes;
- (unsigned long long)indexOfResult:(id)arg1;
- (id)init;
- (BOOL)isGathering;
- (BOOL)isStarted;
- (BOOL)isStopped;
- (double)notificationBatchingInterval;
- (id)operationQueue;
- (id)predicate;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)resultAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultCount;
- (id)results;
- (id)searchItemURLs;
- (id)searchItems;
- (id)searchScopes;
- (void)setDelegate:(id)arg1;
- (void)setGroupingAttributes:(id)arg1;
- (void)setNotificationBatchingInterval:(double)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSearchItemURLs:(id)arg1;
- (void)setSearchItems:(id)arg1;
- (void)setSearchScopes:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setValueListAttributes:(id)arg1;
- (id)sortDescriptors;
- (BOOL)startQuery;
- (void)stopQuery;
- (id)valueListAttributes;
- (id)valueLists;
- (id)valueOfAttribute:(id)arg1 forResultAtIndex:(unsigned long long)arg2;

// NSMetadataQuery (NSMetadataStitching)

+ (Class)_stitchingClass;
+ (void)didEndPossibleFileOperation:(id)arg1;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;

@end
