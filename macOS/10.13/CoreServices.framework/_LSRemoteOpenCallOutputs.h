/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSRemoteOpenCallOutputs : NSObject <NSSecureCoding> {
    NSURL * outAppURL;
    BOOL  outAppWasLaunched;
    struct vector<ProcessSerialNumber, std::__1::allocator<ProcessSerialNumber> > { 
        struct ProcessSerialNumber {} *__begin_; 
        struct ProcessSerialNumber {} *__end_; 
        struct __compressed_pair<ProcessSerialNumber *, std::__1::allocator<ProcessSerialNumber> > { 
            struct ProcessSerialNumber {} *__first_; 
        } __end_cap_; 
    }  outPSNs;
}

+ (BOOL)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end