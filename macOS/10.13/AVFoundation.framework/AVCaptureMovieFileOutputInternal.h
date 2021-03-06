/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureMovieFileOutputInternal : NSObject {
    unsigned int  activeConnectionCount;
    NSMutableArray * activeConnections;
    struct __CFDictionary { } * compressorRenderCallbackContextTokens;
    struct __CFDictionary { } * compressorUnits;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  connectionsLock;
    struct __CFDictionary { } * decompressorUnits;
    struct __CFDictionary { } * fileControlCallbackContextTokens;
    BOOL  fileControlCallbackRanSinceLastCheck;
    BOOL  fileControlCallbackTimedOut;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  fileControlCallbackTimeoutLock;
    NSTimer * fileControlCallbackTimeoutTimer;
    MediaIOGraphNodeDescription * fileWriterOutputUnit;
    NSArray * metadata;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  metadataLock;
    struct __CFDictionary { } * mixerUnits;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  movieFragmentInterval;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  movieFragmentIntervalLock;
    NSArray * noDataConnections;
    AVCaptureOperationDescriptorQueue * operationDescriptorQueue;
    NSLock * operationDescriptorQueueLock;
    NSURL * outputFileURL;
    BOOL  recordingPaused;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  recordingStateLock;
    AVCaptureFileOutputRecordingOperationDescriptor * runningRecordingOperationDescriptor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  runningRecordingOperationDescriptorLock;
    long long  sizeWritten;
    struct __CFDictionary { } * splitterUnits;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  statsLock;
    NSError * stopError;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  stopErrorLock;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  syncTime;
    void * syncTimeConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  syncTimeLock;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  timeWritten;
    struct __CFDictionary { } * videoFrameRateGovernorUnits;
    BOOL  wasForcedToPause;
}

@end
