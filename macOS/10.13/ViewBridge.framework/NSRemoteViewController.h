/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
 */

@interface NSRemoteViewController : NSViewController {
    NSRemoteViewControllerAuxiliary * _aux;
}

@property (atomic, readonly) NSString *remoteViewIdentifier;
@property (atomic, readonly) struct { unsigned int x1[8]; } serviceAuditToken;
@property (atomic, readonly) NSString *serviceBundleIdentifier;
@property (atomic, readonly) NSXPCListenerEndpoint *serviceListenerEndpoint;
@property (atomic, readonly) int serviceProcessIdentifier;
@property (atomic, readonly) NSString *serviceViewControllerClassName;

+ (BOOL)inhibitFirstResponder;
+ (void)requestViewController:(id)arg1 fromServiceListenerEndpoint:(id)arg2 connectionHandler:(id)arg3;
+ (void)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(id)arg3;
+ (void)requestViewController:(id)arg1 withServiceSubclassIdentifier:(id)arg2 connectionHandler:(id)arg3 withBlock:(id)arg4;
+ (void)requestViewController:(id)arg1 withServiceSubclassIdentifier:(id)arg2 forRemoteView:(id)arg3 connectionHandler:(id)arg4;

- (void)_deallocOnAppKitThread;
- (void)_initAux;
- (void)_superDealloc;
- (void)_viewDidMoveToSuperview;
- (id)_viewWithoutLoad;
- (void)dealloc;
- (void)disconnect;
- (id)exportedInterface;
- (id)exportedObject;
- (double)fauxSynchronousIPCPatience;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)remoteViewIdentifier;
- (struct { unsigned int x1[8]; })serviceAuditToken;
- (id)serviceBundleIdentifier;
- (id)serviceListenerEndpoint;
- (int)serviceProcessIdentifier;
- (id)serviceViewControllerClassName;
- (id)serviceViewControllerInterface;
- (id)serviceViewControllerProxy;
- (id)serviceViewControllerProxyWithErrorHandler:(id)arg1;
- (void)setServiceBundleIdentifier:(id)arg1;
- (void)setServiceListenerEndpoint:(id)arg1;
- (void)setServiceViewControllerClassName:(id)arg1;
- (void)setView:(id)arg1;
- (void)synchronizeAnimationsInActions:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end