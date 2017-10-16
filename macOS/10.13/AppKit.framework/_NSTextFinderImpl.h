/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSTextFinderImpl : NSObject <NSComboBoxDelegate, NSFindPatternManager, NSWindowDelegate> {
    NSTextFinderAsyncSearch * _asyncSearch;
    <NSTextFinderAsynchronousDocumentFindMatch> * _asynchronousDocumentCurrentMatch;
    NSProgress * _currentAsynchronousDocumentFindProgress;
    BOOL  _disableDelay;
    NSTextFinder * _finder;
    long long  _ignoreCancelCount;
    BOOL  _incremental;
    NSMutableArray * _incrementalAsynchronousDocumentMatches;
    NSMutableRangeArray * _incrementalMatchRanges;
    id  _indicator;
    id  _indicatorDelay;
    long long  _lastChangeCount;
    BOOL  _lastFindWasSuccessful;
    long long  _matchCount;
    DOMRange * _matchDOMRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _matchRange;
    WebView * _matchWebView;
    NSMutableArray * _matchWebViews;
    NSMutableArray * _retiredAsyncSearches;
    NSMapTable * _webViewsToDOMRanges;
}

@property (atomic, readwrite, retain) <NSTextFinderAsynchronousDocumentFindMatch> *asynchronousDocumentCurrentMatch;
@property (atomic, readwrite, retain) NSProgress *currentAsynchronousDocumentProgress;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSMutableArray *incrementalAsynchronousDocumentMatches;
@property (atomic, readwrite, retain) DOMRange *matchDOMRange;
@property (atomic, readwrite, retain) WebView *matchWebView;
@property (atomic, readonly) Class superclass;

+ (double)_indicatorDelayIntervalForSearchString:(id)arg1;
+ (void)showWrapIndicatorImage:(id)arg1 inView:(id)arg2;
+ (void)showWrapIndicatorInView:(id)arg1 forward:(BOOL)arg2;

