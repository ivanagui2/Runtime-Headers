/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLDrawingHelpers : NSObject

+ (struct CGImage { }*)CGImageNamed:(id)arg1;
+ (struct CGImage { }*)CGImageNamed:(id)arg1 fromBundle:(id)arg2;
+ (id)_pathOfImageWithName:(id)arg1 inBundle:(id)arg2;
+ (struct CGColor { }*)cgColorWithColor:(id)arg1;
+ (struct CGColor { }*)cgColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (struct CGColor { }*)cgColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1 colorSpace:(struct CGColorSpace { }*)arg2;
+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 fromBundle:(id)arg2;
+ (BOOL)loadCGImageNamed:(id)arg1 fromBundle:(id)arg2 into:(struct CGImage {}**)arg3;
+ (BOOL)loadNSImageNamed:(id)arg1 fromBundle:(id)arg2 into:(id*)arg3;

@end
