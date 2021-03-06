/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCoreUICatalogColor : NSCatalogColor {
    NSBundle * _bundle;
    double  alphaComponent;
}

@property (atomic, readwrite, retain) NSBundle *bundle;

+ (id)_bundleFromCatalogName:(id)arg1;
+ (id)_catalogNameFromBundle:(id)arg1;

- (struct CGColor { }*)CGColor;
- (long long)_bestMatchingDisplayGamutFor:(id)arg1;
- (double)alphaComponent;
- (id)bundle;
- (void)dealloc;
- (id)initWithCatalogName:(id)arg1 colorName:(id)arg2 bundle:(id)arg3;
- (void)set;
- (void)setBundle:(id)arg1;
- (void)setFill;
- (void)setStroke;

@end
