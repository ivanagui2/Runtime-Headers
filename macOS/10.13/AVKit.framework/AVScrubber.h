/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVScrubber : NSSlider {
    NSDateComponentsFormatter * _dateComponentsFormatter;
    NSArray * _loadedTimeRanges;
}

@property (nonatomic, readwrite, retain) NSArray *loadedTimeRanges;

+ (void)initialize;

- (void).cxx_destruct;
- (id)accessibilityValueDescription;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (BOOL)allowsVibrancy;
- (double)baselineOffsetFromBottom;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)loadedTimeRanges;
- (void)setLoadedTimeRanges:(id)arg1;

@end