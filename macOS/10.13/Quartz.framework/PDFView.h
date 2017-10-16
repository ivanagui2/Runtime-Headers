/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFView : NSView <DebugHierarchyObject, NSAnimationDelegate, NSMenuDelegate> {
    PDFViewPrivate * _private;
}

@property (nonatomic, readwrite) BOOL acceptsDraggedFiles;
@property (nonatomic, readwrite) BOOL autoScales;
@property (nonatomic, readwrite, retain) NSColor *backgroundColor;
@property (nonatomic, readonly) BOOL canGoBack;
@property (nonatomic, readonly) BOOL canGoForward;
@property (nonatomic, readonly) BOOL canGoToFirstPage;
@property (nonatomic, readonly) BOOL canGoToLastPage;
@property (nonatomic, readonly) BOOL canGoToNextPage;
@property (nonatomic, readonly) BOOL canGoToPreviousPage;
@property (nonatomic, readonly) BOOL canZoomIn;
@property (nonatomic, readonly) BOOL canZoomOut;
@property (nonatomic, readonly) PDFDestination *currentDestination;
@property (nonatomic, readonly) PDFPage *currentPage;
@property (nonatomic, readwrite, retain) PDFSelection *currentSelection;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <PDFViewDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) long long displayBox;
@property (nonatomic, readwrite) long long displayDirection;
@property (nonatomic, readwrite) long long displayMode;
@property (nonatomic, readwrite) BOOL displaysAsBook;
@property (nonatomic, readwrite) BOOL displaysPageBreaks;
@property (nonatomic, readwrite) BOOL displaysRTL;
@property (nonatomic, readwrite, retain) PDFDocument *document;
@property (nonatomic, readonly) NSView *documentView;
@property (nonatomic, readwrite) BOOL enableDataDetectors;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, copy) NSArray *highlightedSelections;
@property (nonatomic, readwrite) long long interpolationQuality;
@property (nonatomic, readwrite) double maxScaleFactor;
@property (nonatomic, readwrite) double minScaleFactor;
@property (nonatomic, readwrite) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } pageBreakMargins;
@property (nonatomic, readwrite) double scaleFactor;
@property (nonatomic, readonly) double scaleFactorForSizeToFit;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) NSArray *visiblePages;

// Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit

+ (void)EnableAnnotationKit;

