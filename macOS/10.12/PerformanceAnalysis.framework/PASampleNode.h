/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PASampleNode : NSObject {
    NSArray * children;
    <PASampleNodeDataSource> * dataSource;
    BOOL  isInSearchResult;
    PASampleNode * parent;
}

@property (atomic, readwrite, retain) NSArray *children;
@property (atomic, readwrite) <PASampleNodeDataSource> *dataSource;
@property (atomic, readwrite) BOOL isInSearchResult;
@property (atomic, readwrite) PASampleNode *parent;

- (id)children;
- (id)dataSource;
- (id)displayName;
- (id)init;
- (BOOL)isInSearchResult;
- (id)parent;
- (void)recalculateSamples;
- (unsigned long long)responsibleSamples;
- (unsigned long long)samples;
- (void)setChildren:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsInSearchResult:(BOOL)arg1;
- (void)setParent:(id)arg1;
- (BOOL)shouldDisplay;

@end