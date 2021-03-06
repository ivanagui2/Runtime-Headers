/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCGSWindowSurface : NSObject

@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (atomic, readonly) unsigned int surfaceID;
@property (atomic, readonly, retain) NSCGSWindow *window;

// NSCGSWindowSurface (NSCGSWindowSurfaceOrdering)

- (void)orderAboveSurface:(id)arg1;
- (void)orderAboveWindow;
- (void)orderBelowSurface:(id)arg1;
- (void)orderBelowWindow;
- (void)orderIn;
- (void)orderOut;

// NSCGSWindowSurface (NSSurface)

+ (void)synchronize;

@end
