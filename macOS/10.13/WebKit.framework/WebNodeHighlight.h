/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebNodeHighlight : NSObject {
    id  _delegate;
    WebNodeHighlightView * _highlightView;
    NSWindow * _highlightWindow;
    struct InspectorController { int (**x1)(); struct Ref<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_2_1_1; } x2; struct unique_ptr<WebCore::WebInjectedScriptManager, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct __compressed_pair<WebCore::WebInjectedScriptManager *, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct WebInjectedScriptManager {} *x_1_2_1; } x_3_1_1; } x3; struct Ref<Inspector::FrontendRouter> { struct FrontendRouter {} *x_4_1_1; } x4; struct Ref<Inspector::BackendDispatcher> { struct BackendDispatcher {} *x_5_1_1; } x5; struct unique_ptr<WebCore::InspectorOverlay, std::__1::default_delete<WebCore::InspectorOverlay> > { struct __compressed_pair<WebCore::InspectorOverlay *, std::__1::default_delete<WebCore::InspectorOverlay> > { struct InspectorOverlay {} *x_1_2_1; } x_6_1_1; } x6; struct Ref<WTF::Stopwatch> { struct Stopwatch {} *x_7_1_1; } x7; struct PageScriptDebugServer { int (**x_8_1_1)(); struct VM {} *x_8_1_2; struct HashSet<JSC::JSGlobalObject *, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct HashTable<JSC::JSGlobalObject *, JSC::JSGlobalObject *, WTF::IdentityExtractor, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct JSGlobalObject {} **x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_3_2_1; } x_8_1_3; struct HashMap<unsigned long, JSC::DebuggerParseData, WTF::IntHash<unsigned long>, WTF::UnsignedWithZeroKeyHashTraits<unsigned long>, WTF::HashTraits<JSC::DebuggerParseData> > { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, JSC::DebuggerParseData>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, JSC::DebuggerParseData> >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, JSC::DebuggerParseData, WTF::IntHash<unsigned long>, WTF::UnsignedWithZeroKeyHashTraits<unsigned long>, WTF::HashTraits<JSC::DebuggerParseData> >::KeyValuePairTraits, WTF::UnsignedWithZeroKeyHashTraits<unsigned long> > { struct KeyValuePair<unsigned long, JSC::DebuggerParseData> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_4_2_1; } x_8_1_4; } x8; } * _inspectorController;
    NSView * _targetView;
}

- (void)attach;
- (void)dealloc;
- (id)delegate;
- (void)detach;
- (id)highlightView;
- (id)initWithTargetView:(id)arg1 inspectorController:(struct InspectorController { int (**x1)(); struct Ref<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_2_1_1; } x2; struct unique_ptr<WebCore::WebInjectedScriptManager, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct __compressed_pair<WebCore::WebInjectedScriptManager *, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct WebInjectedScriptManager {} *x_1_2_1; } x_3_1_1; } x3; struct Ref<Inspector::FrontendRouter> { struct FrontendRouter {} *x_4_1_1; } x4; struct Ref<Inspector::BackendDispatcher> { struct BackendDispatcher {} *x_5_1_1; } x5; struct unique_ptr<WebCore::InspectorOverlay, std::__1::default_delete<WebCore::InspectorOverlay> > { struct __compressed_pair<WebCore::InspectorOverlay *, std::__1::default_delete<WebCore::InspectorOverlay> > { struct InspectorOverlay {} *x_1_2_1; } x_6_1_1; } x6; struct Ref<WTF::Stopwatch> { struct Stopwatch {} *x_7_1_1; } x7; struct PageScriptDebugServer { int (**x_8_1_1)(); struct VM {} *x_8_1_2; struct HashSet<JSC::JSGlobalObject *, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct HashTable<JSC::JSGlobalObject *, JSC::JSGlobalObject *, WTF::IdentityExtractor, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct JSGlobalObject {} **x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_3_2_1; } x_8_1_3; struct HashMap<unsigned long, JSC::DebuggerParseData, WTF::IntHash<unsigned long>, WTF::UnsignedWithZeroKeyHashTraits<unsigned long>, WTF::HashTraits<JSC::DebuggerParseData> > { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, JSC::DebuggerParseData>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, JSC::DebuggerParseData> >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, JSC::DebuggerParseData, WTF::IntHash<unsigned long>, WTF::UnsignedWithZeroKeyHashTraits<unsigned long>, WTF::HashTraits<JSC::DebuggerParseData> >::KeyValuePairTraits, WTF::UnsignedWithZeroKeyHashTraits<unsigned long> > { struct KeyValuePair<unsigned long, JSC::DebuggerParseData> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_4_2_1; } x_8_1_4; } x8; }*)arg2;
- (struct InspectorController { int (**x1)(); struct Ref<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_2_1_1; } x2; struct unique_ptr<WebCore::WebInjectedScriptManager, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct __compressed_pair<WebCore::WebInjectedScriptManager *, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct WebInjectedScriptManager {} *x_1_2_1; } x_3_1_1; } x3; struct Ref<Inspector::FrontendRouter> { struct FrontendRouter {} *x_4_1_1; } x4; struct Ref<Inspector::BackendDispatcher> { struct BackendDispatcher {} *x_5_1_1; } x5; struct unique_ptr<WebCore::InspectorOverlay, std::__1::default_delete<WebCore::InspectorOverlay> > { struct __compressed_pair<WebCore::InspectorOverlay *, std::__1::default_delete<WebCore::InspectorOverlay> > { struct InspectorOverlay {} *x_1_2_1; } x_6_1_1; } x6; struct Ref<WTF::Stopwatch> { struct Stopwatch {} *x_7_1_1; } x7; struct PageScriptDebugServer { int (**x_8_1_1)(); struct VM {} *x_8_1_2; struct HashSet<JSC::JSGlobalObject *, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct HashTable<JSC::JSGlobalObject *, JSC::JSGlobalObject *, WTF::IdentityExtractor, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct JSGlobalObject {} **x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_3_2_1; } x_8_1_3; struct HashMap<unsigned long, JSC::DebuggerParseData, WTF::IntHash<unsigned long>, WTF::UnsignedWithZeroKeyHashTraits<unsigned long>, WTF::HashTraits<JSC::DebuggerParseData> > { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, JSC::DebuggerParseData>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, JSC::DebuggerParseData> >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, JSC::DebuggerParseData, WTF::IntHash<unsigned long>, WTF::UnsignedWithZeroKeyHashTraits<unsigned long>, WTF::HashTraits<JSC::DebuggerParseData> >::KeyValuePairTraits, WTF::UnsignedWithZeroKeyHashTraits<unsigned long> > { struct KeyValuePair<unsigned long, JSC::DebuggerParseData> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_4_2_1; } x_8_1_4; } x8; }*)inspectorController;
- (void)setDelegate:(id)arg1;
- (void)setNeedsUpdateInTargetViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)targetView;

// WebNodeHighlight (FileInternal)

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeHighlightWindowFrame;
- (void)_repositionHighlightWindow;

@end