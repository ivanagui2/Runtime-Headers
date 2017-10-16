/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVFunctionBarScrubberKnobView : NSView {
    long long  _animationCount;
    double  _expandAnimationProgress;
    AVTimer * _expandTimer;
    NSView * _expandableInnerKnobView;
    NSLayoutConstraint * _expandableInnerKnobViewLeftConstraint;
    NSLayoutConstraint * _expandableInnerKnobViewRightConstraint;
    BOOL  _expanded;
    NSView * _knobContentView;
    double  _normalizedCenteringValue;
    AVPlayerLayer * _scrubPlayerLayer;
    AVThumbnail * _thumbnail;
}

@property (atomic, readwrite) double expandAnimationProgress;
@property (atomic, readonly) NSView *expandableInnerKnobView;
@property (getter=isExpanded, atomic, readwrite) BOOL expanded;
@property (atomic, readwrite) double normalizedCenteringValue;
@property (atomic, readwrite, retain) AVPlayerLayer *scrubPlayerLayer;
@property (atomic, readwrite, retain) AVThumbnail *thumbnail;

+ (id)defaultAnimationForKey:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_isAnimating;
- (BOOL)_shouldShowThumbnail;
- (void)_startAnimating;
- (void)_stopAnimating;
- (void)_updateInnerKnobViewConstraints;
- (void)_updateLayerContents;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)expandAfterDelay;
- (double)expandAnimationProgress;
- (id)expandableInnerKnobView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isExpanded;
- (double)normalizedCenteringValue;
- (id)scrubPlayerLayer;
- (void)setExpandAnimationProgress:(double)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setNormalizedCenteringValue:(double)arg1;
- (void)setScrubPlayerLayer:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;

@end