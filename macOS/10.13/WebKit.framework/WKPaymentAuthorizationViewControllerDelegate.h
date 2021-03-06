/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKPaymentAuthorizationViewControllerDelegate : NSObject <PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate> {
    BOOL  _didReachFinalState;
    struct BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)>="m_block"@? {}  _didSelectPaymentMethodCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingContactUpdate *)>="m_block"@? {}  _didSelectShippingContactCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)>="m_block"@? {}  _didSelectShippingMethodCompletion;
    struct BlockPtr<void (PKPaymentAuthorizationResult *)>="m_block"@? {}  _paymentAuthorizedCompletion;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _paymentSummaryItems;
    struct BlockPtr<void (PKPaymentMerchantSession *, NSError *)>="m_block"@? {}  _sessionBlock;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _shippingMethods;
    struct WebPaymentCoordinatorProxy { int (**x1)(); struct WebPageProxy {} *x2; struct WeakPtrFactory<WebKit::WebPaymentCoordinatorProxy> { struct Ref<WTF::WeakReference<WebKit::WebPaymentCoordinatorProxy> > { struct WeakReference<WebKit::WebPaymentCoordinatorProxy> {} *x_1_2_1; } x_3_1_1; } x3; int x4; int x5; struct RetainPtr<PKPaymentAuthorizationViewController> { void *x_6_1_1; } x6; struct RetainPtr<WKPaymentAuthorizationViewControllerDelegate> { void *x_7_1_1; } x7; unsigned long long x8; struct RetainPtr<NSWindow> { void *x_9_1_1; } x9; struct RetainPtr<NSObject *> { void *x_10_1_1; } x10; } * _webPaymentCoordinatorProxy;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPaymentCoordinatorProxy:(struct WebPaymentCoordinatorProxy { int (**x1)(); struct WebPageProxy {} *x2; struct WeakPtrFactory<WebKit::WebPaymentCoordinatorProxy> { struct Ref<WTF::WeakReference<WebKit::WebPaymentCoordinatorProxy> > { struct WeakReference<WebKit::WebPaymentCoordinatorProxy> {} *x_1_2_1; } x_3_1_1; } x3; int x4; int x5; struct RetainPtr<PKPaymentAuthorizationViewController> { void *x_6_1_1; } x6; struct RetainPtr<WKPaymentAuthorizationViewControllerDelegate> { void *x_7_1_1; } x7; unsigned long long x8; struct RetainPtr<NSWindow> { void *x_9_1_1; } x9; struct RetainPtr<NSObject *> { void *x_10_1_1; } x10; }*)arg1;
- (void)invalidate;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didRequestMerchantSession:(id)arg2;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(id)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(id)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(id)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;

@end
