/* AppDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UINavigationControllerDelegate.h"
#import "GameCentre-Structs.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UIApplicationDelegate.h"
#import "UITabBarControllerDelegate.h"
#import "GKURLHandling.h"
#import "GKDaemonProxyDataUpdateDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIWindow, NSDictionary, GKPendingFriendRequest, UITabBarController, GKUITheme, NSMutableArray, NSURL, GKTurnsViewController, GKNavigationController, UIViewController, GKChallengesViewController, GKFriendsViewController, GKLocalPlayerProfileViewController, GKGamesViewController;

__attribute__((visibility("hidden")))
@interface AppDelegate : XXUnknownSuperclass <UINavigationControllerDelegate, SKStoreProductViewControllerDelegate, UIApplicationDelegate, UITabBarControllerDelegate, GKURLHandling, GKDaemonProxyDataUpdateDelegate> {
	NSDictionary* _pendingNotification;
	GKPendingFriendRequest* _pendingFriendRequest;
	BOOL _presentingAnimated;
	UIWindow* _window;
	UITabBarController* _tabBarController;
	GKUITheme* _theme;
	int _friendRequestCount;
	NSMutableArray* _controllersToPresent;
	NSURL* _openURL;
	NSString* _openURLApplication;
	GKLocalPlayerProfileViewController* _currentPlayerController;
	GKFriendsViewController* _friendsController;
	GKChallengesViewController* _challengesController;
	GKTurnsViewController* _turnsController;
	GKGamesViewController* _gamesController;
	GKNavigationController* _meTabController;
	UIViewController* _friendsTabController;
	GKNavigationController* _gamesTabController;
	UIViewController* _challengesTabController;
	UIViewController* _turnsTabController;
	NSString* _lastKnownAuthenticatedPlayerID;
	NSDictionary* _restorationViewControllers;
}
@property(retain, nonatomic) NSString* openURLApplication;
@property(retain, nonatomic) NSURL* openURL;
@property(retain, nonatomic) NSMutableArray* controllersToPresent;
@property(assign, nonatomic, getter=isPresentingAnimated) BOOL presentingAnimated;
@property(retain, nonatomic) NSDictionary* restorationViewControllers;
@property(retain, nonatomic) NSString* lastKnownAuthenticatedPlayerID;
@property(retain, nonatomic) UIViewController* turnsTabController;
@property(retain, nonatomic) UIViewController* challengesTabController;
@property(retain, nonatomic) GKNavigationController* gamesTabController;
@property(retain, nonatomic) UIViewController* friendsTabController;
@property(retain, nonatomic) GKNavigationController* meTabController;
@property(retain, nonatomic) GKGamesViewController* gamesController;
@property(retain, nonatomic) GKTurnsViewController* turnsController;
@property(retain, nonatomic) GKChallengesViewController* challengesController;
@property(retain, nonatomic) GKFriendsViewController* friendsController;
@property(retain, nonatomic) GKLocalPlayerProfileViewController* currentPlayerController;
@property(assign, nonatomic) int friendRequestCount;
@property(retain, nonatomic) GKPendingFriendRequest* pendingFriendRequest;
@property(retain, nonatomic) NSDictionary* pendingNotification;
@property(retain, nonatomic) UITabBarController* tabBarController;
@property(retain, nonatomic) UIWindow* window;
@property(retain, nonatomic) GKUITheme* theme;
-(void)productViewControllerDidFinish:(id)productViewController;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(id)tabBarController:(id)controller animatorForFromViewController:(id)viewController toViewController:(id)viewController3;
-(BOOL)tabBarController:(id)controller shouldSelectViewController:(id)controller2;
-(void)tabBarController:(id)controller didSelectViewController:(id)controller2;
-(BOOL)layoutRTL;
-(void)applicationDidBecomeActive:(id)application;
-(void)showPlayerDetailsForFriend:(id)aFriend;
-(void)showLocalPlayerDetails;
-(void)showFriendRequest:(id)request;
-(void)showLoginAlertForFriendRequest:(id)friendRequest;
-(void)showAddEmailAddressAlertForFriendRequest:(id)friendRequest;
-(void)localPlayerDidAuthenticate;
-(void)authenticationChanged:(id)changed;
-(void)tabBarBadgeWasReset:(id)reset;
-(void)updateTabBarEnabledState;
-(BOOL)tabBarShouldBeEnabled;
-(void)showAuthenticateViewController:(id)controller;
-(void)setupTopLevelViewControllers;
-(id)application:(id)application viewControllerWithRestorationIdentifierPath:(id)restorationIdentifierPath coder:(id)coder;
-(void)invalidateViewRestorationDictionary;
-(id)turnsNavController;
-(id)challengesNavController;
-(id)friendsNavController;
-(void)setupCurrentPlayerViewController;
-(void)setupTurnsViewController;
-(void)setupChallengesViewController;
-(void)setupGamesViewController;
-(void)setupFriendsViewController;
-(void)setupRootViewControllerWithTabBar;
-(void)setupTabBarController;
-(void)setupRootViewControllerWithoutTabBar;
-(void)setupNavigationControllersForTabs;
-(id)splitViewControllerForRootController:(id)rootController restorationIdentifierForSplitView:(id)splitView restorationIdentifierForRootController:(id)rootController3;
-(void)handleOpenURL:(id)url fromApplication:(id)application;
-(void)showSandboxSignOutAlert;
-(void)applicationWillEnterForeground:(id)application;
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(BOOL)application:(id)application willFinishLaunchingWithOptions:(id)options;
-(void)fixupRestorationClassForViewController:(id)viewController;
-(BOOL)application:(id)application shouldSaveApplicationState:(id)state;
-(BOOL)application:(id)application shouldRestoreApplicationState:(id)state;
-(void)markAllBadgesViewedForType:(unsigned)type;
-(void)setBadgeCount:(unsigned)count forType:(unsigned)type;
-(void)_setTabBadgeCount:(unsigned)count forType:(unsigned)type;
-(void)refreshContentsForDataType:(unsigned)dataType userInfo:(id)info;
-(void)presentStoreProductPageForURL:(id)url withContext:(id)context;
-(void)dealloc;
-(id)init;
-(BOOL)dispatchURL:(id)url;
-(void)displayAchievementWithID:(id)anId forGameWithBundleID:(id)bundleID forPlayerWithID:(id)anId3;
-(void)displayScoreForLeaderboardWithID:(id)anId forGameWithBundleID:(id)bundleID forPlayerWithID:(id)anId3;
-(void)displayPlayerWithID:(id)anId;
-(void)displayGameComparison:(id)comparison withPlayer:(id)player;
-(void)_goToFriendsTab;
-(void)displayLocalPlayer;
-(void)handleFriendRequestWithQueryDict:(id)queryDict;
@end
