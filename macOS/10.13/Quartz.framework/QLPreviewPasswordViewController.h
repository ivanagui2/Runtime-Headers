/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLPreviewPasswordViewController : NSViewController <QLDisplayable> {
    QLPreviewDocument * _document;
    BOOL  _hasEnteredWrongPassword;
    BOOL  _isHidden;
    NSTextField * descriptionField;
    NSTextField * passwordField;
    NSButton * validateButton;
}

@property (atomic, readonly) id accessibilityFocusedUIElement;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } borderFrame;
@property (atomic, readwrite) unsigned long long currentPage;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) QLPreviewDocument *document;
@property (atomic, readwrite) BOOL hasEnteredWrongPassword;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) int inputFocusType;
@property (atomic, readwrite) BOOL isHidden;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } quickLookFrame;
@property (atomic, readonly) CALayer *quickLookLayer;
@property (atomic, readonly) NSView *quickLookView;
@property (atomic, readonly) NSViewController *quickLookViewController;
@property (atomic, readonly) NSResponder *responder;
@property (atomic, readonly) NSDictionary *sizingConstraints;
@property (atomic, readonly) Class superclass;

- (void)didShow;
- (id)document;
- (void)giveInputFocus;
- (BOOL)hasEnteredWrongPassword;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (int)inputFocusType;
- (BOOL)isHidden;
- (void)loadView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })quickLookFrame;
- (id)quickLookLayer;
- (id)quickLookView;
- (id)quickLookViewController;
- (void)setDocument:(id)arg1;
- (void)setHasEnteredWrongPassword:(BOOL)arg1;
- (void)setIsHidden:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setQuickLookFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sizingConstraints;
- (void)validatePassword:(id)arg1;
- (void)willHide;

@end
