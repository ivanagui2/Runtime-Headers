/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PARangeContainer : NSObject {
    PAMemRange * range;
}

@property (atomic, readwrite, retain) PAMemRange *range;

- (long long)compareRange:(id)arg1 equalWhenContained:(BOOL)arg2 equalWhenIntersects:(BOOL)arg3;
- (id)range;
- (void)setRange:(id)arg1;

@end
