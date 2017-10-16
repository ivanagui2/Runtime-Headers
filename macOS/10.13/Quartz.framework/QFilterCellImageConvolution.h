/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
 */

@interface QFilterCellImageConvolution : QFilterCell {
    NSBox * ImageConvolutionBox;
    NSPopUpButton * ImageConvolutionChoice;
    NSTextField * ImageConvolutionText;
    QFilterImageConvolutionView * ImageConvolutionView;
}

+ (BOOL)needsToRemainInViewHierarchy;

- (void)ImageConvolutionChoiceAction:(id)arg1;
- (void)instantiateView;
- (void)updateUI;

@end