/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarLayoutItem : NSObject <_NSTouchBarItemLayoutWrapper> {
    BOOL  _isSpace;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    float  _visibilityPriority;
}

@property (atomic, readonly) struct CGSize { double x1; double x2; } contentClippingSize;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) BOOL isSpace;
@property (atomic, readonly) double itemPadding;
@property (atomic, readonly) unsigned long long itemPosition;
@property (atomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (atomic, readonly) struct CGSize { double x1; double x2; } minSize;
@property (atomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (atomic, readonly) double preferredZOrder;
@property (atomic, readonly) long long priorityIndex;
@property (atomic, readonly) Class superclass;

- (id)init;
- (id)initWithTouchBarItem:(id)arg1;
- (BOOL)isSpace;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (float)visibilityPriority;

@end