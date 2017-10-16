/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol> {
    BOOL  _allCallbacksDeleviered;
    NSString * _bundleID;
    NSURL * _bundleURL;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _callbacksCompleteCond;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _callbacksCompleteCondMutex;
    NSXPCConnection * _connection;
    unsigned long long  _operationType;
    NSString * _operationTypeString;
    NSDictionary * _options;
    id  _progressBlock;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _uninstaller;
}

@property (nonatomic, readwrite) BOOL allCallbacksDeleviered;
@property (nonatomic, readwrite, retain) NSString *bundleID;
@property (nonatomic, readwrite, retain) NSURL *bundleURL;
@property (nonatomic, readwrite, retain) NSXPCConnection *connection;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) unsigned long long operationType;
@property (nonatomic, readonly) NSString *operationTypeString;
@property (nonatomic, readwrite, retain) NSDictionary *options;
@property (nonatomic, readwrite, copy) id progressBlock;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *queue;
@property (atomic, readonly) Class superclass;
@property (getter=isUninstaller, nonatomic, readwrite) BOOL uninstaller;

+ (id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(id)arg4;
+ (id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(id)arg3;
+ (id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(id)arg3;

- (void)_invalidate;
- (void)_waitForAllCallbackMessagesToExecute;
- (BOOL)allCallbacksDeleviered;
- (id)bundleID;
- (id)bundleURL;
- (void)callbackDeliveryComplete;
- (id)connection;
- (void)dealloc;
- (id)init;
- (BOOL)isUninstaller;
- (unsigned long long)operationType;
- (id)operationTypeString;
- (id)options;
- (id)progressBlock;
- (id)queue;
- (void)setAllCallbacksDeleviered:(BOOL)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setOperationType:(unsigned long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setProgressBlock:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUninstaller:(BOOL)arg1;
- (void)updateCallbackWithData:(id)arg1;

@end