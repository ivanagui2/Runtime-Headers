/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSProgress : NSObject <NSProgressPublisher> {
    NSMutableDictionary * _acknowledgementHandlersByLowercaseBundleID;
    id  _cancellationHandler;
    NSMutableSet * _children;
    unsigned long long  _flags;
    NSMutableDictionary * _lastNotificationTimesByKey;
    NSLock * _lock;
    NSProgress * _parent;
    id  _pausingHandler;
    id  _prioritizationHandler;
    NSString * _publisherID;
    long long  _reserved4;
    id  _reserved5;
    long long  _reserved6;
    long long  _reserved7;
    long long  _reserved8;
    id  _resumingHandler;
    NSMutableDictionary * _userInfoLastNotificationTimesByKey;
    id  _userInfoProxy;
    id  _values;
}

@property (getter=isCancellable, atomic, readwrite) BOOL cancellable;
@property (atomic, readwrite, copy) id cancellationHandler;
@property (getter=isCancelled, atomic, readonly) BOOL cancelled;
@property (atomic, readwrite) long long completedUnitCount;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, copy) NSNumber *estimatedTimeRemaining;
@property (atomic, readwrite, copy) NSNumber *fileCompletedCount;
@property (atomic, readwrite, copy) NSString *fileOperationKind;
@property (atomic, readwrite, copy) NSNumber *fileTotalCount;
@property (atomic, readwrite, copy) NSURL *fileURL;
@property (getter=isFinished, atomic, readonly) BOOL finished;
@property (atomic, readonly) double fractionCompleted;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isIndeterminate, atomic, readonly) BOOL indeterminate;
@property (nonatomic, readwrite) unsigned long long installPhase;
@property (nonatomic, readonly) NSString *installPhaseString;
@property (nonatomic, readwrite) unsigned long long installState;
@property (atomic, readwrite, copy) NSString *kind;
@property (atomic, readwrite, copy) NSString *localizedAdditionalDescription;
@property (atomic, readwrite, copy) NSString *localizedDescription;
@property (getter=isOld, atomic, readonly) BOOL old;
@property (getter=isPausable, atomic, readwrite) BOOL pausable;
@property (getter=isPaused, atomic, readonly) BOOL paused;
@property (atomic, readwrite, copy) id pausingHandler;
@property (atomic, readwrite, copy) id resumingHandler;
@property (nonatomic, readonly) NSString *sf_bundleID;
@property (nonatomic, readonly) NSString *sf_error;
@property (nonatomic, readonly) NSString *sf_personRealName;
@property (nonatomic, readonly) NSString *sf_publishingKey;
@property (nonatomic, readonly) NSString *sf_sessionID;
@property (nonatomic, readwrite) long long sf_transferState;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSNumber *throughput;
@property (atomic, readwrite) long long totalUnitCount;
@property (atomic, readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(id)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 usingBlock:(id)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (id)_publisherInterface;
+ (id)_registrarInterface;
+ (void)_removeSubscriber:(id)arg1;
+ (id)_serverConnection;
+ (id)_subscriberInterface;
+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(id)arg2;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentProgress;
+ (id)discreteProgressWithTotalUnitCount:(long long)arg1;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (id)progressWithTotalUnitCount:(long long)arg1 parent:(id)arg2 pendingUnitCount:(long long)arg3;
+ (void)removeSubscriber:(id)arg1;

- (void).cxx_destruct;
- (void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (id)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_addCompletedUnitCount:(long long)arg1;
- (void)_addImplicitChild:(id)arg1;
- (BOOL)_adoptChildUserInfo;
- (id)_indentedDescription:(unsigned long long)arg1;
- (id)_initWithValues:(id)arg1;
- (void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (id)_parent;
- (void)_publish;
- (id)_publishingAppBundleIdentifier;
- (void)_setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_setParent:(id)arg1 portion:(long long)arg2;
- (void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(BOOL)arg3;
- (id)_setValueForKeys:(id)arg1 settingBlock:(id)arg2;
- (void)_unpublish;
- (void)_updateChild:(id)arg1 fraction:(id)arg2 portion:(long long)arg3;
- (void)_updateFractionCompleted:(id)arg1;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (id)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1 inBlock:(id)arg2;
- (id)byteCompletedCount;
- (id)byteTotalCount;
- (void)cancel;
- (id)cancellationHandler;
- (long long)completedUnitCount;
- (void)dealloc;
- (id)description;
- (id)estimatedTimeRemaining;
- (id)fileCompletedCount;
- (id)fileOperationKind;
- (id)fileTotalCount;
- (id)fileURL;
- (double)fractionCompleted;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(id)arg2;
- (id)init;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (BOOL)isCancellable;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isIndeterminate;
- (BOOL)isOld;
- (BOOL)isPausable;
- (BOOL)isPaused;
- (BOOL)isPrioritizable;
- (id)kind;
- (id)localizedAdditionalDescription;
- (id)localizedDescription;
- (unsigned long long)ownedDictionaryCount;
- (id)ownedDictionaryKeyEnumerator;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (void)pause;
- (id)pausingHandler;
- (void)performAsCurrentWithPendingUnitCount:(long long)arg1 usingBlock:(id)arg2;
- (id)prioritizationHandler;
- (oneway void)prioritize;
- (void)publish;
- (void)resignCurrent;
- (void)resume;
- (id)resumingHandler;
- (void)setAcknowledgementHandler:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (void)setByteCompletedCount:(id)arg1;
- (void)setByteTotalCount:(id)arg1;
- (void)setCancellable:(BOOL)arg1;
- (void)setCancellationHandler:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setEstimatedTimeRemaining:(id)arg1;
- (void)setFileCompletedCount:(id)arg1;
- (void)setFileOperationKind:(id)arg1;
- (void)setFileTotalCount:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLocalizedAdditionalDescription:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPausable:(BOOL)arg1;
- (void)setPausingHandler:(id)arg1;
- (void)setPrioritizable:(BOOL)arg1;
- (void)setPrioritizationHandler:(id)arg1;
- (void)setResumingHandler:(id)arg1;
- (void)setThroughput:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)set_adoptChildUserInfo:(BOOL)arg1;
- (id)throughput;
- (long long)totalUnitCount;
- (void)unpublish;
- (id)userInfo;

// NSProgress (NSProgressUpdateOverXPC)

- (void)_receiveProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2;

// NSProgress (NSTemporaryCompatibility)

- (void)acknowledge;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(id)arg2;

// Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices

// NSProgress (LSInstallProgressAdditions)

+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned long long)arg2;
+ (id)keyPathsForValuesAffectingInstallPhase;
+ (id)keyPathsForValuesAffectingInstallState;
+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned long long)arg2;

- (id)_LSDescription;
- (void)_LSResume;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned long long)arg3;
- (unsigned long long)installPhase;
- (id)installPhaseString;
- (unsigned long long)installState;
- (void)setInstallPhase:(unsigned long long)arg1;
- (void)setInstallState:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices

