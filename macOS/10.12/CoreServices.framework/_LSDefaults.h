/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSDefaults : NSObject {
    BOOL  _appleInternal;
    BOOL  _hasPersistentPreferences;
    BOOL  _hasServer;
    NSURL * _iconsGroupContainerURL;
    BOOL  _inEducationMode;
    BOOL  _inSyncBubble;
    BOOL  _inXCTestRigInsecure;
    BOOL  _isServer;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSURL * _systemContainerURL;
    NSURL * _systemGroupContainerURL;
    NSURL * _userContainerURL;
}

@property (getter=isAppleInternal, nonatomic, readonly) BOOL appleInternal;
@property (atomic, readonly) unsigned int currentSchemaVersion;
@property (atomic, readonly) double databaseSaveInterval;
@property (atomic, readonly) double databaseSaveLatency;
@property (atomic, readonly) NSURL *databaseStoreFileURL;
@property (atomic, readonly) NSURL *dbSentinelFileURL;
@property (atomic, readonly) BOOL hasPersistentPreferences;
@property (atomic, readwrite) BOOL hasServer;
@property (atomic, readonly) NSURL *iconCacheFolderURL;
@property (atomic, readonly) NSURL *iconCacheSystemVersionFileURL;
@property (atomic, readonly) NSURL *iconsGroupContainerURL;
@property (atomic, readonly) NSURL *identifiersFileURL;
@property (getter=isInEducationMode, atomic, readonly) BOOL inEducationMode;
@property (getter=isInSyncBubble, atomic, readonly) BOOL inSyncBubble;
@property (getter=isInXCTestRigInsecure, nonatomic, readonly) BOOL inXCTestRigInsecure;
@property (atomic, readwrite) BOOL isServer;
@property (atomic, readonly) BOOL isSimulator;
@property (atomic, readonly) NSURL *preferencesFileURL;
@property (atomic, readonly) NSArray *preferredLocalizations;
@property (atomic, readonly) NSURL *queriedSchemesMapFileURL;
@property (atomic, readonly) NSURL *securePeferencesFileURL;
@property (atomic, readonly) NSURL *systemContainerURL;
@property (atomic, readonly) NSURL *systemGroupContainerURL;
@property (atomic, readonly) NSURL *userContainerURL;

+ (BOOL)appleInternal;
+ (BOOL)hasPersistentPreferences;
+ (BOOL)hasServer;
+ (id)iconsGroupContainerURL;
+ (BOOL)inSyncBubble;
+ (BOOL)inXCTestRigInsecure;
+ (id)sharedInstance;
+ (id)systemContainerURL;
+ (id)systemGroupContainerURL;
+ (id)userContainerURL;

- (unsigned int)currentSchemaVersion;
- (id)darwinNotificationNameForCurrentUser:(id)arg1;
- (double)databaseSaveInterval;
- (double)databaseSaveLatency;
- (id)databaseStoreFileURL;
- (id)databaseUpdateNotificationName;
- (id)dbSentinelFileURL;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)hasPersistentPreferences;
- (BOOL)hasServer;
- (id)iconCacheFolderURL;
- (id)iconCacheSystemVersionFileURL;
- (id)iconsGroupContainerURL;
- (id)identifiersFileURL;
- (id)init;
- (BOOL)isAppleInternal;
- (BOOL)isInEducationMode;
- (BOOL)isInSyncBubble;
- (BOOL)isInXCTestRigInsecure;
- (BOOL)isServer;
- (BOOL)isSimulator;
- (id)preferencesFileChangeNotificationName;
- (id)preferencesFileURL;
- (id)preferencesUpdateNotificationName;
- (id)preferredLocalizations;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (unsigned int)proxyUIDForUID:(unsigned int)arg1;
- (id)queriedSchemesMapFileURL;
- (id)securePeferencesFileURL;
- (id)serviceNameForConnectionType:(unsigned short)arg1;
- (void)setHasServer:(BOOL)arg1;
- (void)setIsServer:(BOOL)arg1;
- (id)systemContainerURL;
- (id)systemGroupContainerURL;
- (id)userContainerURL;
- (id)userPreferencesURL;

@end