- (id)_DOMRangeMatchesForString:(id)arg1 webView:(id)arg2 inDOMRange:(id)arg3;
- (void)_addDOMRange:(id)arg1 webView:(id)arg2;
- (void)_asyncSearchCompleted:(id)arg1;
- (unsigned long long)_asynchronousDocumentFindOptions:(BOOL)arg1;
- (BOOL)_canReplace;
- (BOOL)_canSetSelection;
- (void)_cancelFindIndicator;
- (void)_cancelIndicatorDelay;
- (void)_changeIncrementalMatches:(unsigned long long)arg1 indexes:(id)arg2 block:(id)arg3;
- (void)_clearCurrentMatch;
- (void)_clearIncrementalMatches;
- (void)_clearWebViewMatches;
- (void)_clientDidReplaceCharacters;
- (BOOL)_clientShouldReplaceCharactersInRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 count:(unsigned long long)arg2 withStrings:(id)arg3;
- (void)_containerDidChange;
- (id)_contentViewAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_currentMatchRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_currentRange;
- (void)_delayFeedbackWithScrolling:(BOOL)arg1 updateBlock:(id)arg2;
- (void)_didFindAsynchronousDocumentMatch:(id)arg1 wrapped:(BOOL)arg2 forward:(BOOL)arg3;
- (void)_didFindMatchInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 wrapped:(BOOL)arg2 forward:(BOOL)arg3;
- (void)_disableDelay;
- (id)_findField;
- (BOOL)_findIndicatorNeedsUpdate;
- (id)_finder;
- (void)_foundFirstMatchInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 show:(BOOL)arg2 disableDelay:(BOOL)arg3;
- (BOOL)_getNextMatchAfterCurrentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forward:(BOOL)arg2 wrap:(BOOL)arg3 result:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (BOOL)_hasFindPattern;
- (BOOL)_hasValidFindPattern;
- (void)_hideIncrementalMatchesAndAnimate:(BOOL)arg1;
- (BOOL)_incremental;
- (id)_incrementalMatchRanges;
- (BOOL)_isWebViewMatchCountOverLimit;
- (BOOL)_lastFindWasSuccessful;
- (BOOL)_loadSearchStringFromPasteboard;
- (void)_loadSearchStringToPasteboard;
- (long long)_matchCount;
- (id)_matchDOMRangesForWebView:(id)arg1;
- (id)_matchWebViews;
- (unsigned long long)_maxWebViewMatchCount;
- (BOOL)_needToRefreshFromPasteboard;
- (void)_noteClientStringWillChange;
- (void)_onMainThreadUpdateCurrentProgress:(id)arg1 thenProcessResultsUsingBlock:(id)arg2;
- (void)_performAction:(long long)arg1;
- (void)_performProgressReportingClientOperationUsingBlock:(id)arg1;
- (void)_performReplace:(id)arg1;
- (id)_replaceField;
- (void)_resetIncrementalSearch;
- (void)_restoreDefaultSearchOptions;
- (void)_retireAsyncSearch:(id)arg1;
- (void)_searchWebViewsShowingFirstMatch:(BOOL)arg1;
- (BOOL)_selectionIsMatch;
- (void)_setFindIndicatorNeedsUpdate:(BOOL)arg1;
- (void)_setFinder:(id)arg1;
- (void)_setGlobalFindSettings;
- (void)_setIncremental:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_setMatchCount:(long long)arg1;
- (void)_setSelection:(id)arg1;
- (void)_showFindIndicatorForDOMRange:(id)arg1 webView:(id)arg2;
- (void)_showFindIndicatorForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_showWrapIndicatorForward:(BOOL)arg1;
- (void)_startIncrementalAsynchronousDocumentSearchShowingFirstMatch:(BOOL)arg1;
- (void)_startIncrementalSearchShowingFirstMatch:(BOOL)arg1;
- (void)_startWebViewSearchShowingFirstMatch:(BOOL)arg1;
- (void)_updateIncrementalMatches;
- (void)_updateIndicator;
- (BOOL)_validateAction:(long long)arg1;
- (id)_visibleMatchRanges;
- (void)activate;
- (void)addStringToRecentReplaceStrings:(id)arg1;
- (void)addStringToRecentSearchStrings:(id)arg1;
- (void)appDidActivate:(id)arg1;
- (id)asynchronousDocumentCurrentMatch;
- (id)client;
- (id)currentAsynchronousDocumentProgress;
- (void)deactivate;
- (void)dealloc;
- (id)findFieldForField:(id)arg1;
- (void)findForward:(BOOL)arg1 completionHandler:(id)arg2;
- (void)findPatternField:(id)arg1 findPatternDoubleClicked:(id)arg2;
- (void)handleResult:(long long)arg1 forAction:(long long)arg2;
- (void)hideReplace;
- (id)incrementalAsynchronousDocumentMatches;
- (id)incremental_allMatchesInRanges:(id)arg1;
- (BOOL)incremental_hasMatchInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)incremental_matchesIntersectingRanges:(id)arg1;
- (void)incremental_nextAsynchronousDocumentFindMatchForward:(BOOL)arg1 wrap:(BOOL)arg2 completionHandler:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })incremental_nextMatchAfterCurrentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forward:(BOOL)arg2 wrap:(BOOL)arg3;
- (BOOL)incremental_nextMatchAfterCurrentWebViewMatchForward:(BOOL)arg1 wrap:(BOOL)arg2;
- (id)init;
- (BOOL)isVisible;
- (id)matchDOMRange;
- (id)matchWebView;
- (void)nextMatchAfterCurrentRange:(id)arg1 inWebView:(id)arg2 forward:(BOOL)arg3 wrap:(BOOL)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfNextMatchInString:(id)arg1 currentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forward:(BOOL)arg3 wrap:(BOOL)arg4;
- (id)rangesOfMatchesInString:(id)arg1 inRanges:(id)arg2;
- (void)replace:(id)arg1;
- (void)replaceAllInSelectionOnly:(BOOL)arg1 completionHandler:(id)arg2;
- (void)replaceAndFind:(id)arg1;
- (id)replaceFieldForField:(id)arg1;
- (id)replacementString;
- (unsigned long long)searchOptions;
- (id)searchString;
- (long long)selectAllInSelectionOnly:(BOOL)arg1;
- (void)setAsynchronousDocumentCurrentMatch:(id)arg1;
- (void)setCurrentAsynchronousDocumentProgress:(id)arg1;
- (void)setIncrementalAsynchronousDocumentMatches:(id)arg1;
- (void)setMatchDOMRange:(id)arg1;
- (void)setMatchWebView:(id)arg1;
- (void)setSearchOptions:(unsigned long long)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchString:(id)arg1 writeToPasteboard:(BOOL)arg2;
- (void)setSubstringMatchType:(long long)arg1;
- (void)showReplace;
- (long long)style;
- (long long)substringMatchType;
- (BOOL)supportsFullWord;
- (BOOL)supportsPatterns;
- (void)takeSearchString:(id)arg1;

@end