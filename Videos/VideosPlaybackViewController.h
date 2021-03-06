/* VideosPlaybackViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MPVideoOverlayDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow, MPVideoPlaybackOverlayView, MPVideoPlaybackBackgroundView, NSTimer, UIAlertView, VideosQueueFeeder, VideosNowPlayingObserver, VideosAVController;

__attribute__((visibility("hidden")))
@interface VideosPlaybackViewController : XXUnknownSuperclass <MPVideoOverlayDelegate> {
	VideosAVController* _player;
	VideosQueueFeeder* _queueFeeder;
	MPVideoPlaybackOverlayView* _overlayView;
	BOOL _overlayViewVisible;
	BOOL _shouldResumePlayback;
	BOOL _exiting;
	double _startingTime;
	UIWindow* _externalWindow;
	MPVideoPlaybackBackgroundView* _backgroundView;
	NSTimer* _idleTimer;
	UIAlertView* _playbackErrorAlert;
	int _activeOverlayUserEvents;
	VideosNowPlayingObserver* _nowPlayingObserver;
}
-(void).cxx_destruct;
-(void)_updateOverlayView;
-(void)_updateIdleTimerDisabled;
-(void)_showOverlayView;
-(void)_resetOverlayIdleTimer:(SEL)timer;
-(void)_play;
-(void)_overlayIdleTimerFired:(id)fired;
-(BOOL)_isPlayingToExternalScreen;
-(void)_hideOverlayView;
-(void)_handleSingleTap:(id)tap;
-(void)_handleDoubleTap:(id)tap;
-(void)_exitPlayerAnimated:(BOOL)animated;
-(void)_configureVideoView;
-(BOOL)_canHideOverlayView;
-(void)_cancelOverlayIdleTimer:(SEL)timer;
-(void)_arrangeSubviews;
-(void)_serverDied:(id)died;
-(void)_playbackStateChanged:(id)changed;
-(void)_playbackError:(id)error;
-(void)_screenDidConnectOrDisconnect:(id)_screen;
-(void)_itemChanged:(id)changed;
-(void)_isExternalPlaybackActiveDidChange:(id)_isExternalPlaybackActive;
-(void)_batteryStateDidChange:(id)_batteryState;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)overlayTappedBackButton:(id)button;
-(void)overlay:(id)overlay didEndUserEvent:(int)event;
-(void)overlay:(id)overlay didBeginUserEvent:(int)event;
-(void)remoteControlReceivedWithEvent:(id)event;
-(BOOL)wantsFullScreenLayout;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)dealloc;
-(id)initWithMediaItem:(id)mediaItem startTime:(double)time;
-(id)initWithMediaItem:(id)mediaItem;
@end
