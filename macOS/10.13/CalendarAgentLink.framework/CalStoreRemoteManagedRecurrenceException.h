/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalStoreRemoteManagedRecurrenceException : CalStoreRemoteManagedObject {
    NSDate * _date;
}

@property (nonatomic, readwrite, retain) NSDate *date;
@property (nonatomic, readonly) CalStoreRemoteManagedEvent *masterEvent;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)masterEvent;
- (void)setDate:(id)arg1;

@end
