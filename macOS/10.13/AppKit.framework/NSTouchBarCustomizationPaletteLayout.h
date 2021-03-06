/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarCustomizationPaletteLayout : NSCollectionViewLayout {
    NSDictionary * _cachedAttributes;
    double  _cachedHeight;
    double  _scaleFactor;
}

@property (atomic, readwrite) double scaleFactor;

+ (Class)layoutAttributesClass;

- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; long long x3; double x4; double x5; })calculateStatsForItemAtPath:(id)arg1 remainingColumns:(long long)arg2;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (double)columnSpacing;
- (double)columnWidth;
- (id)delegate;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (double)minItemSpacing;
- (long long)numberOfColumnsPerRow;
- (void)prepareLayout;
- (double)rowHeight;
- (double)rowSpacing;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
