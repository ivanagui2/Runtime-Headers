/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLControlTooltip : NSWindow {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _anchorRect;
    NSWindow * _parentWindow;
    NSTextField * _textField;
    BOOL  _verticallyPositioned;
}

@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } anchorRect;
@property (atomic, readwrite) NSWindow *parentWindow;
@property (atomic, readwrite, copy) NSString *string;
@property (atomic, readwrite) BOOL verticallyPositioned;

+ (id)tooltipWindow;

- (void)_updateWindowFrame;
- (BOOL)accessibilityIsIgnored;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchorRect;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)parentWindow;
- (void)setAnchorRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setParentWindow:(id)arg1;
- (void)setString:(id)arg1;
- (void)setVerticallyPositioned:(BOOL)arg1;
- (id)string;
- (BOOL)verticallyPositioned;

@end
