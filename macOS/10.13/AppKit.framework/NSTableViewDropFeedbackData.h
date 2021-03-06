/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTableViewDropFeedbackData : NSObject {
    NSIndexSet * _draggedRowIndexes;
    BOOL  _draggingAccepted;
    NSMutableArray * _dropFeedbackViews;
    BOOL  _isExternalDrag;
    BOOL  _isTemporaryDrag;
    long long  _startRow;
}

@property (atomic, readwrite, retain) NSIndexSet *draggedRowIndexes;
@property (atomic, readwrite) BOOL draggingAccepted;
@property (atomic, readwrite, retain) NSMutableArray *dropFeedbackViews;
@property (atomic, readwrite) BOOL isExternalDrag;
@property (atomic, readwrite) BOOL isTemporaryDrag;
@property (atomic, readwrite) long long startRow;

- (void)dealloc;
- (id)draggedRowIndexes;
- (BOOL)draggingAccepted;
- (id)dropFeedbackViews;
- (id)init;
- (BOOL)isExternalDrag;
- (BOOL)isTemporaryDrag;
- (void)setDraggedRowIndexes:(id)arg1;
- (void)setDraggingAccepted:(BOOL)arg1;
- (void)setDropFeedbackViews:(id)arg1;
- (void)setIsExternalDrag:(BOOL)arg1;
- (void)setIsTemporaryDrag:(BOOL)arg1;
- (void)setStartRow:(long long)arg1;
- (long long)startRow;

@end
