/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLocationShifter : NSObject <GEOResourceManifestTileGroupObserver> {
    BOOL  _isRequestingShiftFunction;
    NSMutableArray * _locationsToShift;
    NSLock * _lock;
    <_GEOLocationShifterProxy> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    int  _resetPrivacyToken;
    NSCache * _shiftFunctionCache;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) BOOL locationShiftEnabled;
@property (atomic, readonly) Class superclass;

+ (BOOL)isLocationShiftEnabled;
+ (BOOL)isLocationShiftRequiredForCoordinate:(struct { double x1; double x2; })arg1;
+ (BOOL)isLocationShiftRequiredForRegion:(id)arg1;
+ (unsigned int)locationShiftFunctionVersion;
+ (void)useLocalProxy;

- (void).cxx_destruct;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_fetchShiftFunctionForLatLng:(id)arg1 auditToken:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id)arg4;
- (void)_requestNextShiftFunctionIfNecessary;
- (void)_reset;
- (BOOL)_shiftLocation:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)locationShiftEnabled;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (BOOL)shiftCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 shiftedCoordinate:(struct { double x1; double x2; }*)arg3 shiftedAccuracy:(double*)arg4;
- (void)shiftCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 withCompletionHandler:(id)arg3;
- (void)shiftCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 withCompletionHandler:(id)arg3 mustGoToNetworkCallback:(id)arg4 errorHandler:(id)arg5 callbackQueue:(id)arg6;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 auditToken:(id)arg3 withCompletionHandler:(id)arg4 mustGoToNetworkCallback:(id)arg5 errorHandler:(id)arg6 callbackQueue:(id)arg7;
- (BOOL)shiftLatLng:(id)arg1 accuracy:(double)arg2 shiftedCoordinate:(struct { double x1; double x2; }*)arg3 shiftedAccuracy:(double*)arg4;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(id)arg3;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(id)arg3 mustGoToNetworkCallback:(id)arg4 errorHandler:(id)arg5 callbackQueue:(id)arg6;

@end
