/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
 */

@interface ISStoreService : NSObject <ISStoreServiceProtocol, NSXPCListenerDelegate> {
    NSDictionary * _configuration;
    NSXPCListener * _listener;
    NSString * _serviceName;
    NSURL * _storeURL;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSString *serviceName;
@property (atomic, readonly) NSURL *storeURL;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)initWithServiceName:(id)arg1 storeURL:(id)arg2;
- (void)initializeStoreDirectory;
- (void)removeAllData;
- (void)removeAllDataThrottled;
- (id)serviceName;
- (void)start;
- (id)storeURL;

// ISStoreService (XPCService)

- (void)addData:(id)arg1 withUUID:(id)arg2 domain:(id)arg3 completion:(id)arg4;
- (void)fetchCachePathForDomain:(id)arg1 completion:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
