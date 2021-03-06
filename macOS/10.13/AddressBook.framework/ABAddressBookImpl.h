/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAddressBookImpl : NSObject {
    NSArray * _allocationBacktrace;
    ABAddressBookChangesNotifier * _changesNotifier;
    BOOL  _createdOnMainThread;
    ABCustomPropertyCache * _customPropertyCache;
    BOOL  _deactivated;
    BOOL  _directoryResults;
    BOOL  _hasUnfilteredAccess;
    BOOL  _overridesReadOnly;
    ABPersistentStoreCoordinatorCache * _persistentStoreCoordinatorCache;
    ABAddressBookNotificationInfo * _preparedNotificationInfo;
    BOOL  _provisional;
    BOOL  _registeredForChangeNotifications;
}

@property (atomic, readwrite, copy) NSArray *allocationBacktrace;
@property (atomic, readwrite, retain) ABAddressBookChangesNotifier *changesNotifier;
@property (nonatomic, readwrite) BOOL createdOnMainThread;
@property (atomic, readonly, retain) ABCustomPropertyCache *customPropertyCache;
@property (atomic, readwrite) BOOL deactivated;
@property (getter=isDirectoryResults, nonatomic, readwrite) BOOL directoryResults;
@property (nonatomic, readwrite) BOOL hasUnfilteredAccess;
@property (nonatomic, readwrite) BOOL overridesReadOnly;
@property (atomic, readwrite, retain) ABPersistentStoreCoordinatorCache *persistentStoreCoordinatorCache;
@property (atomic, readwrite, retain) ABAddressBookNotificationInfo *preparedNotificationInfo;
@property (getter=isProvisional, nonatomic, readwrite) BOOL provisional;
@property (nonatomic, readwrite) BOOL registeredForChangeNotifications;

- (id)allocationBacktrace;
- (id)changesNotifier;
- (BOOL)createdOnMainThread;
- (id)customPropertyCache;
- (BOOL)deactivated;
- (void)dealloc;
- (BOOL)hasUnfilteredAccess;
- (id)init;
- (BOOL)isDirectoryResults;
- (BOOL)isProvisional;
- (BOOL)overridesReadOnly;
- (id)persistentStoreCoordinatorCache;
- (id)preparedNotificationInfo;
- (BOOL)registeredForChangeNotifications;
- (void)setAllocationBacktrace:(id)arg1;
- (void)setChangesNotifier:(id)arg1;
- (void)setCreatedOnMainThread:(BOOL)arg1;
- (void)setDeactivated:(BOOL)arg1;
- (void)setDirectoryResults:(BOOL)arg1;
- (void)setHasUnfilteredAccess:(BOOL)arg1;
- (void)setOverridesReadOnly:(BOOL)arg1;
- (void)setPersistentStoreCoordinatorCache:(id)arg1;
- (void)setPreparedNotificationInfo:(id)arg1;
- (void)setProvisional:(BOOL)arg1;
- (void)setRegisteredForChangeNotifications:(BOOL)arg1;

@end
