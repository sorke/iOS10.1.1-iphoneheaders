/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFLoyaltyAndPaymentSessionDelegate <NSObject>
@optional
-(void)loyaltyAndPaymentSession:(id)arg1 didDetectField:(BOOL)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didDetectTechnology:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didReceiveButtonPressForApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
-(void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg1;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(BOOL)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didFelicaStateChange:(id)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpressModeStateChange:(unsigned)arg2;
-(void)loyaltyAndPaymentSession:(id)arg1 didFailDeferredAuthorization:(BOOL)arg2;
-(void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1;

@end
