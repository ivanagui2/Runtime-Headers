/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MKIconDiskCache : NSObject <GEOResourceManifestTileGroupObserver> {
    NSURL * _directoryURL;
    NSMutableArray * _inProgressUUIDs;
    NSLock * _lock;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateVersionsInfo;
- (void)dealloc;
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 drawingBlock:(id)arg4;
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 isCarplay:(BOOL)arg4 drawingBlock:(id)arg5;
- (id)initWithDirectoryURL:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;

@end
