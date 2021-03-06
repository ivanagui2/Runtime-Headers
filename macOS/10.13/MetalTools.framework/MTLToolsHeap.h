/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
 */

@interface MTLToolsHeap : MTLToolsResource <MTLHeap> {
    MTLToolsPointerArray * _buffers;
    MTLToolsPointerArray * _textures;
}

@property (nonatomic, readonly) MTLToolsPointerArray *buffers;
@property (atomic, readonly) unsigned long long cpuCacheMode;
@property (atomic, readonly) unsigned long long currentAllocatedSize;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) <MTLDevice> *device;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSString *label;
@property (atomic, readonly) unsigned long long size;
@property (atomic, readonly) unsigned long long storageMode;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) MTLToolsPointerArray *textures;
@property (atomic, readonly) unsigned long long usedSize;

- (void)acceptVisitor:(id)arg1;
- (id)buffers;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)currentAllocatedSize;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)label;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (void)setLabel:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (id)textures;
- (unsigned long long)usedSize;

@end
