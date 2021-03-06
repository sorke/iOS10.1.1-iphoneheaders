/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, _UIBackdropViewSettings;

@interface CKUITheme : NSObject {

	long long _HUDStyle;
	UIColor* _darkAppTintColor;
	UIColor* _detailsCellStaticTextColor;

}

@property (assign,nonatomic) long long HUDStyle;                                                            //@synthesize HUDStyle=_HUDStyle - In the implementation block
@property (nonatomic,readonly) UIColor * appTintColor; 
@property (nonatomic,readonly) UIColor * segmentedControlSelectionTintColor; 
@property (nonatomic,readonly) UIColor * messagesControllerBackgroundColor; 
@property (nonatomic,readonly) UIColor * darkAppTintColor;                                                  //@synthesize darkAppTintColor=_darkAppTintColor - In the implementation block
@property (nonatomic,readonly) UIColor * lightGrayColor; 
@property (nonatomic,readonly) UIColor * grayTextColor; 
@property (nonatomic,readonly) UIColor * notificationSubtitleColor; 
@property (nonatomic,readonly) long long navBarStyle; 
@property (nonatomic,readonly) long long defaultBarStyle; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) long long scrollIndicatorStyle; 
@property (nonatomic,readonly) UIColor * conversationListBackgroundColor; 
@property (nonatomic,readonly) UIColor * conversationListCellColor; 
@property (nonatomic,readonly) UIColor * conversationListSelectedCellColor; 
@property (nonatomic,readonly) UIColor * conversationListSeperatorColor; 
@property (nonatomic,readonly) UIColor * conversationListSenderColor; 
@property (nonatomic,readonly) UIColor * conversationListSummaryColor; 
@property (nonatomic,readonly) UIColor * conversationListDateColor; 
@property (nonatomic,readonly) UIColor * conversationListGroupCountColor; 
@property (nonatomic,readonly) UIColor * transcriptSeparatorColor; 
@property (nonatomic,readonly) UIColor * dimmingViewBackgroundColor; 
@property (nonatomic,readonly) UIColor * progressBarTrackTintColor; 
@property (nonatomic,readonly) UIColor * transcriptBackgroundColor; 
@property (nonatomic,readonly) UIColor * transcriptTextColor; 
@property (nonatomic,readonly) UIColor * transcriptBigEmojiColor; 
@property (nonatomic,readonly) UIColor * transcriptDeemphasizedTextColor; 
@property (nonatomic,readonly) UIColor * typingIndicatorDotColor; 
@property (nonatomic,readonly) UIColor * attachmentBalloonActionColor; 
@property (nonatomic,readonly) UIColor * attachmentBalloonTitleTextColor; 
@property (nonatomic,readonly) UIColor * attachmentBalloonSubtitleTextColor; 
@property (nonatomic,readonly) UIColor * waveformUnplayedColor; 
@property (nonatomic,readonly) UIColor * waveformDisabledColor; 
@property (nonatomic,readonly) long long toFieldBackdropStyle; 
@property (nonatomic,readonly) UIColor * toFieldTextColor; 
@property (nonatomic,readonly) UIColor * searchResultsBackgroundColor; 
@property (nonatomic,readonly) UIColor * searchResultsCellBackgroundColor; 
@property (nonatomic,readonly) UIColor * searchResultsCellSelectedColor; 
@property (nonatomic,readonly) UIColor * searchResultsSeperatorColor; 
@property (nonatomic,readonly) long long keyboardAppearance; 
@property (nonatomic,readonly) long long keyboardDarkAppearance; 
@property (nonatomic,readonly) _UIBackdropViewSettings * entryViewBackdropSettings; 
@property (nonatomic,readonly) _UIBackdropViewSettings * entryViewDarkBackdropSettings; 
@property (nonatomic,readonly) _UIBackdropViewSettings * entryViewTransparentBackdropSettings; 
@property (nonatomic,readonly) UIColor * entryFieldButtonColor; 
@property (nonatomic,readonly) UIColor * entryFieldHighlightedButtonColor; 
@property (nonatomic,readonly) UIColor * entryFieldDarkStyleButtonColor; 
@property (nonatomic,readonly) UIColor * entryFieldDarkStyleHighlightedButtonColor; 
@property (nonatomic,readonly) UIColor * entryFieldGrayColor; 
@property (nonatomic,readonly) UIColor * entryFieldCoverFillColor; 
@property (nonatomic,readonly) UIColor * entryFieldCoverBorderColor; 
@property (nonatomic,readonly) UIColor * entryFieldCoverFillDarkColor; 
@property (nonatomic,readonly) UIColor * entryFieldBackgroundColor; 
@property (nonatomic,readonly) UIColor * entryFieldAudioRecordingBalloonColor; 
@property (nonatomic,readonly) UIColor * entryFieldDividerColor; 
@property (nonatomic,readonly) UIColor * entryFieldTextColor; 
@property (nonatomic,readonly) UIColor * entryFieldDarkTextColor; 
@property (nonatomic,readonly) UIColor * detailsBackgroundColor; 
@property (nonatomic,readonly) long long detailsBackgroundBlurEffectStyle; 
@property (nonatomic,readonly) UIColor * detailsSegmentedControlBackgroundColor; 
@property (nonatomic,readonly) UIColor * recipientsDividerColor; 
@property (nonatomic,readonly) UIColor * detailsCellStaticTextColor;                                        //@synthesize detailsCellStaticTextColor=_detailsCellStaticTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * contactCellTextColor; 
@property (nonatomic,readonly) UIColor * sharedContentsCellTextColor; 
@property (nonatomic,readonly) UIColor * sharedContentsCellBackgroundColor; 
@property (nonatomic,readonly) UIColor * contactsTableViewBackgroundColor; 
@property (nonatomic,readonly) UIColor * contactTableViewCellBackgroundColor; 
@property (nonatomic,readonly) UIColor * contactTableViewCellContentTextColor; 
@property (nonatomic,readonly) UIColor * contactTableViewHeaderBackgroundColor; 
@property (nonatomic,readonly) UIColor * activeRecordingDotColor; 
@property (nonatomic,readonly) UIColor * messageAcknowledgmentBalloonBorderColor; 
@property (nonatomic,readonly) UIColor * browserBackgroundColor; 
@property (nonatomic,readonly) UIColor * browserContentBackgroundColor; 
@property (nonatomic,readonly) UIColor * browserLabelColor; 
@property (nonatomic,readonly) UIColor * browserSwitcherGutterColor; 
@property (nonatomic,readonly) UIColor * browserSwitcherGutterDividerColor; 
@property (nonatomic,readonly) UIColor * stickerDetailsSubheaderTextColor; 
-(long long)statusBarStyle;
-(UIColor *)lightGrayColor;
-(long long)keyboardAppearance;
-(UIColor *)grayTextColor;
-(id)gray_balloonColors;
-(id)green_balloonColors;
-(id)blue_balloonColors;
-(id)siri_balloonColors;
-(id)red_balloonColors;
-(id)white_balloonColors;
-(id)gray_unfilledBalloonColor;
-(id)green_unfilledBalloonColor;
-(id)blue_unfilledBalloonColor;
-(id)siri_unfilledBalloonColor;
-(id)red_unfilledBalloonColor;
-(id)white_unfilledBalloonColor;
-(id)gray_balloonTextColor;
-(id)green_balloonTextColor;
-(id)blue_balloonTextColor;
-(id)siri_balloonTextColor;
-(id)red_balloonTextColor;
-(id)white_balloonTextColor;
-(id)gray_balloonTextLinkColor;
-(id)green_balloonTextLinkColor;
-(id)blue_balloonTextLinkColor;
-(id)siri_balloonTextLinkColor;
-(id)red_balloonTextLinkColor;
-(id)white_balloonTextLinkColor;
-(id)gray_balloonOverlayColor;
-(id)green_balloonOverlayColor;
-(id)blue_balloonOverlayColor;
-(id)siri_balloonOverlayColor;
-(id)red_balloonOverlayColor;
-(id)white_balloonOverlayColor;
-(UIColor *)transcriptTextColor;
-(UIColor *)attachmentBalloonTitleTextColor;
-(id)gray_waveformColor;
-(id)green_waveformColor;
-(id)blue_waveformColor;
-(id)siri_waveformColor;
-(id)red_waveformColor;
-(id)white_waveformColor;
-(id)gray_progressViewColor;
-(id)green_progressViewColor;
-(id)blue_progressViewColor;
-(id)siri_progressViewColor;
-(id)red_progressViewColor;
-(id)white_progressViewColor;
-(id)gray_recipientTextColor;
-(id)green_recipientTextColor;
-(id)blue_recipientTextColor;
-(id)siri_recipientTextColor;
-(id)red_recipientTextColor;
-(id)white_recipientTextColor;
-(UIColor *)transcriptBackgroundColor;
-(UIColor *)conversationListCellColor;
-(UIColor *)conversationListSelectedCellColor;
-(UIColor *)conversationListSeperatorColor;
-(id)gray_sendButtonColor;
-(id)green_sendButtonColor;
-(id)blue_sendButtonColor;
-(id)siri_sendButtonColor;
-(id)red_sendButtonColor;
-(id)white_sendButtonColor;
-(id)balloonColorsForColorType:(char)arg1 ;
-(UIColor *)appTintColor;
-(char)messageAcknowledgmentBalloonColorTypeForStyle:(long long)arg1 ;
-(UIColor *)segmentedControlSelectionTintColor;
-(UIColor *)messagesControllerBackgroundColor;
-(UIColor *)notificationSubtitleColor;
-(long long)navBarStyle;
-(long long)defaultBarStyle;
-(long long)scrollIndicatorStyle;
-(UIColor *)conversationListBackgroundColor;
-(UIColor *)conversationListSenderColor;
-(UIColor *)conversationListSummaryColor;
-(UIColor *)conversationListDateColor;
-(UIColor *)conversationListGroupCountColor;
-(UIColor *)transcriptSeparatorColor;
-(UIColor *)dimmingViewBackgroundColor;
-(UIColor *)progressBarTrackTintColor;
-(UIColor *)transcriptBigEmojiColor;
-(UIColor *)transcriptDeemphasizedTextColor;
-(UIColor *)typingIndicatorDotColor;
-(id)unfilledBalloonColorForColorType:(char)arg1 ;
-(id)balloonTextColorForColorType:(char)arg1 ;
-(id)balloonTextLinkColorForColorType:(char)arg1 ;
-(id)balloonOverlayColorForColorType:(char)arg1 ;
-(UIColor *)attachmentBalloonActionColor;
-(UIColor *)attachmentBalloonSubtitleTextColor;
-(id)waveformColorForColorType:(char)arg1 ;
-(id)progressViewColorForColorType:(char)arg1 ;
-(UIColor *)waveformUnplayedColor;
-(UIColor *)waveformDisabledColor;
-(id)recipientTextColorForColorType:(char)arg1 ;
-(long long)toFieldBackdropStyle;
-(UIColor *)toFieldTextColor;
-(UIColor *)searchResultsBackgroundColor;
-(UIColor *)searchResultsCellBackgroundColor;
-(UIColor *)searchResultsCellSelectedColor;
-(UIColor *)searchResultsSeperatorColor;
-(long long)keyboardDarkAppearance;
-(_UIBackdropViewSettings *)entryViewBackdropSettings;
-(_UIBackdropViewSettings *)entryViewDarkBackdropSettings;
-(_UIBackdropViewSettings *)entryViewTransparentBackdropSettings;
-(id)sendButtonColorForColorType:(char)arg1 ;
-(UIColor *)entryFieldButtonColor;
-(UIColor *)entryFieldHighlightedButtonColor;
-(UIColor *)entryFieldDarkStyleButtonColor;
-(UIColor *)entryFieldDarkStyleHighlightedButtonColor;
-(UIColor *)entryFieldGrayColor;
-(UIColor *)entryFieldCoverFillColor;
-(UIColor *)entryFieldCoverBorderColor;
-(UIColor *)entryFieldCoverFillDarkColor;
-(UIColor *)entryFieldBackgroundColor;
-(UIColor *)entryFieldDividerColor;
-(UIColor *)entryFieldTextColor;
-(UIColor *)entryFieldDarkTextColor;
-(UIColor *)entryFieldAudioRecordingBalloonColor;
-(UIColor *)detailsBackgroundColor;
-(long long)detailsBackgroundBlurEffectStyle;
-(UIColor *)recipientsDividerColor;
-(UIColor *)contactCellTextColor;
-(UIColor *)sharedContentsCellTextColor;
-(UIColor *)sharedContentsCellBackgroundColor;
-(UIColor *)detailsSegmentedControlBackgroundColor;
-(UIColor *)contactsTableViewBackgroundColor;
-(UIColor *)contactTableViewCellBackgroundColor;
-(UIColor *)contactTableViewHeaderBackgroundColor;
-(UIColor *)contactTableViewCellContentTextColor;
-(UIColor *)activeRecordingDotColor;
-(UIColor *)messageAcknowledgmentBalloonBorderColor;
-(id)messageAcknowledgment:(long long)arg1 acknowledgmentImageColor:(long long)arg2 ;
-(id)messageAcknowledgment:(long long)arg1 selectedAcknowledgmentImageColor:(long long)arg2 ;
-(id)messageAcknowledgmentBalloonColorForStyle:(long long)arg1 ;
-(id)messageAcknowledgmentSelectedBalloonColorForStyle:(long long)arg1 ;
-(UIColor *)browserBackgroundColor;
-(UIColor *)browserContentBackgroundColor;
-(UIColor *)browserLabelColor;
-(UIColor *)browserSwitcherGutterColor;
-(UIColor *)browserSwitcherGutterDividerColor;
-(UIColor *)stickerDetailsSubheaderTextColor;
-(long long)HUDStyle;
-(void)setHUDStyle:(long long)arg1 ;
-(UIColor *)darkAppTintColor;
-(UIColor *)detailsCellStaticTextColor;
@end

