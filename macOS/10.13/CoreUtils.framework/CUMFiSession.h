/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUMFiSession : NSObject <NSStreamDelegate> {
    EAAccessory * _device;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _interruptionHandler;
    id  _invalidationHandler;
    NSString * _label;
    NSString * _protocolString;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite, retain) EAAccessory *device;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, copy) id interruptionHandler;
@property (nonatomic, readwrite, copy) id invalidationHandler;
@property (nonatomic, readwrite, copy) NSString *label;
@property (nonatomic, readwrite, copy) NSString *protocolString;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_handleError:(id)arg1;
- (void)_invalidate;
- (void)activate;
- (void)dealloc;
- (id)device;
- (id)dispatchQueue;
- (id)init;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (id)label;
- (id)protocolString;
- (void)readMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 completion:(id)arg3;
- (void)setDevice:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setProtocolString:(id)arg1;
- (void)writeData:(id)arg1 completion:(id)arg2;

@end