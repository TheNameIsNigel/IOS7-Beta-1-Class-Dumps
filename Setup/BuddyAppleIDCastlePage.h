/* BuddyAppleIDCastlePage.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Setup-Structs.h"
#import "SetupChoiceController.h"
#import "BuddyAppleIDChoiceDelegate.h"

@class SetupChoice, NSObject, UIAlertView;
@protocol AASetupAssistantDelegateService;

__attribute__((visibility("hidden")))
@interface BuddyAppleIDCastlePage : SetupChoiceController <BuddyAppleIDChoiceDelegate> {
	NSObject<AASetupAssistantDelegateService>* _castleAssistantDelegate;
	BOOL _redownloadAllowed;
	UIAlertView* _enableAlert;
	int _choiceSelectionValue;
	SetupChoice* _enableChoice;
	SetupChoice* _disableChoice;
}
@property(retain, nonatomic) SetupChoice* disableChoice;
@property(retain, nonatomic) SetupChoice* enableChoice;
@property(assign, nonatomic) int choiceSelectionValue;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) NSObject<AASetupAssistantDelegateService>* castleAssistantDelegate;
-(void)whatIsPressed;
-(void)choice:(id)choice resultWasValid:(BOOL)valid;
-(void)learnMoreButtonTapped:(id)tapped;
-(id)learnMoreButtonText;
-(BOOL)footerIconHasRoundedCorners;
-(id)footerIconName;
-(id)footerDetailText;
-(id)footerTitleText;
-(BOOL)wantsNextButton;
-(id)titleText;
-(id)init;
@end
