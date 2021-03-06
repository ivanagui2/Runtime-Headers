/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIRenderInfo : NSObject {
    void * _priv;
}

@property (atomic, readonly) double kernelExecutionTime;
@property (atomic, readonly) long long passCount;
@property (atomic, readonly) long long pixelsProcessed;

+ (id)renderInfoWithCompletedTask:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithCompletedTask:(id)arg1;
- (double)kernelExecutionTime;
- (long long)passCount;
- (long long)pixelsOverdrawn;
- (long long)pixelsProcessed;

// CIRenderInfo (QuicklookSupport)

- (id)_pdfDataRepresentation;

@end
