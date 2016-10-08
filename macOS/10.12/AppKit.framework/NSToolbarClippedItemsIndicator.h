/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSToolbarClippedItemsIndicator : NSPopUpButton {
    BOOL  _cachedMenuIsValid;
    NSArray * _clippedItems;
    id  _clippedItemsReservedn8;
    BOOL  _returnFocusToWindowAfterClick;
}

+ (void)initialize;
+ (BOOL)isItemShownInPopupIfSoleEntry:(id)arg1;
+ (BOOL)willHaveItemsToDisplayForItemViewers:(id)arg1;

- (id)_clipViewAncestor;
- (void)_computeMenuForClippedItems;
- (void)_computeMenuForClippedItemsIfNeeded;
- (BOOL)_shouldDrawSelectionIndicatorForItem:(id)arg1;
- (void)_simpleOverflowMenuItemClicked:(id)arg1;
- (void)_updateMenuForClippedItems;
- (void)_willPopUpNotification:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)allowsVibrancy;
- (BOOL)becomeFirstResponder;
- (void)becomeKeyWindow;
- (id)clipIndicatorImage;
- (id)clippedItems;
- (void)dealloc;
- (void)didSendActionNotification:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)hasItemsToDisplayInPopUp;
- (id)init;
- (BOOL)itemIsClipped:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (void)performClick:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)resignKeyWindow;
- (void)setClippedItems:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;

@end