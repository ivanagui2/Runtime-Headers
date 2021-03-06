/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureSessionInternal : NSObject {
    NSMutableSet * activeConnections;
    NSMutableSet * activeInputs;
    NSMutableSet * activeOutputs;
    int  beginConfigRefCount;
    NSMutableArray * connections;
    NSMutableArray * inputs;
    struct OpaqueCMClock { } * masterClock;
    NSMutableArray * outputs;
    BOOL  running;
    NSString * sessionPreset;
    AVCaptureSessionInternalState * state;
    NSError * stopError;
    struct __CFArray { } * videoPreviewLayers;
}

@end
