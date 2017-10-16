/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCImagePixel : QCPatch {
    NSDictionary * _options;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _tileBounds;
    QCImagePixelBuffer * _tileBuffer;
    QCIndexPort * inputColorSpace;
    QCImagePort * inputImage;
    QCNumberPort * inputPixelX;
    QCNumberPort * inputPixelY;
    QCNumberPort * outputAlpha;
    QCNumberPort * outputBlue;
    QCNumberPort * outputGreen;
    QCNumberPort * outputRed;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;

- (void)cleanup:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3;
- (BOOL)setup:(id)arg1;

@end