/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
 */

@interface BU_TMTimeline : CALayer {
    bool  fEnabled;
    NSString * fHelpString;
    long long  fMax;
    long long  fMin;
    NSView * fParent;
    double  fRedrawDuration;
    BUStarfieldTimelineLayer * fSuperLayer;
    struct TTimelineControl { int (**x1)(); bool x2; bool x3; id x4; double x5; double x6; double x7; double x8; double x9; struct TEase { double x_10_1_1; double x_10_1_2; } x10; double x11; struct TTimeMachineTargetList { struct TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > {} *x_12_1_1; struct TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > {} *x_12_1_2; struct __compressed_pair<TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > *, std::__1::allocator<TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > > > { struct TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > {} *x_3_2_1; } x_12_1_3; } x12; struct TRef<__CFDictionary *, TRetainReleasePolicy<CFMutableDictionaryRef> > { struct __CFDictionary {} *x_13_1_1; } x13; int x14; int x15; struct TTimelineItem {} *x16; struct TTimelineItem {} *x17; struct vector<TTimelineItem *, std::__1::allocator<TTimelineItem *> > { struct TTimelineItem {} **x_18_1_1; struct TTimelineItem {} **x_18_1_2; struct __compressed_pair<TTimelineItem **, std::__1::allocator<TTimelineItem *> > { struct TTimelineItem {} **x_3_2_1; } x_18_1_3; } x18; } * fTimeline;
    struct TString { 
        struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > { 
            struct __CFString {} *fRef; 
        } fString; 
    }  fTitle;
    long long  fValue;
}

+ (id)controlWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
+ (id)timelineControlWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inSuperLayer:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)helpString;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isEnabled;
- (long long)max;
- (long long)min;
- (bool)mouseDownAtPoint:(struct CGPoint { double x1; double x2; })arg1 withModifiers:(unsigned int)arg2;
- (bool)mouseDraggedToPoint:(struct CGPoint { double x1; double x2; })arg1 withModifiers:(unsigned int)arg2;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMovedToPoint:(struct CGPoint { double x1; double x2; })arg1 withModifiers:(unsigned int)arg2;
- (bool)mouseUpAtPoint:(struct CGPoint { double x1; double x2; })arg1 withModifiers:(unsigned int)arg2;
- (id)parent;
- (bool)pixelAccurateHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (void)scrollByX:(double)arg1 byY:(double)arg2 withModifiers:(unsigned int)arg3;
- (void)setEnabled:(BOOL)arg1;
- (void)setHelpString:(id)arg1;
- (void)setMax:(long long)arg1;
- (void)setMin:(long long)arg1;
- (void)setParent:(id)arg1;
- (void)setRedrawDuration:(double)arg1;
- (void)setSuperLayer:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(long long)arg1;
- (id)superLayer;
- (struct TTimelineControl { int (**x1)(); bool x2; bool x3; id x4; double x5; double x6; double x7; double x8; double x9; struct TEase { double x_10_1_1; double x_10_1_2; } x10; double x11; struct TTimeMachineTargetList { struct TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > {} *x_12_1_1; struct TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > {} *x_12_1_2; struct __compressed_pair<TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > *, std::__1::allocator<TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > > > { struct TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > {} *x_3_2_1; } x_12_1_3; } x12; struct TRef<__CFDictionary *, TRetainReleasePolicy<CFMutableDictionaryRef> > { struct __CFDictionary {} *x_13_1_1; } x13; int x14; int x15; struct TTimelineItem {} *x16; struct TTimelineItem {} *x17; struct vector<TTimelineItem *, std::__1::allocator<TTimelineItem *> > { struct TTimelineItem {} **x_18_1_1; struct TTimelineItem {} **x_18_1_2; struct __compressed_pair<TTimelineItem **, std::__1::allocator<TTimelineItem *> > { struct TTimelineItem {} **x_3_2_1; } x_18_1_3; } x18; }*)timeline;
- (id)title;
- (long long)value;
- (void)valueDidChange:(long long)arg1;
- (bool)valueWillChange:(long long)arg1;

@end
