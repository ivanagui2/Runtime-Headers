/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureVideoDataOutputCallbackData : NSObject {
    struct opaqueCMBufferQueue { } * _bufferQueue;
    void * _callbackContextToken;
    AVCaptureConnection * _connection;
    AVCaptureVideoDataOutput * _output;
}

@property (nonatomic, readwrite) void*callbackContextToken;

+ (id)callbackDataWithOutput:(id)arg1 connection:(id)arg2;

- (struct opaqueCMBufferQueue { }*)bufferQueue;
- (void*)callbackContextToken;
- (id)connection;
- (void)dealloc;
- (void)finalize;
- (id)initWithOutput:(id)arg1 connection:(id)arg2;
- (id)output;
- (void)setCallbackContextToken:(void*)arg1;

@end