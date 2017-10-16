/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCTimeLineEditorView : NSView {
    NSScrollView * _scrollView;
    QCTimeLineView * _timeLineView;
    NSButton * controlPointsButton;
    NSButton * createNewTimeLine;
    NSButton * curveHullsButton;
    NSButton * fitAllButton;
    NSButton * fitSelectedButton;
    QCKeyFrameEditor * keyFrameEditor;
    NSButton * legendVisibleButton;
    NSButton * removeSelectedTimeLine;
}

- (void)awakeFromNib;
- (void)createNewTimeLine:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isOpaque;
- (void)removeSelectedTimeLine:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPatch:(id)arg1;
- (void)tlZoomIn:(id)arg1;
- (void)tlZoomOut:(id)arg1;
- (void)tlZoomToFitAll:(id)arg1;
- (void)tlZoomToFitSelection:(id)arg1;
- (void)toggleCurveHulls:(id)arg1;
- (void)toggleLegendVisible:(id)arg1;
- (void)updateUI:(id)arg1;

@end