/* Generated by RuntimeBrowser
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_browser : NSObject <OS_nw_browser> {
    NSObject<OS_nw_path_evaluator> * browse_evaluator;
    id  cancel_handler;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_path> * current_browse_path;
    NSObject<OS_nw_browse_descriptor> * descriptor;
    int  dns_error;
    struct _DNSServiceRef_t { } * dns_service;
    struct _DNSServiceRef_t { } * dns_service_secondary_pointer;
    NSObject<OS_nw_array> * endpoint_array;
    void * internally_retained_object;
    unsigned int  is_custom_browser;
    unsigned int  is_nexus_only_browser;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_array> * path_endpoint_array;
    id  update_handler;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1 parameters:(id)arg2;

@end
