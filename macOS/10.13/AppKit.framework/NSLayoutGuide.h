/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSLayoutGuide : NSObject <DebugHierarchyObject, NSCoding, NSUserInterfaceItemIdentification> {
    id  _aux;
    NSLayoutYAxisAnchor * _bottom;
    NSLayoutXAxisAnchor * _centerX;
    NSLayoutYAxisAnchor * _centerY;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    unsigned int  _frameIsObserved;
    unsigned int  _frameNeedsUpdate;
    NSLayoutDimension * _height;
    NSISVariable * _heightVariable;
    NSString * _identifier;
    NSLayoutXAxisAnchor * _leading;
    NSLayoutXAxisAnchor * _left;
    NSISVariable * _minXVariable;
    NSISVariable * _minYVariable;
    id  _owningView;
    id  _reserved2;
    unsigned int  _reservedFlags;
    NSLayoutXAxisAnchor * _right;
    unsigned int  _shouldBeArchived;
    NSLayoutYAxisAnchor * _top;
    NSLayoutXAxisAnchor * _trailing;
    NSLayoutDimension * _width;
    NSISVariable * _widthVariable;
}

@property (atomic, readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (atomic, readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (atomic, readonly) NSLayoutYAxisAnchor *centerYAnchor;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (atomic, readonly) BOOL hasAmbiguousLayout;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSLayoutDimension *heightAnchor;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (atomic, readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (atomic, readwrite) NSView *owningView;
@property (atomic, readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) NSLayoutYAxisAnchor *topAnchor;
@property (atomic, readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (atomic, readonly) NSLayoutDimension *widthAnchor;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (void)_allowingStaleFramesPerformBlock:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_alignmentFrame;
- (void)_didMoveFromLayoutEngine:(id)arg1 toEngine:(id)arg2;
- (void)_discardEngine:(id)arg1;
- (id)_heightVariable;
- (id)_minXVariable;
- (id)_minYVariable;
- (id)_referencingConstraints;
- (void)_snipReferencingConstraints;
- (void)_updateFrameIfNeeded;
- (id)_widthVariable;
- (BOOL)allowsNegativeSize;
- (id)bottom;
- (id)bottomAnchor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)centerX;
- (id)centerXAnchor;
- (id)centerY;
- (id)centerYAnchor;
- (id)constraintsAffectingLayoutForOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (BOOL)hasAmbiguousLayout;
- (id)height;
- (id)heightAnchor;
- (id)identifier;
- (id)init;
- (id)initAllowingNegativeSize;
- (id)initWithCoder:(id)arg1;
- (id)layoutRect;
- (id)leading;
- (id)leadingAnchor;
- (id)left;
- (id)leftAnchor;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (void)nsli_addConstraint:(id)arg1;
- (id)nsli_ancestorSharedWithItem:(id)arg1;
- (unsigned long long)nsli_autoresizingMask;
- (struct CGSize { double x1; double x2; })nsli_convertSizeFromEngineSpace:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })nsli_convertSizeToEngineSpace:(struct CGSize { double x1; double x2; })arg1;
- (id)nsli_description;
- (BOOL)nsli_descriptionIncludesPointer;
- (id)nsli_heightVariable;
- (id)nsli_installedConstraints;
- (BOOL)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1;
- (BOOL)nsli_isFlipped;
- (BOOL)nsli_isRTL;
- (id)nsli_itemDescribingLayoutDirectionForConstraint:(id)arg1 toItem:(id)arg2;
- (id)nsli_layoutEngine;
- (id)nsli_layoutRect;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4;
- (BOOL)nsli_lowersExpressionRelativeToConstraintContainer;
- (double)nsli_marginOffsetForAttribute:(long long)arg1;
- (id)nsli_minXVariable;
- (id)nsli_minYVariable;
- (unsigned long long)nsli_piercingToken;
- (BOOL)nsli_removeConstraint:(id)arg1;
- (BOOL)nsli_resolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
- (void)nsli_setPiercingToken:(unsigned long long)arg1;
- (id)nsli_superitem;
- (id)nsli_widthVariable;
- (id)owningView;
- (void)removeFromOwningView;
- (id)right;
- (id)rightAnchor;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIdentifier:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setOwningView:(id)arg1;
- (void)setShouldBeArchived:(BOOL)arg1;
- (BOOL)shouldBeArchived;
- (id)top;
- (id)topAnchor;
- (id)trailing;
- (id)trailingAnchor;
- (id)width;
- (id)widthAnchor;

// NSLayoutGuide (NSIBLayoutGuideIntegration)

- (id)ns_containerWidgetType;
- (id)ns_widgetType;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// NSLayoutGuide (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

@end
