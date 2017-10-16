/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureStillImageOutputInternal : NSObject {
    AVCaptureDeviceFormat * highResModeFormat;
    unsigned int  imageDataFormatType;
    BOOL  isCapturing;
    BOOL  isEnableHighResMode;
    BOOL  isHighResMode;
    NSDictionary * outputSettings;
    NSMutableArray * stillImageRequests;
    AVCaptureStillImageOutputUtils * tranformUtils;
    struct __CFDictionary { } * videoDecompressorUnits;
    struct __CFDictionary { } * videoToProcsUnits;
}

- (void)dealloc;
- (id)init;

@end