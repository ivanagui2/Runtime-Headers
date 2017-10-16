/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
 */

@interface DDScannerResult : NSObject <NSCoding, NSSecureCoding> {
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; } * _coreResult;
    NSArray * _subResultsCache;
}

@property (atomic, readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)resultFromCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
+ (id)resultsFromCoreResults:(struct __CFArray { }*)arg1;
+ (id)scannerResultFromXML:(id)arg1;
+ (id)scannerResultFromXML:(id)arg1 stringToScan:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)verboseXMLDescriptionFromElements:(id)arg1 stringToScan:(id)arg2;

- (id)XMLDescription;
- (void)_addText:(id)arg1 currentPos:(struct __DDQueryOffset { unsigned int x1 : 32; unsigned int x2 : 32; })arg2 newPos:(struct __DDQueryOffset { unsigned int x1 : 32; unsigned int x2 : 32; })arg3 offset:(struct __DDQueryOffset { unsigned int x1 : 32; unsigned int x2 : 32; })arg4 query:(struct __DDScanQuery { }*)arg5;
- (struct { long long x1; long long x2; })cfRange;
- (id)contextualData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)coreResult;
- (id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id*)arg3 allDayRef:(BOOL*)arg4;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (id)element;
- (id)elementWithQuery:(struct __DDScanQuery { }*)arg1 include:(int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)extractStartDate:(id*)arg1 startTimezone:(id*)arg2 endDate:(id*)arg3 endTimezone:(id*)arg4 allDayRef:(BOOL*)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7;
- (double)getDuration;
- (BOOL)getIMScreenNameValue:(id*)arg1 type:(id*)arg2;
- (BOOL)getMailValue:(id*)arg1 label:(id*)arg2;
- (BOOL)getPhoneValue:(id*)arg1 label:(id*)arg2;
- (BOOL)getStreet:(id*)arg1 city:(id*)arg2 state:(id*)arg3 zip:(id*)arg4 country:(id*)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)location;
- (id)matchedString;
- (void)offsetRangeBy:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)rawValue;
- (long long)score;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSubResults:(id)arg1;
- (void)setType:(id)arg1;
- (id)subResults;
- (id)type;
- (id)value;
- (id)valueForUndefinedKey:(id)arg1;
- (id)verboseElement;

@end