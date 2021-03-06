/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATMessageParser : NSObject {
    unsigned int _curObjectLength;
    Class _messageClass;
    void *_objectDataBuffer;
    unsigned int _objectDataLen;
    id /* block */ _objectParsedBlock;
    NSMutableData *_parserData;
    NSError *_parserError;
    BOOL _varIntBuf;
    unsigned int _varIntDataLen;
}

@property (nonatomic, readonly) Class messageClass;
@property (nonatomic, copy) id /* block */ objectParsedBlock;
@property (nonatomic, readonly) NSError *parserError;

- (void).cxx_destruct;
- (BOOL)_parseObjectFromData:(id)arg1;
- (BOOL)_parseObjectLength:(const char *)arg1 length:(unsigned int)arg2 bytesConsumed:(unsigned int*)arg3;
- (void)dealloc;
- (id)initWithMessageClass:(Class)arg1;
- (Class)messageClass;
- (id /* block */)objectParsedBlock;
- (id)parserError;
- (BOOL)processData:(const char *)arg1 length:(long)arg2;
- (void)setObjectParsedBlock:(id /* block */)arg1;

@end
