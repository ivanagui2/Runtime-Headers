/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSearchFieldCell : NSTextFieldCell <CALayerDelegate> {
    NSButtonCell * _cancelButtonCell;
    NSTimer * _partialStringTimer;
    NSMutableArray * _recentSearches;
    NSString * _recentsAutosaveName;
    unsigned int  _reserved1;
    unsigned int  _reserved2;
    unsigned int  _reserved3;
    unsigned int  _reserved4;
    NSButtonCell * _searchButtonCell;
    NSMenu * _searchMenu;
    NSMenu * _searchMenuTemplate;
    struct __sfFlags { 
        unsigned int sendsWholeSearchString : 1; 
        unsigned int maximumRecents : 8; 
        unsigned int cancelVisible : 1; 
        unsigned int reserved2 : 2; 
        unsigned int disableText : 1; 
        unsigned int menuTracking : 1; 
        unsigned int deferredUpdate : 1; 
        unsigned int sendsImmediately : 1; 
        unsigned int centeredLook : 1; 
        unsigned int renderingCentered : 1; 
        unsigned int becomeTransition : 1; 
        unsigned int resignTransition : 1; 
        unsigned int subclassOverridesRectForSearchButtonWhenCentered : 2; 
        unsigned int subclassOverridesRectForSearchTextWhenCentered : 2; 
        unsigned int subclassOverridesRectForCancelButtonWhenCentered : 2; 
        unsigned int resumeEditingOnCancel : 1; 
        unsigned int reserved : 5; 
    }  _sfFlags;
}

@property (atomic, readwrite, retain) NSButtonCell *cancelButtonCell;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) long long maximumRecents;
@property (atomic, readwrite, copy) NSArray *recentSearches;
@property (atomic, readwrite, copy) NSString *recentsAutosaveName;
@property (atomic, readwrite, retain) NSButtonCell *searchButtonCell;
@property (atomic, readwrite, retain) NSMenu *searchMenuTemplate;
@property (atomic, readwrite) BOOL sendsSearchStringImmediately;
@property (atomic, readwrite) BOOL sendsWholeSearchString;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (BOOL)automaticTextCompletionEnabled;
+ (void)initialize;

- (double)_cancelButtonInsetForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 userInterfaceLayoutDirection:(long long)arg2;
- (id)_cancelButtonLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cancelButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_cancelButtonSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 userInterfaceLayoutDirection:(long long)arg2;
- (id)_defaultPlaceholderString;
- (void)_drawForegroundOfTextLayer;
- (void)_getTextColor:(id*)arg1 backgroundColor:(id*)arg2;
- (void)_invalidateTextLayer;
- (BOOL)_isEmpty;
- (void)_resetResignTransition;
- (double)_searchButtonInsetForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 userInterfaceLayoutDirection:(long long)arg2 menu:(BOOL)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_searchButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 focused:(BOOL)arg2;
- (struct CGSize { double x1; double x2; })_searchButtonSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 userInterfaceLayoutDirection:(long long)arg2;
- (id)_searchMenuButtonLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_searchMenuButtonLayerFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 focus:(BOOL)arg2;
- (id)_searchMenuButtonLayerWithMenu;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_searchTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 focused:(BOOL)arg2;
- (id)_selectOrEdit:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7;
- (BOOL)_sendActionFrom:(id)arg1;
- (void)_setCancelButtonVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)_shouldSetHighlightToFlag:(BOOL)arg1;
- (void)_tearDownPartialStringTimer;
- (id)_textLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textLayerRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_transitionInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofView:(id)arg2 becomeFirstResponder:(BOOL)arg3 completion:(id)arg4;
- (BOOL)_updateStyledTextOptions:(id)arg1 withContentAppearanceInView:(id)arg2;
- (BOOL)_usesCenteredLook;
- (void)_windowChangedKeyStateInView:(id)arg1;
- (void)dealloc;

