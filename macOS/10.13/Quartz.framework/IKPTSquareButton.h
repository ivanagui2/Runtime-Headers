/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKPTSquareButton : NSButton {
    NSImage * _initialImage;
}

@property (atomic, readwrite) BOOL displaysState;
@property (atomic, readwrite) long long style;

+ (Class)cellClass;

- (BOOL)_imageButton;
- (void)_updateStyle;
- (void)commonInit;
- (void)dealloc;
- (BOOL)displaysState;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisplaysState:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;

@end
