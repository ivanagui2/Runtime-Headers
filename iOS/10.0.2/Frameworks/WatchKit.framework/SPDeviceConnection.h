/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPDeviceConnection : NSObject <SPLocalApplicationProtocol> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <SPDeviceConnectionDelegate> * _delegate;
    NSHashTable * _observers;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SPDeviceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSHashTable *observers;
@property (retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedDeviceConnection;

- (void).cxx_destruct;
- (void)_enumerateObserversSafely:(id /* block */)arg1;
- (void)activeComplicationsForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)activeComplicationsWithCompletion:(id /* block */)arg1;
- (void)activeComplicationsWithErrorCompletion:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (long long)appInstallStateForAppConduitInstallState:(long long)arg1;
- (void)cancelPendingInstallations;
- (id)connectionProxy:(id /* block */)arg1 caller:(const char *)arg2;
- (id)connectionQueue;
- (void)createXPCConnectionIfNecessary;
- (id)delegate;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledApplicationsWithCompletion:(id /* block */)arg1;
- (void)fetchInstalledApplicationsWithErrorCompletion:(id /* block */)arg1;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(id /* block */)arg2;
- (void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledComplicationsWithCompletion:(id /* block */)arg1;
- (void)fetchInstalledComplicationsWithErrorCompletion:(id /* block */)arg1;
- (void)fetchInstalledGlancesForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledGlancesWithCompletion:(id /* block */)arg1;
- (void)fetchInstalledGlancesWithErrorCompletion:(id /* block */)arg1;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchProvisioningProfilesWithCompletion:(id /* block */)arg1;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)getAlwaysInstallWithCompletion:(id /* block */)arg1;
- (void)hideUserNotification;
- (id)init;
- (void)installAllApplications;
- (void)installApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)installApplication:(id)arg1 completionWithError:(id /* block */)arg2;
- (void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completion:(id /* block */)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(id /* block */)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completionWithError:(id /* block */)arg4;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)invalidateXPCConnection;
- (id)localeForUserNotification;
- (id)observers;
- (void)receiveData:(id)arg1;
- (void)removeApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (id)serverConnection;
- (void)setAlwaysInstall:(id)arg1;
- (void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2;
- (void)setConnectionQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogLevel:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)showUserNotification:(long long)arg1 applicationName:(id)arg2 extensionBundleID:(id)arg3;
- (void)showUserNotification:(long long)arg1 bundleID:(id)arg2;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(id /* block */)arg3;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)wakeExtensionForWatchApp:(id)arg1;

@end