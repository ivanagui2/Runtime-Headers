/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEODataSession : NSObject <GEODataSession> {
    NSObject<OS_dispatch_queue> * _sessionIsolation;
    <GEODataSession> * _urlSession;
    <GEODataSession> * _xpcSession;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) GEODataURLSession *urlSession;
@property (nonatomic, readonly) GEODataXPCSession *xpcSession;

+ (id)sharedDataSession;

- (void).cxx_destruct;
- (id)init;
- (id)initWithXPCSession:(id)arg1 urlSession:(id)arg2;
- (id)manifestManager;
- (id)sessionIsolation;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)urlSession;
- (id)xpcSession;

// GEODataSession (GEODataSessionTaskRules)

- (BOOL)_rules_isOnlineAllowedForRequest:(id)arg1;
- (id)preferedRulesForRequest:(id)arg1;

@end