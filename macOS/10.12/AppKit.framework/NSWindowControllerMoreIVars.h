/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSWindowControllerMoreIVars : NSObject {
    NSViewController * _contentViewController;
    NSDictionary * _externalObjectEntryTableForWindowLoading;
    NSWindowController * _retainedSelf;
    NSDictionary * _segueDestinationOptions;
    NSArray * _segueTemplates;
    NSStoryboard * _storyboard;
    NSArray * _topLevelObjectsToKeepAliveFromStoryboard;
    NSAutounbinder * autounbinder;
    long long  cascadeNumber;
    struct CGPoint { 
        double x; 
        double y; 
    }  cascadePoint;
}

@property (atomic, readwrite, retain) NSViewController *contentViewController;
@property (atomic, readwrite, retain) NSDictionary *externalObjectEntryTableForWindowLoading;
@property (atomic, readwrite, retain) NSDictionary *segueDestinationOptions;
@property (atomic, readwrite, retain) NSArray *segueTemplates;
@property (atomic, readwrite, retain) NSStoryboard *storyboard;
@property (atomic, readwrite, retain) NSArray *topLevelObjectsToKeepAliveFromStoryboard;

- (id)contentViewController;
- (void)dealloc;
- (id)externalObjectEntryTableForWindowLoading;
- (id)segueDestinationOptions;
- (id)segueTemplates;
- (void)setContentViewController:(id)arg1;
- (void)setExternalObjectEntryTableForWindowLoading:(id)arg1;
- (void)setSegueDestinationOptions:(id)arg1;
- (void)setSegueTemplates:(id)arg1;
- (void)setStoryboard:(id)arg1;
- (void)setTopLevelObjectsToKeepAliveFromStoryboard:(id)arg1;
- (id)storyboard;
- (id)topLevelObjectsToKeepAliveFromStoryboard;

@end
