/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_group;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class CFPrefsDaemon, CFPDDataBuffer, NSObject;

@interface CFPDSource : NSObject {

	CFPrefsDaemon* _cfprefsd;
	CFPDDataBuffer* _plist;
	NSObject*<OS_xpc_object> _pendingChangesQueue;
	unsigned long long _pendingChangesSize;
	CFStringRef _userName;
	CFStringRef _domain;
	const char* _actualPath;
	const char* _pathToTemporaryFileToWriteTo;
	NSObject*<OS_dispatch_group> _inProgressWriteGroup;
	CFSetRef _observingConnections;
	os_unfair_lock_s _lock;
	unsigned _lastEuid;
	unsigned _lastEgid;
	short _generationShmemIndex;
	BOOL _handlingRequest;
	BOOL _dirty;
	BOOL _byHost;
	BOOL _managed;
	BOOL _neverCache;
	BOOL _checkedForNonPrefsPlist;
	BOOL _hasDrainedPendingChangesSinceLastReplyToOwner;
	BOOL _restrictedReadability;
	BOOL _waitingForDeviceUnlock;
	BOOL _watchingParentDirectory;
	BOOL _disableBackup;
	BOOL _hasPreviouslyBeenUnableToDetermineSandboxAccess;

}
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 byHost:(BOOL)arg3 managed:(BOOL)arg4 shmemIndex:(short)arg5 daemon:(id)arg6 ;
-(void)lockedSync:(/*^block*/id)arg1 ;
-(BOOL)shouldBePurgable;
-(void)cacheActualPathCreatingIfNecessary:(BOOL)arg1 euid:(unsigned)arg2 egid:(unsigned)arg3 ;
-(BOOL)getUncanonicalizedPath:(char*)arg1 ;
-(void)handleDeviceUnlock;
-(void)transitionToMultiOwner;
-(void)syncWriteToDiskAndFlushCache;
-(void)updateShmemEntry;
-(BOOL)hasEverHadMultipleOwners;
-(CFStringRef)debugDump;
-(void)drainPendingChanges;
-(void)_writeToDisk:(BOOL)arg1 ;
-(void)markNeedsToReloadFromDiskDueToFailedWrite;
-(void)handleOpenForWritingFailureWithErrno:(int)arg1 ;
-(void)syncWriteToDisk;
-(void)lockedAsync:(/*^block*/id)arg1 ;
-(void)cacheActualPath;
-(id)copyPropertyListWithoutDrainingPendingChanges;
-(CFStringRef)cloudConfigurationPath;
-(id)copyPropertyList;
-(void)asyncNotifyObserversOfChanges;
-(BOOL)validateAccessToken:(int)arg1 accessType:(int)arg2 ;
-(BOOL)validateSandboxForWrite:(id)arg1 containerPath:(const char*)arg2 ;
-(int)validateSandboxForRead:(id)arg1 containerPath:(const char*)arg2 ;
-(int)validatePOSIXPermissionsForMessage:(id)arg1 accessType:(int)arg2 fullyValidated:(BOOL*)arg3 ;
-(int)validateSandboxPermissionsForMessage:(id)arg1 containerPath:(const char*)arg2 accessType:(int)arg3 ;
-(id)copyCachedObservationConnectionForMessage:(id)arg1 ;
-(void)stopNotifyingObserver:(long long)arg1 ;
-(void)asyncWriteToDisk;
-(void)handleAvoidCache;
-(void)handleEUIDorEGIDMismatch;
-(void)cacheActualAndTemporaryPathsWithEUID:(unsigned)arg1 egid:(unsigned)arg2 ;
-(int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 currentPlistData:(id)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(void)addOwner:(id)arg1 ;
-(BOOL)enqueueNewKey:(id)arg1 value:(id)arg2 size:(unsigned long long)arg3 encoding:(int)arg4 ;
-(void)handleRootWrite;
-(void)handleSynchronous;
-(void)handleNoPlistFound;
-(void)setObserved:(BOOL)arg1 bySenderOfMessage:(id)arg2 ;
-(void)handleNeverCache;
-(void)beginHandlingRequest;
-(void)endHandlingRequest;
-(CFStringRef)copyUncanonicalizedPath;
-(BOOL)managed;
-(void)respondToFileWrittenToBehindOurBack;
-(void)removeOwner;
-(BOOL)byHost;
-(short)shmemIndex;
-(BOOL)hasObservers;
-(void)attachSizeWarningsToReply:(id)arg1 forByteCount:(unsigned long long)arg2 ;
-(id)acceptMessage:(id)arg1 ;
-(void)setPlist:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CFStringRef)domain;
-(CFStringRef)container;
-(int)owner;
-(void)setDirty:(BOOL)arg1 ;
-(void)clearCache;
-(CFStringRef)user;
@end

