/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (atomic, readonly) double timeIntervalSinceReferenceDate;

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)date;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (id)distantFuture;
+ (id)distantPast;
+ (BOOL)supportsSecureCoding;
+ (double)timeIntervalSinceReferenceDate;

- (unsigned long long)_cfTypeID;
- (id)addTimeInterval:(double)arg1;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)earlierDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (BOOL)isEqualToDate:(id)arg1;
- (BOOL)isInSameDayAsDate:(id)arg1;
- (BOOL)isInToday;
- (BOOL)isInTomorrow;
- (BOOL)isInYesterday;
- (BOOL)isNSDate__;
- (id)laterDate:(id)arg1;
- (double)timeIntervalSince1970;
- (double)timeIntervalSinceDate:(id)arg1;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceReferenceDate;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSDate (NSCalendarDateStuff)

- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;

// NSDate (NSDate)

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// NSDate (NSDatePortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

// NSDate (NSNaturalLanguageDate)

+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;

// NSDate (NSScriptAppleEventConversion)

+ (id)_scriptingDateWithDescriptor:(id)arg1;

- (id)_scriptingDateDescriptor;

// NSDate (NSURLExtras)

- (id)_web_RFC1123DateString;
- (long long)_web_compareDay:(id)arg1;
- (BOOL)_web_isToday;

@end
