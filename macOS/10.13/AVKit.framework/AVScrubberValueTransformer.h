/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVScrubberValueTransformer : NSValueTransformer {
    <AVScrubberValueTransformerDelegate> * _delegate;
    struct { 
        BOOL scrubberValueTransformerRequiresTransformation; 
        BOOL scrubberValueTransformer_transformedTimeInterval; 
        BOOL scrubberValueTransformer_reverseTransformedTimeInterval; 
    }  _delegateRespondsTo;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end