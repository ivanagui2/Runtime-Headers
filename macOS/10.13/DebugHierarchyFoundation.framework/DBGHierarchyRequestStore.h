/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/SharedFrameworks/DebugHierarchyFoundation.framework/Versions/A/DebugHierarchyFoundation
 */

@interface DBGHierarchyRequestStore : NSObject {
    NSMutableArray * _enumerationQueue;
    NSMutableDictionary * _identifierToObjectDescriptionMap;
    NSMutableDictionary * _metaData;
    DBGHierarchyRequest * _request;
    DBGRuntimeClasses * _runtimeClasses;
    NSMutableDictionary * _topLevelGroups;
    NSMutableDictionary * _topLevelPropertyDescriptions;
}

@property (nonatomic, readwrite, retain) NSMutableArray *enumerationQueue;
@property (nonatomic, readwrite, retain) NSMutableDictionary *identifierToObjectDescriptionMap;
@property (nonatomic, readwrite, retain) NSMutableDictionary *metaData;
@property (nonatomic, readwrite, retain) DBGHierarchyRequest *request;
@property (nonatomic, readwrite, retain) DBGRuntimeClasses *runtimeClasses;
@property (nonatomic, readwrite, retain) NSMutableDictionary *topLevelGroups;
@property (nonatomic, readwrite, retain) NSMutableDictionary *topLevelPropertyDescriptions;

+ (id)backingStoreWithRequest:(id)arg1;

- (void).cxx_destruct;
- (void)_addDebugHierarchyObject:(id)arg1 withDict:(id)arg2 toTopLevelGroupWithID:(id)arg3;
- (void)_addDebugHierarchyObjectDict:(id)arg1 toGroupWithID:(id)arg2 asDirectChild:(BOOL)arg3 belowParent:(id)arg4;
- (void)addDebugHierarchyObject:(id)arg1 withVisibility:(long long)arg2 toGroupWithID:(id)arg3 asDirectChild:(BOOL)arg4 belowParent:(id)arg5;
- (void)addProperties:(id)arg1 toObject:(id)arg2;
- (void)addReferencedDebugHierarchyObject:(id)arg1 withVisibility:(long long)arg2 toGroupWithID:(id)arg3 asDirectChild:(BOOL)arg4 belowParent:(id)arg5;
- (id)dictionaryRepresentation;
- (id)enumerationQueue;
- (BOOL)hasAlreadyFetchedDebugHierarchyObject:(id)arg1;
- (id)identifierToObjectDescriptionMap;
- (id)initWithRequest:(id)arg1;
- (void)logRequestErrorWithTitle:(id)arg1 message:(id)arg2 fromMethod:(const char *)arg3;
- (id)metaData;
- (id)recursiveDescription;
- (id)request;
- (id)runtimeClasses;
- (void)setEnumerationQueue:(id)arg1;
- (void)setIdentifierToObjectDescriptionMap:(id)arg1;
- (void)setMetaData:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRuntimeClasses:(id)arg1;
- (void)setTopLevelGroups:(id)arg1;
- (void)setTopLevelPropertyDescriptions:(id)arg1;
- (id)topLevelGroups;
- (id)topLevelPropertyDescriptions;

@end