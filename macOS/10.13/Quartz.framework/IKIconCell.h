/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKIconCell : IKImageBrowserCell {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bottomTitleFrame;
    IKImageWrapper * _cachedTitleImage;
    struct { 
        float width; 
        NSImage *tagImage; 
        unsigned int selected : 1; 
        unsigned int focus : 1; 
        unsigned int twoLines : 1; 
        unsigned int centered : 1; 
        unsigned int overlap : 1; 
        unsigned int illegible : 1; 
    }  _cachedTitleSettings;
    unsigned int  _isBlinking;
    unsigned int  _isDefaultFolder;
    unsigned int  _isDimmed;
    unsigned int  _overlapCacheValue;
    unsigned long long  _overlapCacheVersion;
    struct { 
        short numLines; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } upperRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } lowerRect; 
        bool truncated; 
        int truncatIndex; 
        double tagOffset; 
    }  _savedMetrics;
    struct CGSize { 
        double width; 
        double height; 
    }  _savedMetricsFrameSize;
    NSString * _savedMetricsTitle;
    unsigned int  _supportsOldStatus;
    unsigned int  _supportsStatus;
    NSImage * _tagImage;
    unsigned int  _tagImageFetched;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _topTitleFrame;
}

+ (struct CGPoint { double x1; double x2; })anchorPointTranslationWithView:(id)arg1;
+ (struct CGPoint { double x1; double x2; })anchorPointWithView:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchoredBoundsForSettings:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchoredBoundsOfPart:(int)arg1 iconSize:(double)arg2 gridSpacing:(double)arg3 labelAttributes:(id)arg4 titlesOnRight:(BOOL)arg5 options:(id)arg6;
+ (struct CGSize { double x1; double x2; })cellSizeForIconSize:(double)arg1 gridSpacing:(double)arg2 textAttributes:(id)arg3 titlesOnRight:(BOOL)arg4 showInfo:(BOOL)arg5;
+ (struct CGSize { double x1; double x2; })cellSizeForIconSize:(double)arg1 maxIconSize:(double)arg2 gridSpacing:(double)arg3 textAttributes:(id)arg4 titlesOnRight:(BOOL)arg5 showInfo:(BOOL)arg6;
+ (struct CGSize { double x1; double x2; })cellSpacingForIconSize:(double)arg1 gridSpacing:(double)arg2 titlesOnRight:(BOOL)arg3;
+ (struct CGSize { double x1; double x2; })cellSpacingForIconSize:(double)arg1 maxIconSize:(double)arg2 gridSpacing:(double)arg3 titlesOnRight:(BOOL)arg4;
+ (id)iconCellForView:(id)arg1;
+ (void)initialize;
+ (double)labelHeightForAttributes:(id)arg1 iconSize:(double)arg2 gridSpacing:(double)arg3 titlesOnRight:(BOOL)arg4 showInfo:(BOOL)arg5;
+ (struct CGSize { double x1; double x2; })minTitleSizeForTextAttributes:(id)arg1;
+ (id)moreButtonUID;
+ (struct CGSize { double x1; double x2; })sampleCharSizeForTextAttributes:(id)arg1;
+ (double)selectionRadiusForIconSize:(double)arg1;
+ (BOOL)shouldWrapLabelsForIconSize:(double)arg1 gridSpacing:(double)arg2 titlesOnRight:(BOOL)arg3;
+ (BOOL)supportsHeightOfInfoSpaceFactorization;
+ (id)titleAttributesWithSize:(double)arg1 lineBreakMode:(unsigned long long)arg2 align:(unsigned long long)arg3 select:(BOOL)arg4;

- (id)_buildProgressImage:(double)arg1;
- (void)_drawCustomImage:(id)arg1 cacheKey:(id)arg2;
- (void)_drawOpenFolder;
- (struct CGSize { double x1; double x2; })_getTitleSize;
- (id)_progressImage:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bottomRectForTitleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)cacheTitleImage:(id)arg1 forSettings:(struct { float x1; id x2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg2;
- (BOOL)cachedTitleImageMatchesSettings:(struct { float x1; id x2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg1;
- (void)clipContext:(struct CGContext { }*)arg1 metrics:(struct { short x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; bool x4; int x5; double x6; }*)arg2 scaleFactor:(double)arg3;
- (void)dealloc;
- (double)dimFactor;
- (BOOL)disableTwoLineTitles;
- (void)drawDecorationInContext:(struct CGContext { }*)arg1 fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 settings:(struct { float x1; id x2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg3 metrics:(struct { short x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; bool x4; int x5; double x6; }*)arg4;
- (void)drawImage:(id)arg1;
- (void)drawSelection;
- (void)drawSingleLineTitleSelectionInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawStatus;
- (void)drawSubtitle;
- (void)drawTag:(id)arg1 atX:(double)arg2 y:(double)arg3;
- (void)drawTitle;
- (void)getMetrics:(struct { short x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; bool x4; int x5; double x6; }*)arg1 forTitle:(id)arg2 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withSettings:(struct { float x1; id x2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg4;
- (void)getSelectionColorRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 focus:(BOOL)arg4;
- (void)getTitleSettings:(struct { float x1; id x2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg1;
- (int)heightOfInfoSpace;
- (BOOL)hitTestWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)hitTestWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)iconSize;
- (unsigned long long)imageAlignment;
- (void)invalidate;
- (void)invalidateTitle;
- (BOOL)isBlinking;
- (BOOL)isDefaultFolderIcon;
- (BOOL)isDimmed;
- (BOOL)metricsAreValidForTitle:(id)arg1 frameSize:(struct CGSize { double x1; double x2; })arg2;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)needTitleImageForSettings:(struct { float x1; id x2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg1;
- (BOOL)needsOverlapFlagUpdates;
- (double)opacity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionFrame;
- (double)selectionRadius;
- (void)setBlinking:(BOOL)arg1;
- (BOOL)shouldShowStatus;
- (double)singleLineTitleHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })subtitleFrame;
- (double)subtitleHeight;
- (id)tagImage;
- (double)tagMargin;
- (double)textHeight;
- (id)titleAttributesForSettings:(struct { float x1; id x2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg1 clip:(BOOL)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleFrameForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleFrameForCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)titleImageForSettings:(struct { float x1; id x2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg1 cached:(BOOL*)arg2;
- (BOOL)titleIsTruncated;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRoundedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleStringFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })topRectForTitleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateOverlapFlagWithSettings:(struct { float x1; id x2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usedRectForSubtitleFrame;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })usedRectInCellFrame:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
