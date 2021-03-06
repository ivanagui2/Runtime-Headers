/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/Versions/A/GLKit
 */

@interface GLKMeshBufferZone : NSObject <MDLMeshBufferZone> {
    GLKMeshBufferAllocator * _allocator;
    NSMutableOrderedSet * _buffers;
    unsigned long long  _capacity;
    BOOL  _destroyInvoked;
    unsigned int  _glBufferName;
}

@property (nonatomic, readonly) <MDLMeshBufferAllocator> *allocator;
@property (nonatomic, readonly) unsigned long long capacity;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int glBufferName;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)allocator;
- (unsigned long long)capacity;
- (void)dealloc;
- (void)destroyBuffer:(id)arg1;
- (unsigned int)glBufferName;
- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2;

@end
