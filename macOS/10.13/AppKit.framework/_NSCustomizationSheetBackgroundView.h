/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCustomizationSheetBackgroundView : NSView {
    double  _paletteScaleFactor;
}

@property (atomic, readwrite) double paletteScaleFactor;

+ (id)keyPathsForValuesAffectingPaletteScaleFactor;

- (BOOL)_shouldDoLayerPerformanceUpdates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (double)paletteScaleFactor;
- (void)setPaletteScaleFactor:(double)arg1;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