// NSSearchFieldCell (NSSearchButtonCellProxy)

- (id)_searchMenuForProxy;
- (BOOL)_searchMenuTracking;

// NSSearchFieldCell (NSSearchFieldCellAccessibility)

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilitySearchFieldCellBounds;

// NSSearchFieldCell (NSSearchFieldCellProKitExtras)

- (BOOL)_proCancelVisible;
- (void)_setProCancelVisible:(BOOL)arg1;

// NSSearchFieldCell (NSSearchFieldCell_Local)

+ (double)_keyboardDelayForPartialSearchString:(id)arg1;

- (void)_addStringToRecentSearches:(id)arg1;
- (void)_adjustCancelButtonCellImages:(BOOL)arg1 :(BOOL)arg2;
- (void)_adjustSearchButtonCellImages:(BOOL)arg1 :(BOOL)arg2;
- (void)_autosaveRecentSearchList;
- (BOOL)_controlView:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)_deregisterForAutosaveNotification;
- (void)_loadRecentSearchList;
- (struct CGPoint { double x1; double x2; })_menuLocationInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (long long)_realMaximumRecents;
- (void)_registerForAutosaveNotification;
- (void)_restartEditingWithTextView:(id)arg1;
- (void)_searchFieldCancel:(id)arg1;
- (void)_searchFieldClearRecents:(id)arg1;
- (void)_searchFieldDoRecent:(id)arg1;
- (void)_searchFieldSearch:(id)arg1;
- (id)_searchMenuTemplate;
- (void)_sendPartialString;
- (void)_textDidEndEditing:(id)arg1;
- (void)_trackButton:(id)arg1 forEvent:(id)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 ofView:(id)arg4;
- (BOOL)_trimRecentSearchList;
- (void)_updateAutosavedRecents:(id)arg1;
- (void)_updateSearchMenu;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (id)accessibilityClearButtonAttribute;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsClearButtonAttributeSettable;
- (BOOL)accessibilityIsSearchButtonAttributeSettable;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (id)accessibilityPositionOfChild:(id)arg1;
- (id)accessibilitySearchButtonAttribute;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilitySubroleAttribute;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)cancelButtonCell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cancelButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)displayTextLayer:(id)arg1 withContext:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditing:(id)arg1;
- (id)fontSmoothingBackgroundColorForTextLayer:(id)arg1;
- (id)init;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)interiorBackgroundStyle;
- (BOOL)isCenteredLook;
- (void)layoutLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (long long)maximumRecents;
- (id)recentSearches;
- (id)recentsAutosaveName;
- (void)resetCancelButtonCell;
- (void)resetCursorRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)resetSearchButtonCell;
- (BOOL)resumeEditingOnCancel;
- (id)searchButtonCell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })searchButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })searchButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 focused:(BOOL)arg2;
- (Class)searchMenuFactoryClass;
- (id)searchMenuTemplate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })searchTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })searchTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 focused:(BOOL)arg2;
- (BOOL)sendsSearchStringImmediately;
- (BOOL)sendsWholeSearchString;
- (void)setCancelButtonCell:(id)arg1;
- (void)setCenteredLook:(BOOL)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setMaximumRecents:(long long)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setRecentSearches:(id)arg1;
- (void)setRecentsAutosaveName:(id)arg1;
- (void)setResumeEditingOnCancel:(BOOL)arg1;
- (void)setSearchButtonCell:(id)arg1;
- (void)setSearchMenuTemplate:(id)arg1;
- (void)setSendsSearchStringImmediately:(BOOL)arg1;
- (void)setSendsWholeSearchString:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (void)textDidChange:(id)arg1;
- (BOOL)textLayerCanUseLinearMaskOverlay:(id)arg1;
- (BOOL)textLayerShouldDoSubpixelAntialiasing:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)updateLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (BOOL)wantsUpdateLayerInView:(id)arg1;

@end
