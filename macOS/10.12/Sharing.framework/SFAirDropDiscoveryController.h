/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFAirDropDiscoveryController : NSObject {
    struct __SFOperation { } * _controller;
    id  _delegate;
    long long  _discoverableMode;
    BOOL  _isLegacyDevice;
    BOOL  _isLegacyModeEnabled;
    BOOL  _isLegacyModeSettable;
    BOOL  _isVisible;
}

@property (atomic, readwrite) <SFAirDropDiscoveryControllerDelegate> *delegate;
@property (atomic, readwrite) long long discoverableMode;
@property (getter=isLegacyDevice, atomic, readonly) BOOL legacyDevice;
@property (getter=isLegacyModeEnabled, atomic, readwrite) BOOL legacyModeEnabled;
@property (getter=isLegacyModeSettable, atomic, readonly) BOOL legacyModeSettable;
@property (getter=isVisible, atomic, readonly) BOOL visible;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (long long)discoverableMode;
- (id)discoverableModeToString:(long long)arg1;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;
- (BOOL)isLegacyDevice;
- (BOOL)isLegacyModeEnabled;
- (BOOL)isLegacyModeSettable;
- (BOOL)isVisible;
- (long long)operationDiscoverableModeToInteger:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoverableMode:(long long)arg1;
- (void)setLegacyModeEnabled:(BOOL)arg1;

@end
