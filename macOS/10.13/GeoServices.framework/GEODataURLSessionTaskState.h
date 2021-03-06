/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEODataURLSessionTaskState : GEOCapturedState {
    GEONSURLSessionTaskState * _backingTask;
    BOOL  _backingTaskNeedsResume;
    unsigned int  _cachedDataLength;
    double  _endTime;
    double  _now;
    long long  _rawPointer;
    unsigned int  _receivedDataLength;
    int  _requestKind;
    double  _startTime;
    unsigned int  _taskIdentifier;
}

+ (const char *)decoderType;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
