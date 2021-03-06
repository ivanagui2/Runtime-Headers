/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSTextAttachment : NSObject <NSCoding, NSTextAttachmentContainer> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSString * _cacheKey;
    <NSTextAttachmentCell> * _cell;
    NSData * _data;
    NSFileWrapper * _fileWrapper;
    struct { 
        unsigned int cellWasExplicitlySet : 1; 
        unsigned int ignoresOrientation : 1; 
        unsigned int allowsEditingContents : 1; 
        unsigned int  : 29; 
    }  _flags;
    NSImage * _image;
    double  _layoutPadding;
    struct { 
        unsigned int _allowsTextAttachmentView : 1; 
        unsigned int _embeddingType : 4; 
        unsigned int _standaloneAlignment : 3; 
    }  _taFlags;
    NSString * _uti;
    NSTextAttachmentView * _wrapperView;
}

@property (atomic, readwrite, retain) <NSTextAttachmentCell> *attachmentCell;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (atomic, readwrite, copy) NSData *contents;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, copy) NSString *fileType;
@property (atomic, readwrite, retain) NSFileWrapper *fileWrapper;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSImage *image;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation

+ (id)imageCache;
+ (void)initialize;
+ (void)registerTextAttachmentClass:(Class)arg1 forFileType:(id)arg2;
+ (void)registerTextAttachmentViewProviderClass:(Class)arg1 forFileType:(id)arg2;
+ (Class)textAttachmentClassForFileType:(id)arg1;
+ (Class)textAttachmentViewProviderClassForFileType:(id)arg1;

- (id)_cacheKey;
- (id)_image;
- (void)_invalidateWrapperView;
- (id)_textAttachmentCell;
- (BOOL)allowsTextAttachmentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)attachmentCell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)contentView;
- (id)contents;
- (void)dealloc;
- (id)description;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingBounds;
- (long long)embeddingType;
- (void)encodeWithCoder:(id)arg1;
- (id)fileType;
- (id)fileWrapper;
- (BOOL)ignoresOrientation;
- (id)image;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)initWithFileWrapper:(id)arg1;
- (double)lineLayoutPadding;
- (void)placeView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (void)setAllowsTextAttachmentView:(BOOL)arg1;
- (void)setAttachmentCell:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEmbeddingType:(long long)arg1;
- (void)setFileType:(id)arg1;
- (void)setFileWrapper:(id)arg1;
- (void)setIgnoresOrientation:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setLineLayoutPadding:(double)arg1;
- (void)setStandaloneAlignment:(long long)arg1;
- (long long)standaloneAlignment;
- (Class)textAttachmentViewProviderClass;
- (BOOL)usesTextAttachmentView;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSTextAttachment (NSTextAttachmentAdditions)

+ (Class)_QTDataReferenceClass;
+ (Class)_QTMovieClass;
+ (Class)_QTMovieViewClass;
+ (void)_loadQTKit;
+ (BOOL)_usesRollover;

- (void)_processAttachmentWithNewContentsOfItem:(id)arg1 hanlder:(id)arg2;
- (BOOL)allowsEditingContents;
- (void)setAllowsEditingContents:(BOOL)arg1;

// NSTextAttachment (NSTextView_ForceEvents)

- (id)_immediateActionAnimationControllerForCharacterAtIndex:(unsigned long long)arg1 inTextView:(id)arg2;

@end
