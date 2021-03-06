/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
 */

@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); int (**x2)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF> {} *x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; struct MediaPlayer {} *x4; struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_5_1_1; } x5; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x6; } * m_callback;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); int (**x2)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF> {} *x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; struct MediaPlayer {} *x4; struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_5_1_1; } x5; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x6; }*)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
- (void)setCallback:(struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); int (**x2)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF> {} *x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; struct MediaPlayer {} *x4; struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_5_1_1; } x5; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x6; }*)arg1;

@end
