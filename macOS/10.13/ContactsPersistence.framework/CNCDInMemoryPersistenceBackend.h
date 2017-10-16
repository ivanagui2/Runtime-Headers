/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface CNCDInMemoryPersistenceBackend : NSObject <CNCDPersistenceBackend> {
    NSMutableArray * _containers;
    NSPersistentStoreCoordinator * _coordinator;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)addAccountContainerWithName:(id)arg1 type:(long long)arg2;
- (id)addAccountContainerWithName:(id)arg1 type:(long long)arg2 writable:(BOOL)arg3;
- (id)allContainers;
- (id)defaultContainer;
- (id)init;
- (id)makeManagedObjectContextWithConcurrencyType:(unsigned long long)arg1;
- (id)makePersistenceContextWithNotificationSource:(id)arg1;

@end