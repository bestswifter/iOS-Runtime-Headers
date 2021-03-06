/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject> {
    int _defaultsLoaded;
    <HDHealthDaemon> *_healthDaemon;
    NSString *_localBuildNumber;
    NSString *_localDeviceModel;
    NSString *_localSourceVersion;
    HDDatabaseValueCache *_originProvenanceByPersistentID;
    HDDatabaseValueCache *_persistentIDsByProvenanceKey;
    NSLock *_propertyLock;
    NSNumber *_propertyLock_deviceNoneID;
    NSNumber *_propertyLock_localDeviceID;
    NSNumber *_propertyLock_localSourceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *deviceNoneID;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *localBuildNumber;
@property (nonatomic, readonly) NSNumber *localDeviceID;
@property (nonatomic, copy) NSString *localDeviceModel;
@property (nonatomic, readonly) NSNumber *localSourceID;
@property (nonatomic, retain) HDDatabaseValueCache *originProvenanceByPersistentID;
@property (nonatomic, retain) HDDatabaseValueCache *persistentIDsByProvenanceKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadDefaults;
- (id)_lookupOrInsertProvenance:(id)arg1 withError:(id*)arg2;
- (void)checkDefaultsLoaded;
- (id)dataProvenanceDefaultsWithSyncProvenance:(long long)arg1 deviceModel:(id)arg2 buildNumber:(id)arg3 sourceID:(id)arg4 deviceID:(id)arg5 sourceVersion:(id)arg6;
- (id)defaultLocalDataProvenance;
- (id)description;
- (id)deviceNoneID;
- (id)diagnosticDescription;
- (id)initWithHealthDaemon:(id)arg1;
- (id)localBuildNumber;
- (id)localDataProvenanceForSourceEntity:(id)arg1 version:(id)arg2 deviceEntity:(id)arg3;
- (id)localDeviceID;
- (id)localDeviceModel;
- (id)localSourceID;
- (id)originProvenanceByPersistentID;
- (id)originProvenanceForPersistentID:(long long)arg1 inDatabase:(id)arg2;
- (id)persistentIDsByProvenanceKey;
- (id)provenanceEntityForProvenance:(id)arg1 withError:(id*)arg2;
- (void)setDeviceNoneID:(id)arg1;
- (void)setLocalBuildNumber:(id)arg1;
- (void)setLocalDeviceID:(id)arg1;
- (void)setLocalDeviceModel:(id)arg1;
- (void)setLocalSourceID:(id)arg1;
- (void)setOriginProvenanceByPersistentID:(id)arg1;
- (void)setPersistentIDsByProvenanceKey:(id)arg1;

@end
