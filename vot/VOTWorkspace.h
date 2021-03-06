/* VOTWorkspace.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vot-Structs.h"
#import "VOTOutputRequestCompletionProtocol.h"
#import "VOTEventFactoryCallbackProtocol.h"

@class VOTElementManager, VOTOutputRequest, NSMutableDictionary, NSLock, VOTEventFactory, VOTKeyboardManager, VOTElement, NSString, NSArray, NSDictionary;

@interface VOTWorkspace : XXUnknownSuperclass <VOTOutputRequestCompletionProtocol, VOTEventFactoryCallbackProtocol> {
	VOTEventFactory* _eventFactory;
	VOTElementManager* _elementManager;
	VOTKeyboardManager* _keyboardManager;
	CFRunLoopRef _runLoop;
	struct {
		unsigned count;
		double delay;
		double lastTime;
		BOOL connected;
	} _retryState;
	BOOL _soundMuted;
	BOOL _speechMuted;
	BOOL _voiceOverMuted;
	BOOL _screenCurtainEnabled;
	BOOL _isSystemBatteryLow;
	BOOL _hintsEnabled;
	BOOL _AXInspectorEnabled;
	BOOL _typingPitchChangeEnabled;
	BOOL _isPostingKeyboardEvents;
	BOOL _speakingRateInRotor;
	BOOL _outputDisabled;
	BOOL _allowSingleLetterSearching;
	BOOL _useCompactVoice;
	BOOL _speakNotificationsInLockScreen;
	BOOL _playKeyboardClicksOnHWInput;
	int _swTypingFeedback;
	int _hwTypingFeedback;
	BOOL _largeCursorEnabled;
	int _punctuationLevel;
	VOTOutputRequest* _completionRequest;
	int _orientation;
	int _lockButtonPressCount;
	double _lastLockButtonPress;
	double _lastHomeButtonPress;
	double _lastKeyboardKeyPress;
	NSArray* _enabledLanguageRotorItems;
	NSString* _selectedLanguage;
	NSString* _systemSpokenLanguage;
	NSMutableDictionary* _phoneticsTable;
	int _cachedRotorType;
	NSMutableDictionary* _appCache;
	NSLock* _appCacheLock;
	NSString* _postKeyThreadKey;
	struct {
		BOOL isRunLoopEnabled;
		BOOL speakAutocorrectionsEnabled;
		BOOL ringerSwitchSilent;
		BOOL audioIsRoutedToSpeaker;
		BOOL speechLogging;
		BOOL isInternalInstall;
	} _vtwFlags;
	NSLock* _systemLangaugeLock;
	int _navigateImagesOption;
	NSString* additionalLanguageRotorItem;
	NSString* _defaultDialect;
}
@property(readonly, assign, nonatomic) VOTElement* currentElement;
@property(assign, nonatomic) int punctuationLevel;
@property(readonly, assign, nonatomic) BOOL directTouchElementsPresent;
@property(assign, nonatomic) BOOL speakingRateInRotor;
@property(assign, nonatomic) int rotorType;
@property(assign, nonatomic) BOOL playKeyboardClicksOnHWInput;
@property(assign, nonatomic) BOOL largeCursorEnabled;
@property(assign, nonatomic) int hwTypingFeedback;
@property(assign, nonatomic) int swTypingFeedback;
@property(assign, nonatomic) BOOL AXInspectorEnabled;
@property(assign, nonatomic) int navigateImagesOption;
@property(assign, nonatomic) BOOL hintsEnabled;
@property(assign, nonatomic) BOOL tapAndHoldMode;
@property(readonly, assign) NSDictionary* phoneticsTable;
@property(readonly, assign, nonatomic) NSString* systemSpokenLanguage;
@property(retain) NSString* selectedLanguage;
@property(readonly, assign, nonatomic) NSString* defaultDialect;
@property(retain, nonatomic) NSString* additionalLanguageRotorItem;
@property(readonly, assign, nonatomic) NSArray* languageRotorItems;
@property(assign, nonatomic) double lastKeyboardKeyPress;
@property(assign, nonatomic) double lastLockButtonPress;
@property(assign, nonatomic) double lastHomeButtonPress;
@property(assign, nonatomic) BOOL allowSingleLetterSearching;
@property(assign, nonatomic) BOOL outputDisabled;
@property(readonly, assign, nonatomic) BOOL isInternalInstall;
@property(assign, nonatomic) BOOL speakNotificationsInLockScreen;
@property(assign, nonatomic) BOOL useCompactVoice;
@property(assign, nonatomic) BOOL typingPitchChangeEnabled;
@property(assign, nonatomic) BOOL screenCurtainEnabled;
@property(assign, nonatomic) BOOL isSystemBatteryLow;
@property(assign, nonatomic) BOOL voiceOverMuted;
@property(assign, nonatomic) BOOL soundMuted;
@property(assign, nonatomic) BOOL speechMuted;
@property(assign, nonatomic) BOOL speechLogging;
+(id)sharedWorkspace;
-(id)applicationForElement:(id)element;
-(id)applicationForCurrentElement;
-(BOOL)isBaseSystemSpokenEqualToLocalization;
-(void)updateSelectedLanguage;
-(double)lastLockButtonPressTime;
-(BOOL)isRingerSwitchSilent;
-(BOOL)userRecentlyUnlockedDevice;
-(BOOL)isAudioRoutedToSpeaker;
-(void)_localeChanged:(id)changed;
-(void)_activeAudioRouteChanged:(id)changed;
-(void)refreshBraille:(BOOL)braille rotorSelection:(id)selection;
-(void)setIsHardwareKeyboardAttached:(BOOL)attached;
-(void)_wst_setIsHardwareKeyboardAttached:(id)attached;
-(void)performEjectButtonPress;
-(void)performVolumeDownButtonPress;
-(void)performVolumeUpButtonPress;
-(void)performHomeButtonPress;
-(void)resetSystemBatteryLowState;
-(void)rotateDeviceOrientation:(BOOL)orientation;
-(void)resetOrientation;
-(int)deviceOrientation;
-(void)_setDeviceOrientation:(int)orientation;
-(BOOL)speakAutocorrectionsEnabled;
-(void)_speakCorrectionsChanged;
-(void)_languageChanged;
-(unsigned)fingerCount;
-(CGPoint)fingerPosition;
-(void)handleReturnToSpringBoard;
-(void)startTapAndHoldMode;
-(void)handleOrientationChanged;
-(void)handleRingerSwitchSwitched:(id)switched;
-(void)handleProximityEvent:(id)event;
-(void)handleLockButtonPress:(id)press;
-(void)_wst_handleMediaKeyPress:(id)press;
-(void)handleMediaKeyPress:(id)press;
-(void)_handleSystemMuteKey:(id)key;
-(void)_handleEjectKeyPressed;
-(void)temporarilyChangeQuickNavState:(BOOL)state;
-(void)_temporarilyChangeQuickNav:(id)nav;
-(id)keyboardPressInfo;
-(void)handleKeyboardKeyEvent:(id)event;
-(void)_wst_handleMenuButtonPress:(id)press;
-(void)handleMenuButtonPress:(id)press;
-(void)_wst_handleVolumeButtonPress:(id)press;
-(void)handleVolumeButtonPress:(id)press;
-(void)_selfDestruct;
-(int)_pidForLaunchLabel:(id)launchLabel;
-(void)stop:(int)stop;
-(void)outputRequestFinished:(id)finished;
-(void)_stopRunLoop;
-(void)systemSpokenLanguageChanged:(id)changed;
-(void)updatePhoneticsTable;
-(void)preferencesLanguageRotorItemsChanged:(id)changed;
-(void)_preferencesCompactVoiceChanged;
-(void)preferencesKeyboardClickStatusChange:(id)change;
-(void)_preferencesSpeakNotificationsInLockScreen;
-(void)_preferencesSpeakingRateInRotorChanged;
-(void)_preferencesSpeechRateChange;
-(void)_preferencesNavigateImagesOptionChange;
-(void)_preferencesSpeakHintsChange;
-(void)_preferencesTypingPitchChange;
-(void)_preferencesTypingFeedbackChange;
-(void)_preferencesAlwaysUseNemethForMathChange;
-(void)_preferencesBrailleTableLanguageChange;
-(void)postEvent:(id)event;
-(void)postKeyboardEventWithCharacters:(id)characters originalCharacters:(id)characters2 modifiers:(unsigned)modifiers keyCode:(unsigned short)code;
-(void)_postKeyboardEventWithCharacters:(id)characters originalCharacters:(id)characters2 modifiers:(id)modifiers keyCode:(id)code;
-(void)dispatchCommand:(id)command;
-(void)_voiceOverTouchEnabledChange;
-(void)_voiceOverUsageConfirmed;
-(void)_checkVoiceOverWasConfirmed;
-(void)_showConfirmPanel;
-(BOOL)_voiceOverIsConfirmed;
-(void)loadUIKit;
-(void)run;
-(void)_sendGreetingMessage;
-(void)_registerWithSystem;
-(void)_registerWithSpringBoard;
-(BOOL)isVoiceOverTouchPreferenceEnabled;
-(BOOL)isAccessibilityEnabled;
-(void)handleSystemWideServerDied;
-(BOOL)isSystemWideServerAlive;
-(void)_registerForExternalDevices;
-(void)dealloc;
-(void)_runUnitTests;
-(void)_registerWithAggregateDictionary;
-(void)_registerForPreferenceChanges;
-(void)_initialize;
-(id)init;
@end
