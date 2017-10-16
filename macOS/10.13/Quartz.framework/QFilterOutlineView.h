/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
 */

@interface QFilterOutlineView : NSOutlineView {
    BOOL  changeSelectionAllowed;
}

- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;
- (void)clickAction:(id)arg1;
- (void)dealloc;
- (void)didReorderOrResizeNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)keyDown:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (void)noteNumberOfRowsChanged;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)reloadData;
- (void)removeQFilterCellViews:(id)arg1;
- (void)removeTableColumn:(id)arg1;
- (void)replaceHeaderView;
- (BOOL)selectionShouldChangeInOutlineView:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)workaroundReorderResizeProblem;

@end