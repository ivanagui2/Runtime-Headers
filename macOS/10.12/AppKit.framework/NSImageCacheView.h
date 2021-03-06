/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSImageCacheView : NSView {
    struct __CFDictionary { } * _threadEntries;
    BOOL  isOpaque;
}

+ (void)initialize;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (BOOL)lockFocusIfCanDraw;
- (BOOL)lockFocusIfCanDrawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 flipped:(BOOL)arg2 clip:(BOOL)arg3;
- (void)setOpaque:(BOOL)arg1;
- (void)unlockFocus;

@end