- (void).cxx_destruct;
- (BOOL)PDFKitHandleBackTabInTextWidget:(id)arg1;
- (BOOL)PDFKitHandleTabInTextWidget:(id)arg1;
- (id)PDFLayout;
- (double)PDFViewWillChangeScaleFactor:(id)arg1 toScale:(double)arg2;
- (void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2;
- (double)_autoScaleFactorForFloatingPage:(id)arg1 withTargetView:(id)arg2;
- (void)_commonInit;
- (void)_doNotQueryScaleFactor;
- (void)_forceTileRefresh;
- (BOOL)_gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (id)_getDocumentAKController;
- (void)_goToPage:(id)arg1 animated:(BOOL)arg2 withBackgroundUpdate:(BOOL)arg3;
- (void)_releaseDocument;
- (void)_revealSelection:(id)arg1;
- (void)_searchInDictionary:(id)arg1;
- (void)_searchInGoogle:(id)arg1;
- (void)_setActualSize:(id)arg1;
- (void)_setAutoSize:(id)arg1;
- (void)_setDoublePage:(id)arg1;
- (void)_setDoublePageScrolling:(id)arg1;
- (void)_setSinglePage:(id)arg1;
- (void)_setSinglePageScrolling:(id)arg1;
- (void)_syncPageIndexToScrollView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformFromPageToPageView:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformFromPageViewToPage:(id)arg1;
- (double)_unboundAutoScaleFactorForPage:(id)arg1;
- (double)_unboundAutoScaleFactorForPageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateAnnotations;
- (void)_updateBackingScale:(id)arg1;
- (void)_updateBookmarksForPages;
- (BOOL)acceptsDraggedFiles;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)akAnnotationEditingEnabled;
- (id)akOverlayAdaptor;
- (id)akToolbarView;
- (BOOL)allowsDragging;
- (unsigned long long)animateFlag;
- (BOOL)animateNeighboringPageChangeOnly;
- (void)animateTransitionFromPage:(id)arg1 toPage:(id)arg2;
- (void)animationDidEnd:(id)arg1;
- (double)animationDuration;
- (void)annotationsChangedOnPage:(id)arg1;
- (void)appendPasswordUI;
- (long long)areaOfInterestForMouse:(id)arg1;
- (long long)areaOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)autoScaleFactor;
- (double)autoScaleFactorForPage:(id)arg1;
- (double)autoScaleFactorForPageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)autoScales;
- (BOOL)automaticallyHandleGutter;
- (id)backgroundColor;
- (BOOL)becomeFirstResponder;
- (void)callPageVisibilityDelegateMethod:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (void)callPageVisibilityDelegateMethodForOverlayAdaptorOnly:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (BOOL)canGoToFirstPage;
- (BOOL)canGoToLastPage;
- (BOOL)canGoToNextPage;
- (BOOL)canGoToPreviousPage;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)clearSelection;
- (void)colorWidgetBackgrounds:(bool)arg1;
- (void)constrainedScrollToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromPage:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPage:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromPage:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toPage:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToRootView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromPageLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRootViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toPageLayer:(id)arg2;
- (void)copy:(id)arg1;
- (void)copyLink:(id)arg1;
- (void)createCurrentImageFromView:(id)arg1;
- (void)createTransition:(int)arg1 forView:(id)arg2;
- (id)currentDestination;
- (long long)currentHistoryIndex;
- (id)currentPage;
- (id)currentSelection;
- (void)cursorUpdate:(id)arg1;
- (void)dealloc;
- (void)debugAccessibilityMenu:(id)arg1;
- (BOOL)debugAccessibilityShouldDrawLayer:(int)arg1;
- (void)debugMenu:(id)arg1;
- (double)defaultGutterWidth;
- (id)delegate;
- (id)determineCurrentPage;
- (long long)displayBox;
- (long long)displayDirection;
- (long long)displayMode;
- (BOOL)displaysAsBook;
- (BOOL)displaysBookmarksForPages;
- (BOOL)displaysMarkupAnnotations;
- (BOOL)displaysPageBreaks;
- (BOOL)displaysRTL;
- (BOOL)doPeriodicFlush;
- (id)document;
- (void)documentDidBeginWrite:(id)arg1;
- (void)documentDidEndWrite:(id)arg1;
- (id)documentScrollView;
- (id)documentView;
- (void)documentWasUnlocked;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)drawAccessibilityNodeType:(int)arg1 enableDrawing:(bool)arg2;
- (void)drawPage:(id)arg1;
- (void)drawPage:(id)arg1 toContext:(struct CGContext { }*)arg2;
- (void)drawPagePost:(id)arg1;
- (void)drawPagePost:(id)arg1 toContext:(struct CGContext { }*)arg2;
- (BOOL)enableDataDetectors;
- (BOOL)enableSelectionDrawing;
- (void)enableSwipeGestures:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditingAnnotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendedRootViewBounds;
- (void)findVisiblePages;
- (bool)flipsTileContents;
- (void)fluidSwipeWithEvent:(id)arg1;
- (void)forceWebKitMainThread:(bool)arg1;
- (void)gestureInit;
- (void)goBack:(id)arg1;
- (void)goForward:(id)arg1;
- (void)goToDestination:(id)arg1;
- (void)goToDestinationNoPush:(id)arg1;
- (void)goToFirstPage:(id)arg1;
- (void)goToLastPage:(id)arg1;
- (void)goToNextPage:(id)arg1;
- (void)goToPage:(id)arg1;
- (void)goToPage:(id)arg1 animated:(BOOL)arg2;
- (void)goToPageNoPush:(id)arg1;
- (void)goToPageNoPush:(id)arg1 animated:(BOOL)arg2;
- (void)goToPageWithoutBackgroundUpdate:(id)arg1;
- (void)goToPreviousPage:(id)arg1;
- (void)goToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPage:(id)arg2;
- (void)goToSelection:(id)arg1;
- (double)greekingThreshold;
- (id)gutterColor;
- (double)gutterWidth;
- (void)handleAnimatePageTransition:(id)arg1;
- (void)handleAnimateScrollFromPt:(struct CGPoint { double x1; double x2; })arg1 toPt:(struct CGPoint { double x1; double x2; })arg2;
- (void)handleAnimationProgress;
- (BOOL)handleBackTabInTextWidget:(id)arg1;
- (BOOL)handleScrollWheel:(id)arg1;
- (BOOL)handleTabInTextWidget:(id)arg1;
- (bool)hasEnabledSwipeGestures;
- (id)highlightedSelections;
- (void)hintScrollDirectionHorizontal:(unsigned long long)arg1 andVertical:(unsigned long long)arg2;
- (id)history;
- (void)immediateActionRecognizerWillPrepare:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)installDebugMenu;
- (void)interactWithAnnotation:(id)arg1;
- (void)internalSetScaleFactor:(double)arg1;
- (long long)interpolationQuality;
- (bool)isDrawingAccessibilityNodeType:(int)arg1;
- (bool)isForcingWebKitMainThread;
- (BOOL)isOverLinkAnnotation:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)isOverWidgetAnnotation:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)isRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPage:(id)arg2;
- (void)keyDown:(id)arg1;
- (unsigned long long)lastPageIndex;
- (void)layoutDocumentView;
- (double)lineWidthThreshold;
- (double)maxScaleFactor;
- (double)maximumScrollAnimationDistance;
- (id)menuForEvent:(id)arg1;
- (double)minScaleFactor;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })movePDFPageView:(id)arg1 toView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })movePDFPageView:(id)arg1 toView:(id)arg2 withAutoScale:(bool)arg3;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (id)nextPage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedPageBounds:(id)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })pageBreakMargins;
- (id)pageColor;
- (id)pageForPoint:(struct CGPoint { double x1; double x2; })arg1 nearest:(BOOL)arg2;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (double)pageViewHeight:(id)arg1;
- (struct CGSize { double x1; double x2; })pageViewSizeForPage:(id)arg1;
- (void)pdfViewDidChangePage:(id)arg1;
- (void)pdfViewDidChangeScale:(id)arg1;
- (void)performAction:(id)arg1;
- (void)performBeep;
- (BOOL)performDragOperation:(id)arg1;
- (void)performOverlayAdaptorPageVisibilityTrueUpAfterSettingDocument;
- (id)popupManager;
- (void)positionInternalViews:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)previewRotatePage:(id)arg1 byDegrees:(double)arg2;
- (void)previewRotatePageBegin:(id)arg1;
- (void)previewRotatePageComplete:(id)arg1 willCommitRotation:(bool)arg2 byDegrees:(double)arg3;
- (id)previousPage;
- (void)print:(id)arg1;
- (void)printAccessibilityTree;
- (void)printActivePageAnnotations;
- (void)printActivePageInfo;
- (void)printDocument:(id)arg1;
- (void)printWithInfo:(id)arg1 autoRotate:(BOOL)arg2;
- (void)printWithInfo:(id)arg1 autoRotate:(BOOL)arg2 pageScaling:(long long)arg3;
- (void)pushDestination:(id)arg1;
- (void)reflectNewPageOn;
- (void)removeFromSuperview;
- (void)removePasswordUI;
- (id)renderingProperties;
- (void)resetAccessibilityTree;
- (BOOL)resignFirstResponder;
- (void)resizeDisplayView:(id)arg1;
- (void)revealContext:(id)arg1 drawRectsForItem:(id)arg2;
- (id)revealContext:(id)arg1 rectsForItem:(id)arg2;
- (BOOL)revealContext:(id)arg1 shouldUseDefaultHighlightForItem:(id)arg2;
- (void)revertPDFPageView:(id)arg1 withOriginalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rootViewBounds;
- (struct CGSize { double x1; double x2; })rowSizeForPage:(id)arg1;
- (double)scaleFactor;
- (double)scaleFactorForSizeToFit;
- (void)scrollByPage:(BOOL)arg1;
- (void)scrollHorizontalBy:(double)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (struct CGPoint { double x1; double x2; })scrollOriginForPageTopLeft:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollSelectionToVisible:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollVerticalBy:(double)arg1;
- (void)scrollViewSaysPageMayHaveChanged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)scrollingChangesPages;
- (void)selectAll:(id)arg1;
- (void)selfDidResize:(id)arg1;
- (void)setAcceptsDraggedFiles:(BOOL)arg1;
- (void)setAkAnnotationEditingEnabled:(BOOL)arg1;
- (void)setAllowsDragging:(BOOL)arg1;
- (void)setAnimateFlag:(unsigned long long)arg1;
- (void)setAnnotationKitCursorOverride:(id)arg1;
- (void)setAutoScales:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentSelection:(id)arg1;
- (void)setCurrentSelection:(id)arg1 animate:(BOOL)arg2;
- (void)setCurrentSelectionNoClear:(id)arg1;
- (void)setCursorForAreaOfInterest:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayBox:(long long)arg1;
- (void)setDisplayDirection:(long long)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setDisplaysAsBook:(BOOL)arg1;
- (void)setDisplaysBookmarksForPages:(BOOL)arg1;
- (void)setDisplaysPageBreaks:(BOOL)arg1;
- (void)setDisplaysRTL:(BOOL)arg1;
- (void)setDoPeriodicFlush:(BOOL)arg1;
- (void)setDocument:(id)arg1;
- (void)setDocument:(id)arg1 waitDuration:(double)arg2;
- (void)setDocument:(id)arg1 withInitialPageIndex:(unsigned long long)arg2;
- (void)setEnableDataDetectors:(BOOL)arg1;
- (void)setEnablePageShadows:(bool)arg1;
- (void)setEnableSelectionDrawing:(BOOL)arg1;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGreekingThreshold:(double)arg1;
- (void)setGutterColor:(id)arg1;
- (void)setGutterWidth:(double)arg1;
- (void)setHighlightedSelections:(id)arg1;
- (void)setInterpolationQuality:(long long)arg1;
- (void)setLineWidthThreshold:(double)arg1;
- (void)setMaxScaleFactor:(double)arg1;
- (void)setMinScaleFactor:(double)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNewPageVisibilityDelegate:(id)arg1 withOldDelegate:(id)arg2;
- (void)setPDFPageView:(id)arg1 tileLayoutScale:(double)arg2;
- (void)setPageBreakMargins:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPageColor:(id)arg1;
- (void)setPopupManager:(id)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setScaleFactor:(double)arg1 anchorPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setScrollingChangesPages:(BOOL)arg1;
- (void)setShouldAntiAlias:(BOOL)arg1;
- (void)setShowsScrollIndicators:(bool)arg1;
- (void)setUsesPageLabels:(BOOL)arg1;
- (BOOL)shouldAnimateScroll;
- (BOOL)shouldAntiAlias;
- (BOOL)showsScrollIndicators;
- (void)startAnimateZoomToScaleFactor:(double)arg1;
- (void)startAnimationToScaleFactor:(double)arg1 finalCenter:(struct CGPoint { double x1; double x2; })arg2 onPage:(id)arg3;
- (void)startEditingTextWidgetAnnotation:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)stopPDFViewAnimation;
- (void)stopSpeaking:(id)arg1;
- (BOOL)suspendRendering;
- (void)syncPageIndexToScrollView;
- (void)takeBackgroundColorFrom:(id)arg1;
- (void)takePasswordFrom:(id)arg1;
- (void)updateCurrentPageUsingViewCenter;
- (BOOL)usesPageLabels;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)validateDebugAccessibilityMenuItem:(id)arg1;
- (BOOL)validateDebugMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidMoveToWindow;
- (id)viewForPage:(id)arg1;
- (id)visiblePageViews;
- (id)visiblePages;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (void)zoomIn:(id)arg1;
- (void)zoomOut:(id)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// PDFView (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

@end