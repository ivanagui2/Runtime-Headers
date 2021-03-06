/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSSegmentedCellAuxiliary : NSObject {
    _NSAcceleratorButtonHelper * _acceleratorHelper;
    NSUserInterfaceCompressionOptions * _compressibleOptions;
    double  _gasPedalDoubleValue;
    long long  _highlightedSegment;
    BOOL  _inTouchBar;
    BOOL  _lastGasPedalActionWasHighlighted;
    NSTimer * _menuTimer;
    long long  _segmentDistribution;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _segmentFrameOfTrackedCell;
    unsigned long long  _segmentTrackingRectCount;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _segmentTrackingRects;
    NSColor * _selectedSegmentBezelColor;
    BOOL  _sendActionOnGasPedal;
    BOOL  _sendSelectionAction;
}

@property (atomic, readwrite, retain) NSUserInterfaceCompressionOptions *compressibleOptions;
@property (atomic, readwrite) double gasPedalDoubleValue;
@property (atomic, readwrite) long long highlightedSegment;
@property (atomic, readwrite) BOOL inTouchBar;
@property (atomic, readwrite) BOOL lastGasPedalActionWasHighlighted;
@property (atomic, readwrite, retain) NSTimer *menuTimer;
@property (atomic, readwrite) long long segmentDistribution;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } segmentFrameOfTrackedCell;
@property (atomic, readwrite) unsigned long long segmentTrackingRectCount;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*segmentTrackingRects;
@property (atomic, readwrite) BOOL sendActionOnGasPedal;
@property (atomic, readwrite) BOOL sendSelectionAction;

- (id)compressibleOptions;
- (void)dealloc;
- (double)gasPedalDoubleValue;
- (long long)highlightedSegment;
- (BOOL)inTouchBar;
- (id)init;
- (BOOL)lastGasPedalActionWasHighlighted;
- (id)menuTimer;
- (long long)segmentDistribution;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })segmentFrameOfTrackedCell;
- (unsigned long long)segmentTrackingRectCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)segmentTrackingRects;
- (BOOL)sendActionOnGasPedal;
- (BOOL)sendSelectionAction;
- (void)setCompressibleOptions:(id)arg1;
- (void)setGasPedalDoubleValue:(double)arg1;
- (void)setHighlightedSegment:(long long)arg1;
- (void)setInTouchBar:(BOOL)arg1;
- (void)setLastGasPedalActionWasHighlighted:(BOOL)arg1;
- (void)setMenuTimer:(id)arg1;
- (void)setSegmentDistribution:(long long)arg1;
- (void)setSegmentFrameOfTrackedCell:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSegmentTrackingRectCount:(unsigned long long)arg1;
- (void)setSegmentTrackingRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)setSendActionOnGasPedal:(BOOL)arg1;
- (void)setSendSelectionAction:(BOOL)arg1;

@end
