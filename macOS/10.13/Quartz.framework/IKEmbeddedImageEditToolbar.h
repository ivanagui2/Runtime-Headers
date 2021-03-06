/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKEmbeddedImageEditToolbar : IKImageEditFrameToolbar {
    NSButton * _cropButton;
    NSView * _cropButtonContainer;
    BOOL  _cropMode;
}

- (id)backgroundColor;
- (void)configButton:(id)arg1 action:(SEL)arg2 title:(id)arg3;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)enterCropMode;
- (void)finalize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegate:(id)arg2;
- (void)leaveCropMode;
- (void)selectionRectAdded;
- (void)selectionRectRemoved;
- (void)setup;
- (id)toolbarType;

@end
