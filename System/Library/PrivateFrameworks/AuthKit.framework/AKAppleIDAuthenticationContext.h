/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationLimitedUIProvider.h>
#import <libobjc.A.dylib/CDPAuthProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CDPStateUIProvider, OS_dispatch_queue, AKAnisetteServiceProtocol;
@class NSString, NSNumber, NSObject, CDPRecoveryController, AKDevice, NSDictionary, NSUUID, NSArray, NSSet, AKAnisetteData;

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, CDPAuthProvider, NSSecureCoding> {

	id<CDPStateUIProvider> _cdpUiProvider;
	NSString* _generatedCode;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSString* _deviceClass;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	CFUserNotificationRef _activeSecondFactoryEntryPrompt;
	/*^block*/id _secondFactoryEntryCompletion;
	NSObject*<OS_dispatch_queue> _secondFactorQueue;
	CDPRecoveryController* _recoveryController;
	AKDevice* _proxiedDevice;
	AKDevice* _companionDevice;
	NSDictionary* _recoveryInfo;
	BOOL _isProxyingForApp;
	BOOL _isPasswordEditable;
	BOOL _isUsernameEditable;
	BOOL _shouldAllowAppleIDCreation;
	BOOL _needsCredentialRecovery;
	BOOL _needsNewAppleID;
	BOOL _needsPasswordChange;
	BOOL _isTriggeredByNotification;
	BOOL _isEphemeral;
	BOOL _shouldOfferSecurityUpgrade;
	BOOL _shouldPromptForPasswordOnly;
	BOOL _shouldUpdatePersistentServiceTokens;
	BOOL _shouldPreventInteractiveAuth;
	BOOL _shouldForceInteractiveAuth;
	BOOL _shouldRequestShortLivedToken;
	BOOL _shouldRequestConfigurationInfo;
	BOOL _supportsPiggybacking;
	BOOL _anticipateEscrowAttempt;
	BOOL _isFirstTimeLogin;
	BOOL _shouldSkipSettingsLaunchAlert;
	NSString* _proxiedAppBundleID;
	NSUUID* _identifier;
	NSString* _passwordPromptTitle;
	NSString* _proxiedAppName;
	NSString* _password;
	unsigned long long _capabilityForUIDisplay;
	NSString* _shortLivedToken;
	NSString* _message;
	NSString* _username;
	long long _serviceType;
	NSString* _reason;
	NSString* _defaultButtonString;
	long long _maximumLoginAttempts;
	NSArray* _serviceIdentifiers;
	NSString* _DSID;
	NSString* _altDSID;
	NSDictionary* _httpHeadersForRemoteUI;
	id _clientInfo;
	NSString* _title;
	NSString* _helpAnchor;
	NSString* _helpBook;
	id<AKAnisetteServiceProtocol> _anisetteDataProvider;
	NSNumber* _isAppleIDLoginEnabled;
	NSNumber* _hasEmptyPassword;
	NSSet* _desiredInternalTokens;
	AKAnisetteData* _proxiedDeviceAnisetteData;
	AKAnisetteData* _companionDeviceAnisetteData;
	NSString* _displayString;
	NSString* _displayTitle;

}

