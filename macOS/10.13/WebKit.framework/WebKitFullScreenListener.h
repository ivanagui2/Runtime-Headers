/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebKitFullScreenListener : NSObject <WebKitFullScreenListener> {
    struct RefPtr<WebCore::Element> { 
        struct Element {} *m_ptr; 
    }  _element;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithElement:(struct Element { int (**x1)(); struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl> { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData> { struct ElementData {} *x_13_1_1; } x13; }*)arg1;
- (void)webkitDidEnterFullScreen;
- (void)webkitDidExitFullScreen;
- (void)webkitWillEnterFullScreen;
- (void)webkitWillExitFullScreen;

@end