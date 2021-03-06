/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDraggingSession : NSObject {
    id  _alternateDragSource;
    BOOL  _animatesOnCancelOrFail;
    NSImage * _compositeImageCache;
    <NSDraggingSource> * _filePromiseDragSource;
    NSArray * _filePromiseProviders;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    NSPasteboard * _pboard;
    void * _private;
    <NSDraggingSource> * _source;
}

@property (atomic, readwrite) id alternateDragSource;
@property (atomic, readwrite) BOOL animatesToDraggingFormationOnBeginDrag;
@property (atomic, readwrite) BOOL animatesToStartingPositionsOnCancelOrFail;
@property (atomic, readwrite) struct OpaqueCoreDrag { unsigned int x1; unsigned int x2; struct DragTarget { unsigned long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; } x3; struct DragTarget { unsigned long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; unsigned int x9; unsigned int x10; unsigned int x11; struct AEDesc { unsigned int x_12_1_1; struct OpaqueAEDataStorageType {} **x_12_1_2; } x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct CGPoint { double x_22_1_1; double x_22_1_2; } x22; unsigned char x23; struct CGSRegionObject {} *x24; struct CGPoint { double x_25_1_1; double x_25_1_2; } x25; void *x26; void *x27; void *x28; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_29_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_29_1_2; } x29; }*dragRef;
@property (atomic, readwrite) long long draggingFormation;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } draggingImageOffset;
@property (atomic, readwrite) long long draggingLeaderIndex;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } draggingLocation;
@property (atomic, readonly) NSPasteboard *draggingPasteboard;
@property (atomic, readonly) long long draggingSequenceNumber;
@property (atomic, readonly) <NSDraggingSource> *filePromiseDragSource;
@property (atomic, readwrite, retain) NSArray *filePromiseProviders;
@property (atomic, readonly) <NSDraggingSource> *source;

- (id)_commonInitWithPasteboard:(id)arg1 source:(id)arg2;
- (id)alternateDragSource;
- (BOOL)animatesToDraggingFormationOnBeginDrag;
- (BOOL)animatesToStartingPositionsOnCancelOrFail;
- (void)dealloc;
- (struct OpaqueCoreDrag { unsigned int x1; unsigned int x2; struct DragTarget { unsigned long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; } x3; struct DragTarget { unsigned long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; unsigned int x9; unsigned int x10; unsigned int x11; struct AEDesc { unsigned int x_12_1_1; struct OpaqueAEDataStorageType {} **x_12_1_2; } x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct CGPoint { double x_22_1_1; double x_22_1_2; } x22; unsigned char x23; struct CGSRegionObject {} *x24; struct CGPoint { double x_25_1_1; double x_25_1_2; } x25; void *x26; void *x27; void *x28; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_29_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_29_1_2; } x29; }*)dragRef;
- (long long)draggingFormation;
- (struct CGPoint { double x1; double x2; })draggingImageOffset;
- (long long)draggingLeaderIndex;
- (struct CGPoint { double x1; double x2; })draggingLocation;
- (id)draggingPasteboard;
- (long long)draggingSequenceNumber;
- (void)enumerateDraggingItemsForClass:(Class)arg1 view:(id)arg2 usingBlock:(id)arg3;
- (void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(id)arg5;
- (id)filePromiseDragSource;
- (id)filePromiseProviders;
- (struct CGPoint { double x1; double x2; })locationForSlideBack;
- (void)setAlternateDragSource:(id)arg1;
- (void)setAnimatesToDraggingFormationOnBeginDrag:(BOOL)arg1;
- (void)setAnimatesToStartingPositionsOnCancelOrFail:(BOOL)arg1;
- (void)setDragRef:(struct OpaqueCoreDrag { unsigned int x1; unsigned int x2; struct DragTarget { unsigned long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; } x3; struct DragTarget { unsigned long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; unsigned int x9; unsigned int x10; unsigned int x11; struct AEDesc { unsigned int x_12_1_1; struct OpaqueAEDataStorageType {} **x_12_1_2; } x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct CGPoint { double x_22_1_1; double x_22_1_2; } x22; unsigned char x23; struct CGSRegionObject {} *x24; struct CGPoint { double x_25_1_1; double x_25_1_2; } x25; void *x26; void *x27; void *x28; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_29_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_29_1_2; } x29; }*)arg1;
- (void)setDraggingFormation:(long long)arg1;
- (void)setDraggingImageOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDraggingLeaderIndex:(long long)arg1;
- (struct CGPoint { double x1; double x2; })setDraggingLocation;
- (void)setDraggingLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFilePromiseProviders:(id)arg1;
- (void)setLocationForSlideBack:(struct CGPoint { double x1; double x2; })arg1;
- (id)source;

// NSDraggingSession (NSInternal)

- (id)_compositeImage;
- (id)_initWithPasteboard:(id)arg1 draggingItems:(id)arg2 clippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 source:(id)arg4;
- (id)_initWithPasteboard:(id)arg1 image:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 source:(id)arg4;

@end