@property (nonatomic,copy) NSString * generatedCode; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSString * deviceClass; 
@property (nonatomic,copy) NSString * deviceColor; 
@property (nonatomic,copy) NSString * deviceEnclosureColor; 
@property (nonatomic,readonly) NSUUID * _identifier;                                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long _capabilityForUIDisplay;                                   //@synthesize capabilityForUIDisplay=_capabilityForUIDisplay - In the implementation block
@property (nonatomic,readonly) NSString * _detailedDescription; 
@property (assign,nonatomic) BOOL shouldPromptForPasswordOnly;                                               //@synthesize shouldPromptForPasswordOnly=_shouldPromptForPasswordOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdatePersistentServiceTokens;                                       //@synthesize shouldUpdatePersistentServiceTokens=_shouldUpdatePersistentServiceTokens - In the implementation block
@property (assign,setter=_setProxyingForApp:,nonatomic) BOOL _isProxyingForApp;                              //@synthesize isProxyingForApp=_isProxyingForApp - In the implementation block
@property (setter=_setProxiedAppBundleID:,nonatomic,copy) NSString * _proxiedAppBundleID;                    //@synthesize proxiedAppBundleID=_proxiedAppBundleID - In the implementation block
@property (setter=_setProxiedAppName:,nonatomic,copy) NSString * _proxiedAppName;                            //@synthesize proxiedAppName=_proxiedAppName - In the implementation block
@property (nonatomic,copy) NSString * _passwordPromptTitle;                                                  //@synthesize passwordPromptTitle=_passwordPromptTitle - In the implementation block
@property (setter=_setPassword:,nonatomic,copy) NSString * _password;                                        //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL _isPasswordEditable;                                                       //@synthesize isPasswordEditable=_isPasswordEditable - In the implementation block
@property (setter=_setShortLivedToken:,nonatomic,copy) NSString * _shortLivedToken;                          //@synthesize shortLivedToken=_shortLivedToken - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventInteractiveAuth;                                              //@synthesize shouldPreventInteractiveAuth=_shouldPreventInteractiveAuth - In the implementation block
@property (assign,nonatomic) BOOL shouldForceInteractiveAuth;                                                //@synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth - In the implementation block
@property (nonatomic,copy) AKDevice * proxiedDevice; 
@property (nonatomic,copy) AKDevice * companionDevice; 
@property (nonatomic,copy) id<AKAnisetteServiceProtocol> anisetteDataProvider;                               //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
@property (setter=setAppleIDLoginEnabled:,nonatomic,copy) NSNumber * isAppleIDLoginEnabled;                  //@synthesize isAppleIDLoginEnabled=_isAppleIDLoginEnabled - In the implementation block
@property (setter=setHasEmptyPassword:,nonatomic,copy) NSNumber * hasEmptyPassword;                          //@synthesize hasEmptyPassword=_hasEmptyPassword - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestShortLivedToken;                                              //@synthesize shouldRequestShortLivedToken=_shouldRequestShortLivedToken - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestConfigurationInfo;                                            //@synthesize shouldRequestConfigurationInfo=_shouldRequestConfigurationInfo - In the implementation block
@property (assign,nonatomic) BOOL supportsPiggybacking;                                                      //@synthesize supportsPiggybacking=_supportsPiggybacking - In the implementation block
@property (assign,nonatomic) BOOL anticipateEscrowAttempt;                                                   //@synthesize anticipateEscrowAttempt=_anticipateEscrowAttempt - In the implementation block
@property (nonatomic,copy) NSSet * desiredInternalTokens;                                                    //@synthesize desiredInternalTokens=_desiredInternalTokens - In the implementation block
@property (assign,setter=setFirstTimeLogin:,nonatomic) BOOL isFirstTimeLogin;                                //@synthesize isFirstTimeLogin=_isFirstTimeLogin - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipSettingsLaunchAlert;                                             //@synthesize shouldSkipSettingsLaunchAlert=_shouldSkipSettingsLaunchAlert - In the implementation block
@property (setter=_setMessage:,nonatomic,copy) NSString * _message;                                          //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) AKAnisetteData * proxiedDeviceAnisetteData;                                     //@synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData - In the implementation block
@property (nonatomic,retain) AKAnisetteData * companionDeviceAnisetteData;                                   //@synthesize companionDeviceAnisetteData=_companionDeviceAnisetteData - In the implementation block
@property (nonatomic,copy) NSString * displayString;                                                         //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,copy) NSString * displayTitle;                                                          //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProvider> cdpUiProvider;                                           //@synthesize cdpUiProvider=_cdpUiProvider - In the implementation block
@property (copy) NSString * username;                                                                        //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL isUsernameEditable;                                                        //@synthesize isUsernameEditable=_isUsernameEditable - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAppleIDCreation;                                                //@synthesize shouldAllowAppleIDCreation=_shouldAllowAppleIDCreation - In the implementation block
@property (assign,nonatomic) BOOL needsCredentialRecovery;                                                   //@synthesize needsCredentialRecovery=_needsCredentialRecovery - In the implementation block
@property (assign,nonatomic) BOOL needsNewAppleID;                                                           //@synthesize needsNewAppleID=_needsNewAppleID - In the implementation block
@property (assign,nonatomic) BOOL needsPasswordChange;                                                       //@synthesize needsPasswordChange=_needsPasswordChange - In the implementation block
@property (assign,setter=setTriggeredByNotification:,nonatomic) BOOL isTriggeredByNotification;              //@synthesize isTriggeredByNotification=_isTriggeredByNotification - In the implementation block
@property (assign,nonatomic) long long serviceType;                                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonString;                                                   //@synthesize defaultButtonString=_defaultButtonString - In the implementation block
@property (assign,nonatomic) long long maximumLoginAttempts;                                                 //@synthesize maximumLoginAttempts=_maximumLoginAttempts - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,copy) NSArray * serviceIdentifiers;                                                     //@synthesize serviceIdentifiers=_serviceIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL isEphemeral;                                                               //@synthesize isEphemeral=_isEphemeral - In the implementation block
@property (nonatomic,copy) NSString * DSID;                                                                  //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                                               //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSDictionary * httpHeadersForRemoteUI;                                            //@synthesize httpHeadersForRemoteUI=_httpHeadersForRemoteUI - In the implementation block
@property (nonatomic,retain) id clientInfo;                                                                  //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferSecurityUpgrade;                                                //@synthesize shouldOfferSecurityUpgrade=_shouldOfferSecurityUpgrade - In the implementation block
@property (retain) NSString * title;                                                                         //@synthesize title=_title - In the implementation block
@property (copy) NSString * helpAnchor;                                                                      //@synthesize helpAnchor=_helpAnchor - In the implementation block
@property (copy) NSString * helpBook;                                                                        //@synthesize helpBook=_helpBook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)helpAnchor;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)displayString;
-(NSString *)title;
-(NSString *)reason;
-(void)_setMessage:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(id)clientInfo;
-(id)_sanitizedCopy;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentICSCRecoveryUIWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissICSCRecoveryUIWithCompletion:(/*^block*/id)arg1 ;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(void)_updateWithValuesFromContext:(id)arg1 ;
-(AKDevice *)proxiedDevice;
-(void)setProxiedDevice:(AKDevice *)arg1 ;
-(AKAnisetteData *)proxiedDeviceAnisetteData;
-(void)setProxiedDeviceAnisetteData:(AKAnisetteData *)arg1 ;
-(NSNumber *)isAppleIDLoginEnabled;
-(void)setGeneratedCode:(NSString *)arg1 ;
-(NSString *)_message;
-(unsigned long long)_capabilityForUIDisplay;
-(NSArray *)serviceIdentifiers;
-(void)setServiceIdentifiers:(NSArray *)arg1 ;
-(id<CDPStateUIProvider>)cdpUiProvider;
-(id)_mapICSCRecoveryResultsToAuthKit:(id)arg1 ;
-(id)_secondFactorQueue;
-(void)_startListeningForSecondFactorCodeEntryNotification;
-(void)_stopListeningForSecondFactorCodeEntryNotification;
-(void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(/*^block*/id)arg2 ;
-(AKDevice *)companionDevice;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(void)_handleSecondFactorCodeEntry;
-(BOOL)_isProxyingForApp;
-(NSString *)_proxiedAppBundleID;
-(void)_setProxiedAppBundleID:(id)arg1 ;
-(NSString *)_passwordPromptTitle;
-(void)set_passwordPromptTitle:(NSString *)arg1 ;
-(NSString *)_proxiedAppName;
-(void)_setProxiedAppName:(id)arg1 ;
-(BOOL)_isPasswordEditable;
-(void)set_isPasswordEditable:(BOOL)arg1 ;
-(NSString *)_shortLivedToken;
-(void)_setShortLivedToken:(id)arg1 ;
-(void)setCdpUiProvider:(id<CDPStateUIProvider>)arg1 ;
-(BOOL)isUsernameEditable;
-(BOOL)shouldAllowAppleIDCreation;
-(BOOL)needsPasswordChange;
-(void)setNeedsPasswordChange:(BOOL)arg1 ;
-(BOOL)isTriggeredByNotification;
-(void)setTriggeredByNotification:(BOOL)arg1 ;
-(NSString *)defaultButtonString;
-(long long)maximumLoginAttempts;
-(void)setMaximumLoginAttempts:(long long)arg1 ;
-(NSDictionary *)httpHeadersForRemoteUI;
-(void)setHttpHeadersForRemoteUI:(NSDictionary *)arg1 ;
-(BOOL)shouldOfferSecurityUpgrade;
-(void)setShouldOfferSecurityUpgrade:(BOOL)arg1 ;
-(NSString *)helpBook;
-(BOOL)shouldPromptForPasswordOnly;
-(BOOL)shouldUpdatePersistentServiceTokens;
-(BOOL)shouldPreventInteractiveAuth;
-(BOOL)shouldForceInteractiveAuth;
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
-(void)setAppleIDLoginEnabled:(id)arg1 ;
-(NSNumber *)hasEmptyPassword;
-(void)setHasEmptyPassword:(NSNumber *)arg1 ;
-(BOOL)shouldRequestShortLivedToken;
-(void)setShouldRequestShortLivedToken:(BOOL)arg1 ;
-(BOOL)shouldRequestConfigurationInfo;
-(void)setShouldRequestConfigurationInfo:(BOOL)arg1 ;
-(BOOL)supportsPiggybacking;
-(void)setSupportsPiggybacking:(BOOL)arg1 ;
-(BOOL)anticipateEscrowAttempt;
-(void)setAnticipateEscrowAttempt:(BOOL)arg1 ;
-(NSSet *)desiredInternalTokens;
-(void)setDesiredInternalTokens:(NSSet *)arg1 ;
-(BOOL)isFirstTimeLogin;
-(BOOL)shouldSkipSettingsLaunchAlert;
-(AKAnisetteData *)companionDeviceAnisetteData;
-(void)setCompanionDeviceAnisetteData:(AKAnisetteData *)arg1 ;
-(NSString *)generatedCode;
-(void)setDeviceEnclosureColor:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setDeviceClass:(NSString *)arg1 ;
-(NSString *)deviceEnclosureColor;
-(void)setFirstTimeLogin:(BOOL)arg1 ;
-(BOOL)needsCredentialRecovery;
-(BOOL)needsNewAppleID;
-(void)setNeedsCredentialRecovery:(BOOL)arg1 ;
-(void)setNeedsNewAppleID:(BOOL)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)_password;
-(void)setIsEphemeral:(BOOL)arg1 ;
-(void)setShouldPromptForPasswordOnly:(BOOL)arg1 ;
-(NSString *)_detailedDescription;
-(void)setClientInfo:(id)arg1 ;
-(void)_setProxyingForApp:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)_setPassword:(id)arg1 ;
-(void)setIsUsernameEditable:(BOOL)arg1 ;
-(void)setShouldAllowAppleIDCreation:(BOOL)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)DSID;
-(NSString *)displayTitle;
-(NSUUID *)_identifier;
-(void)setReason:(NSString *)arg1 ;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)setShouldForceInteractiveAuth:(BOOL)arg1 ;
-(void)setDefaultButtonString:(NSString *)arg1 ;
-(void)setShouldUpdatePersistentServiceTokens:(BOOL)arg1 ;
-(void)setShouldSkipSettingsLaunchAlert:(BOOL)arg1 ;
-(void)setHelpBook:(NSString *)arg1 ;
-(void)setHelpAnchor:(NSString *)arg1 ;
-(BOOL)isEphemeral;
-(NSString *)altDSID;
-(NSString *)serviceIdentifier;
-(void)setShouldPreventInteractiveAuth:(BOOL)arg1 ;
-(NSString *)deviceClass;
-(void)setDSID:(NSString *)arg1 ;
@end

