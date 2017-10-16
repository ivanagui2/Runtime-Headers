/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalStoreRemoteManagedTask : CalStoreRemoteManagedCalendarItem {
    NSDate * _completedDate;
    NSDate * _dueDate;
    int  _priority;
}

@property (nonatomic, readwrite, retain) NSDate *completedDate;
@property (nonatomic, readwrite, retain) NSDate *dueDate;
@property (nonatomic, readwrite) int priority;

+ (id)fetchObjectsWithPredicate:(id)arg1 inCalendars:(id)arg2;
+ (id)fetchObjectsWithSharedUID:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completedDate;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)priority;
- (BOOL)removeWithError:(id*)arg1;
- (id)saveWithError:(id*)arg1;
- (void)setCompletedDate:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setPriority:(int)arg1;

@end