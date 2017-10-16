/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSScrollingRubberbandFilter : NSObject {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _affineTransformOfContent;
    struct CGSize { 
        double width; 
        double height; 
    }  _clippingSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _constrainedClippingOrigin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _documentFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _filteredDelta;
    struct CGPoint { 
        double x; 
        double y; 
    }  _filteredVelocity;
    struct _flags1 { 
        unsigned int flipped : 1; 
        unsigned int allowsHorizontalRubberbanding : 1; 
        unsigned int allowsVerticalRubberbanding : 1; 
        unsigned int reserved : 29; 
    }  _flags1;
    struct _flags2 { 
        unsigned int stretched : 1; 
        unsigned int reserved : 31; 
    }  _flags2;
    struct CGPoint { 
        double x; 
        double y; 
    }  _overflow;
    double  _pointsPerPixel;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollPosition;
    double  _stiffness;
    NSRecursiveLock * _synchLock;
}

@property (nonatomic, readwrite) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } affineTransformOfContent;
@property (nonatomic, readwrite) BOOL allowsHorizontalRubberbanding;
@property (nonatomic, readwrite) BOOL allowsVerticalRubberbanding;
@property (nonatomic, readwrite) struct CGSize { double x1; double x2; } clippingSize;
@property (nonatomic, readwrite) struct CGPoint { double x1; double x2; } constrainedClippingOrigin;
@property (nonatomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } documentFrame;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } filteredDelta;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } filteredVelocity;
@property (getter=isFlipped, nonatomic, readwrite) BOOL flipped;
@property (nonatomic, readwrite) double pointsPerPixel;
@property (nonatomic, readwrite) struct CGPoint { double x1; double x2; } scrollPosition;
@property (nonatomic, readwrite) double stiffness;
@property (getter=isStretched, nonatomic, readonly) BOOL stretched;

+ (void)initialize;

- (void)addDelta:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransformOfContent;
- (BOOL)allowsHorizontalRubberbanding;
- (BOOL)allowsVerticalRubberbanding;
- (struct CGSize { double x1; double x2; })clippingSize;
- (struct CGPoint { double x1; double x2; })constrainedClippingOrigin;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentFrame;
- (struct CGPoint { double x1; double x2; })filteredDelta;
- (struct CGPoint { double x1; double x2; })filteredVelocity;
- (id)initWithDocumentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 constrainedClippingOrigin:(struct CGPoint { double x1; double x2; })arg2 clippingSize:(struct CGSize { double x1; double x2; })arg3 isFlipped:(BOOL)arg4 pointsPerPixel:(double)arg5;
- (BOOL)isFlipped;
- (BOOL)isStretched;
- (double)pointsPerPixel;
- (struct CGPoint { double x1; double x2; })scrollPosition;
- (void)setAffineTransformOfContent:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setAllowsHorizontalRubberbanding:(BOOL)arg1;
- (void)setAllowsVerticalRubberbanding:(BOOL)arg1;
- (void)setClippingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setConstrainedClippingOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDocumentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFlipped:(BOOL)arg1;
- (void)setPointsPerPixel:(double)arg1;
- (void)setScrollPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStiffness:(double)arg1;
- (double)stiffness;
- (void)threadSafeAccess:(id)arg1;

@end