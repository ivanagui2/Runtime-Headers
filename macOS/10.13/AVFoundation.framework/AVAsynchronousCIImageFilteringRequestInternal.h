/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject {
    id  _cancellationTest;
    id  _completionHandler;
    AVAsynchronousVideoCompositionRequest * _compositingRequest;
    id  _defaultCIContextProvider;
    CIImage * _sourceCIImage;
    struct __CVBuffer { } * _sourcePBuf;
}

@property (nonatomic, readwrite, copy) id cancellationTest;
@property (nonatomic, readwrite, copy) id completionHandler;
@property (nonatomic, readwrite, retain) AVAsynchronousVideoCompositionRequest *compositingRequest;
@property (nonatomic, readwrite, copy) id defaultCIContextProvider;
@property (nonatomic, readwrite, retain) CIImage *sourceCIImage;
@property (nonatomic, readwrite, retain) struct __CVBuffer { }*sourcePBuf;

- (void)_willDeallocOrFinalize;
- (id)cancellationTest;
- (id)completionHandler;
- (id)compositingRequest;
- (void)dealloc;
- (id)defaultCIContextProvider;
- (void)finalize;
- (void)setCancellationTest:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setCompositingRequest:(id)arg1;
- (void)setDefaultCIContextProvider:(id)arg1;
- (void)setSourceCIImage:(id)arg1;
- (void)setSourcePBuf:(struct __CVBuffer { }*)arg1;
- (id)sourceCIImage;
- (struct __CVBuffer { }*)sourcePBuf;

@end
