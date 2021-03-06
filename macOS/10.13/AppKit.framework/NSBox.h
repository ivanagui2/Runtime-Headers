/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSBox : NSView <DebugHierarchyObject> {
    struct __bFlags { 
        unsigned int borderType : 2; 
        unsigned int titlePosition : 3; 
        unsigned int backgroundTransparent : 1; 
        unsigned int orientation : 2; 
        unsigned int needsTile : 1; 
        unsigned int transparent : 1; 
        unsigned int colorAltInterpretation : 1; 
        unsigned int boxType : 3; 
        unsigned int useSuperAddSubview : 1; 
        unsigned int _RESERVED : 17; 
    }  _bFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _borderRect;
    id  _contentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _offsets;
    id  _titleCell;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleRect;
    id  _unused;
}

@property (atomic, readwrite, copy) NSColor *borderColor;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } borderRect;
@property (atomic, readwrite) unsigned long long borderType;
@property (atomic, readwrite) double borderWidth;
@property (atomic, readwrite) unsigned long long boxType;
@property (atomic, readwrite, retain) NSView *contentView;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } contentViewMargins;
@property (atomic, readwrite) double cornerRadius;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, copy) NSColor *fillColor;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSString *title;
@property (atomic, readonly) id titleCell;
@property (atomic, readwrite, retain) NSFont *titleFont;
@property (atomic, readwrite) unsigned long long titlePosition;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleRect;
@property (getter=isTransparent, atomic, readwrite) BOOL transparent;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;

- (id)_backgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_borderRectForOldStyleLineBox;
- (Class)_classToCheckForWantsUpdateLayer;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_didRemoveLayer;
- (BOOL)_drawRectIfEmpty;
- (unsigned long long)_effectiveTitlePosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_grooveFrameRect;
- (void)_invalidateLayerContentsForStateChange;
- (BOOL)_isBoxSeparator;
- (BOOL)_isOldStyleBordered;
- (BOOL)_justDrawsAGrooveOnOneSide;
- (id)_lineColor;
- (BOOL)_needsBackgroundView;
- (BOOL)_needsTitleTextField;
- (void)_removeBackgroundView;
- (void)_removeTitleTextField;
- (void)_resetLayerContentsFromCustomBox;
- (void)_resetLayerContentsToEmpty;
- (BOOL)_separatorBoxIsHorizontal;
- (void)_setBackgroundView:(id)arg1;
- (void)_setLayerContentsForCustomBox;
- (void)_setLineColor:(id)arg1;
- (void)_setTitleTextField:(id)arg1;
- (void)_tile:(BOOL)arg1;
- (id)_titleTextField;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_titleTextFieldFrame;
- (void)_updateBackgroundView;
- (void)_updateGrooveBackgroundView;
- (void)_updateSeparatorBackgroundView;
- (void)_updateTitleTextField;
- (void)_viewDidChangeAppearance:(id)arg1;
- (void)dealloc;

// NSBox (NSBoxAuxiliary)

- (id)_auxiliaryStorage;
- (void)_setupAuxiliaryStorage;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// NSBox (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityContentsAttribute;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (BOOL)accessibilityIsContentsAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsTitleUIElementAttributeSettable;
- (id)accessibilityPositionOfChild:(id)arg1;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityTitleUIElementAttribute;
- (void)addSubview:(id)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (BOOL)allowsVibrancy;
- (BOOL)autoresizesSubviews;
- (id)backgroundColor;
- (id)borderColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })borderRect;
- (unsigned long long)borderType;
- (double)borderWidth;
- (unsigned long long)boxType;
- (BOOL)canSmoothFontsInLayer;
- (id)contentView;
- (struct CGSize { double x1; double x2; })contentViewMargins;
- (double)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fillColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isOpaque;
- (BOOL)isTransparent;
- (void)layout;
- (id)ns_widgetType;
- (BOOL)preservesContentDuringLiveResize;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderType:(unsigned long long)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBoxType:(unsigned long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewMargins:(struct CGSize { double x1; double x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFrameFromContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitlePosition:(unsigned long long)arg1;
- (void)setTitleWithMnemonic:(id)arg1;
- (void)setTransparent:(BOOL)arg1;
- (void)sizeToFit;
- (id)title;
- (id)titleCell;
- (id)titleFont;
- (unsigned long long)titlePosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRect;
- (void)updateConstraints;
- (void)updateLayer;
- (void)viewDidLiveResizeFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)viewWillDraw;
- (void)willRemoveSubview:(id)arg1;

@end
