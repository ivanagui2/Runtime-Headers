/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface DOMHTMLFrameElement : DOMHTMLElement

@property (atomic, readonly) DOMDocument *contentDocument;
@property (nonatomic, readonly) WebFrame *contentFrame;
@property (atomic, readonly) DOMAbstractView *contentWindow;
@property (atomic, readwrite, copy) NSString *frameBorder;
@property (atomic, readonly) int height;
@property (atomic, readwrite, copy) NSString *location;
@property (atomic, readwrite, copy) NSString *longDesc;
@property (atomic, readwrite, copy) NSString *marginHeight;
@property (atomic, readwrite, copy) NSString *marginWidth;
@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readwrite) BOOL noResize;
@property (atomic, readwrite, copy) NSString *scrolling;
@property (atomic, readwrite, copy) NSString *src;
@property (atomic, readonly) int width;

- (id)contentDocument;
- (id)contentWindow;
- (id)frameBorder;
- (int)height;
- (id)location;
- (id)longDesc;
- (id)marginHeight;
- (id)marginWidth;
- (id)name;
- (BOOL)noResize;
- (id)scrolling;
- (void)setFrameBorder:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLongDesc:(id)arg1;
- (void)setMarginHeight:(id)arg1;
- (void)setMarginWidth:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNoResize:(BOOL)arg1;
- (void)setScrolling:(id)arg1;
- (void)setSrc:(id)arg1;
- (id)src;
- (int)width;

// DOMHTMLFrameElement (WebDOMHTMLFrameElementOperations)

- (id)contentFrame;

@end