/* VoicemailViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ABUnknownPersonViewControllerDelegate.h"
#import "UITableViewDelegate.h"
#import "AFContextProvider.h"
#import "PhoneViewController.h"
#import "MobilePhone-Structs.h"

@class NSString, NSArray, VoicemailMailboxController, VoicemailSetupPlacard, VoicemailPlaybackController, VoicemailControlsView;

__attribute__((visibility("hidden")))
@interface VoicemailViewController : PhoneViewController <ABUnknownPersonViewControllerDelegate, UITableViewDelegate, AFContextProvider> {
	VoicemailMailboxController* _mailboxController;
	VoicemailPlaybackController* _playbackController;
	NSString* _unknownCardViewerPhoneNumber;
	NSArray* _unknownCardViewerDates;
	VoicemailControlsView* _controlsView;
	VoicemailSetupPlacard* _setupPlacard;
	unsigned _isInboxController : 1;
}
+(id)contactCardDateFormatter;
+(XXStruct_ndkk2A)badge;
+(int)tabViewType;
-(id)getCurrentContext;
-(BOOL)allowContextProvider:(id)provider;
-(void)unknownPersonViewController:(id)controller didResolveToPerson:(void*)person;
-(void)_showCardViewerForVoicemail:(id)voicemail displayName:(id)name animate:(BOOL)animate;
-(void)voicemailMailboxController:(id)controller entryDisclosureSelected:(id)selected usingDisplayName:(id)name;
-(void)voicemailmailboxController:(id)controller voicemailUntrashed:(id)untrashed countRemaining:(int)remaining;
-(void)voicemailmailboxController:(id)controller voicemailDeleted:(id)deleted countRemaining:(int)remaining;
-(void)voicemailMailboxController:(id)controller allVoicemailsDeletedWithCountRemaining:(int)countRemaining;
-(void)_popToInboxIfNecessaryForCurrentTrashedCount:(int)currentTrashedCount;
-(void)voicemailMailboxController:(id)controller entrySelected:(id)selected;
-(void)_updatePlaybackControlsForNullRecord;
-(void)voicemailMailboxControllerExtraRowSelected:(id)selected;
-(void)_checkForFailedSetup;
-(void)voicemailSetupPlacardClicked:(id)clicked;
-(void)_audioButtonClicked:(id)clicked;
-(void)_greetingButtonClicked:(id)clicked;
-(void)mailboxSetupStateChanged;
-(void)_voicemailTaskStartedOrEnded:(id)ended;
-(void)_lazySync;
-(BOOL)shouldSnapshot;
-(void)unloadView;
-(void)didReceiveMemoryWarning;
-(id)contentScrollView;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)setShowSetupPlacard:(BOOL)placard;
-(void)_addControlsSubview;
-(void)updateNavBarButtons;
-(void)updateNavTitle;
-(id)mailboxController;
-(void)loadView;
-(void)dealloc;
-(void)destroyView;
-(BOOL)isInboxController;
-(id)initAsInboxViewController:(BOOL)controller;
@end
