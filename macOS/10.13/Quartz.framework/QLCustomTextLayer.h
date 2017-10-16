/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLCustomTextLayer : CALayer {
    BOOL  _animates;
    NSAttributedString * _attributedText;
    NSDictionary * _attributes;
    NSString * _text;
    struct CGSize { 
        double width; 
        double height; 
    }  _textMargins;
    struct CGSize { 
        double width; 
        double height; 
    }  _textSize;
}

@property (atomic, readwrite) BOOL animates;
@property (nonatomic, readwrite, retain) NSAttributedString *attributedText;
@property (nonatomic, readwrite, retain) NSDictionary *attributes;
@property (nonatomic, readwrite, retain) NSString *text;
@property (nonatomic, readwrite) struct CGSize { double x1; double x2; } textMargins;
@property (atomic, readonly) struct CGSize { double x1; double x2; } textSize;

- (void)_updateLayerSize;
- (void)_updateTextSize;
- (id)actionForKey:(id)arg1;
- (BOOL)animates;
- (id)attributedText;
- (id)attributes;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (BOOL)needsDisplayOnBoundsChange;
- (void)setAnimates:(BOOL)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextMargins:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeToFitInSize:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (struct CGSize { double x1; double x2; })textMargins;
- (struct CGSize { double x1; double x2; })textSize;

@end