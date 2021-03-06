/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSToolbarItemViewerLabelCellPopUpCell : NSPopUpButtonCell {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedOutputCellSize;
    NSToolbarItemViewer * _itemViewer;
    NSString * _realTitle;
}

- (void)_drawRealTitleWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_menuLocationForEvent:(id)arg1 inCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (BOOL)_positionsMenuAsPullDown;
- (void)_setRealTitle:(id)arg1;
- (void)_setTextShadow:(BOOL)arg1;
- (id)_sharedTextCell;
- (unsigned long long)alignment;
- (void)beginUsingMenuFormRepresentation:(id)arg1;
- (BOOL)canSmoothFontsInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLayerBackedView:(id)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawTitleWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)finishUsingMenuRepresentation;
- (long long)indexOfSelectedItem;
- (id)initTextCell:(id)arg1;
- (id)itemViewer;
- (void)performClickWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)setFont:(id)arg1;
- (void)setItemViewer:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)synchronizeTitleAndSelectedItem;
- (id)title;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// _NSToolbarItemViewerLabelCellPopUpCell (_NSToolbarItemViewerLabelCellPopUpCellAccessibility)

- (BOOL)_accessibilityMenuFormRepresentationHasOwnTargetAction;
- (BOOL)_accessibilityMenuFormRepresentationHasSubmenu;
- (BOOL)_accessibilityMenuFormRepresentationHasSubmenuAndOwnTargetAction;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHelpAttribute;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityRoleAttribute;

@end
