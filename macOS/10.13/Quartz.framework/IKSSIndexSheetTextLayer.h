/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKSSIndexSheetTextLayer : CALayer {
    BOOL  _animates;
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
@property (nonatomic, readwrite, retain) NSDictionary *attributes;
@property (nonatomic, readwrite, retain) NSString *text;
@property (nonatomic, readwrite) struct CGSize { double x1; double x2; } textMargins;
@property (atomic, readonly) struct CGSize { double x1; double x2; } textSize;

- (void)_updateLayerSize;
- (void)_updateTextSize;
- (id)actionForKey:(id)arg1;
- (BOOL)animates;
- (id)attributes;
- (BOOL)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setAnimates:(BOOL)arg1;
- (void)setAttributes:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextMargins:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (struct CGSize { double x1; double x2; })textMargins;
- (struct CGSize { double x1; double x2; })textSize;

@end
