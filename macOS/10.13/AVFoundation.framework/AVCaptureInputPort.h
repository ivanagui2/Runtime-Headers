/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureInputPort : NSObject {
    AVCaptureInputPortInternal * _internal;
}

@property (nonatomic, readonly) struct OpaqueCMClock { }*clock;
@property (getter=isEnabled, nonatomic, readwrite) BOOL enabled;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) AVCaptureInput *input;
@property (nonatomic, readonly) NSString *mediaType;

+ (BOOL)automaticallyNotifiesObserversOfClock;
+ (void)initialize;
+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(BOOL)arg4;

- (void)_removeFormatDescriptionPropertyListener;
- (void)_setClock:(struct OpaqueCMClock { }*)arg1;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)_updateFormatDescription;
- (void)_updateFormatDescriptionFromPropertyListener;
- (void)attachToAudioMixerNode:(int)arg1 element:(unsigned int)arg2 scope:(unsigned int)arg3 isReadOnly:(BOOL)arg4;
- (unsigned int)audioMixerNodeElement;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)description;
- (void)detachFromAudioMixerNode;
- (unsigned int)element;
- (void)finalize;
- (const struct opaqueCMFormatDescription { }*)formatDescription;
- (struct OpaqueCMIOGraph { }*)graph;
- (id)initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(BOOL)arg4;
- (id)input;
- (BOOL)isEnabled;
- (id)mediaType;
- (int)node;
- (unsigned int)scope;
- (void)setEnabled:(BOOL)arg1;
- (void)setGraph:(struct OpaqueCMIOGraph { }*)arg1 node:(int)arg2 element:(unsigned int)arg3 scope:(unsigned int)arg4;
- (void)setInput:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end