// NSProgress (GEOExtras)

+ (id)_geo_mirroredProgressForReceivingOverXPC:(id*)arg1;
+ (id)_geo_mirroredProgressFromReceivingXPCEndpoint:(id)arg1;
+ (id)_geo_mirroredProgressFromReportingXPCEndpoint:(id)arg1 totalUnitCount:(long long)arg2;
+ (id)_geo_newReportingXPCEndpointMirroringProgress:(id)arg1;
+ (id)_geo_progressMirroringProgress:(id)arg1;

- (void)_geo_mirroredProgressReplaceObservedProgressWith:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing

// NSProgress (SFAirDropTransferProgressAdditions)

+ (id)sf_publishingKeyForApp:(id)arg1 sessionID:(id)arg2;
+ (id)sf_transferStateAsString:(long long)arg1;

- (void)setSf_transferState:(long long)arg1;
- (id)sf_bundleID;
- (id)sf_error;
- (void)sf_failedWithError:(id)arg1;
- (id)sf_initWithAppBundle:(id)arg1 sessionID:(id)arg2 andPersonRealName:(id)arg3;
- (id)sf_initWithFileURL:(id)arg1;
- (id)sf_personRealName;
- (id)sf_publishingKey;
- (id)sf_sessionID;
- (long long)sf_transferState;

@end