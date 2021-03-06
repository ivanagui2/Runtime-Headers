/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
 */

@interface MDLObjectContainer : NSObject <MDLObjectContainerComponent> {
    NSMutableArray * _objects;
}

@property (atomic, readonly) unsigned long long count;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSArray *objects;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objects;
- (void)removeObject:(id)arg1;

@end
