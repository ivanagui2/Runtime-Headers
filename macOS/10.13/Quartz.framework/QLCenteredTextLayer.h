/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLCenteredTextLayer : CALayer <CALayerDelegate> {
    QLTextLayer * _textLayer;
    BOOL  _whiteColor;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSString *string;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) BOOL whiteColor;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)layoutSublayers;
- (void)setContentsScale:(double)arg1;
- (void)setString:(id)arg1;
- (void)setWhiteColor:(BOOL)arg1;
- (id)string;
- (BOOL)whiteColor;

@end
