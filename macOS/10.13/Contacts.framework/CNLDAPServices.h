/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNLDAPServices : NSObject <CNLDAPServices>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)defaultServices;

- (id)copy;
- (id)ldap_connection_create_with_url:(id)arg1;
- (id)ldap_connection_query_create:(id)arg1 :(int)arg2 :(int)arg3 :(id)arg4 :(id)arg5 :(id)arg6 :(unsigned int)arg7 :(BOOL)arg8 :(id)arg9 :(id)arg10;
- (void)ldap_connection_set_disconnect_handler:(id)arg1 :(id)arg2;
- (void)ldap_connection_start:(id)arg1 :(int)arg2 :(id)arg3;
- (void)ldap_operation_cancel:(id)arg1;

@end