/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightReceiver.framework/SpotlightReceiver
 */

@interface SpotlightReceiverDelegate : NSObject <NSXPCListenerDelegate, SpotlightReceiverJob> {
    NSMutableSet *_connections;
    NSObject<SpotlightReceiver> *_receiver;
}

@property (nonatomic, retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSObject<SpotlightReceiver> *receiver;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)startListening:(id)arg1 withReceiver:(id)arg2;

- (void).cxx_destruct;
- (id)connections;
- (void)deleteFromBundle:(id)arg1 sinceData:(id)arg2 domains:(id)arg3 deletes:(id)arg4 completion:(id /* block */)arg5;
- (void)indexFromBundle:(id)arg1 items:(id)arg2 itemsContent:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithReceiver:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)purgeFromBundle:(id)arg1 identifiers:(id)arg2 completion:(id /* block */)arg3;
- (id)receiver;
- (void)setConnections:(id)arg1;
- (void)supportedBundleIDs:(id /* block */)arg1;
- (void)supportedTypes:(id /* block */)arg1;
- (void)userActions:(id)arg1 completion:(id /* block */)arg2;
- (id)xpcInterface;

@end