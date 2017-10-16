/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSCoreDataXPCMessage : NSObject <NSSecureCoding> {
    NSString * _contextName;
    NSString * _contextTransactionAuthor;
    NSData * _messageBody;
    unsigned long long  _messageCode;
    NSString * _processName;
    NSString * _token;
}

@property (atomic, readwrite, retain) NSString *contextName;
@property (atomic, readwrite, retain) NSString *contextTransactionAuthor;
@property (atomic, readwrite, retain) NSData *messageBody;
@property (atomic, readwrite) unsigned long long messageCode;
@property (atomic, readwrite, retain) NSString *processName;
@property (atomic, readwrite, retain) NSString *token;

+ (BOOL)supportsSecureCoding;

- (id)contextName;
- (id)contextTransactionAuthor;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageBody;
- (unsigned long long)messageCode;
- (id)processName;
- (void)setContextName:(id)arg1;
- (void)setContextTransactionAuthor:(id)arg1;
- (void)setMessageBody:(id)arg1;
- (void)setMessageCode:(unsigned long long)arg1;
- (void)setProcessName:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end