/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSVisualTabPickerButtonCell : NSButtonCell {
    BOOL  _useExternalHitTesting;
}

@property (nonatomic, readwrite) BOOL useExternalHitTesting;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (BOOL)_useHitTestInTrackMouse;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (void)setUseExternalHitTesting:(BOOL)arg1;
- (BOOL)useExternalHitTesting;

@end
