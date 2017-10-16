/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface _CNSpatialBufferingStrategy : NSObject <_CNBufferingStrategy> {
    unsigned long long  _capacity;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;
- (void)bufferDidSendResults:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;

@end