/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase {
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  m_attributeNames;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParameterizedAttributeNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityShouldUseUniqueId;
- (struct CGPoint { double x1; double x2; })convertScreenPointToRootView:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;

@end