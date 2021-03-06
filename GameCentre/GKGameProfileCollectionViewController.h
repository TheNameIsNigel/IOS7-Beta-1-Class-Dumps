/* GKGameProfileCollectionViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIPopoverControllerDelegate.h"
#import "UIViewControllerRestoration.h"
#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKSectionHeaderView, GKAchievementsDataSource, GKGameRecommendationInternal, UICollectionReusableView, GKCollectionViewDataSource, GKCollectionViewAggregateDataSource, GKSegmentedSectionDataSource, GKFriendPlayersDataSource, GKGameRecentPlayersDataSource, GKSupplementaryViewMetrics, GKChallengesDataSource, GKLeaderboardScoresDataSource, NSArray, GKGameRecord, UIPopoverController;

__attribute__((visibility("hidden")))
@interface GKGameProfileCollectionViewController : XXUnknownSuperclass <UIViewControllerRestoration, UIActionSheetDelegate, UIPopoverControllerDelegate> {
	BOOL _purchasableGame;
	BOOL _firstAppearance;
	BOOL _hideHeaderOnRotationToLandscape;
	GKGameRecord* _game;
	GKGameRecommendationInternal* _recommendation;
	UICollectionReusableView* _headerView;
	GKCollectionViewDataSource* _leaderboardDataSource;
	GKLeaderboardScoresDataSource* _globalLeaderboardDataSource;
	GKLeaderboardScoresDataSource* _friendsLeaderboardDataSource;
	GKSectionHeaderView* _leaderboardHeader;
	GKAchievementsDataSource* _achievementsDataSource;
	GKCollectionViewAggregateDataSource* _playersDataSource;
	GKFriendPlayersDataSource* _friendPlayersDataSource;
	GKGameRecentPlayersDataSource* _recentPlayersDataSource;
	GKChallengesDataSource* _challengesDataSource;
	GKSegmentedSectionDataSource* _segmentedDataSource;
	GKSupplementaryViewMetrics* _segmentedControlMetrics;
	NSArray* _actionSheetActions;
	int _numberOfLeaderboardColumns;
	UIPopoverController* _detailPopover;
}
@property(retain, nonatomic) UIPopoverController* detailPopover;
@property(assign, nonatomic) BOOL hideHeaderOnRotationToLandscape;
@property(assign, nonatomic) BOOL firstAppearance;
@property(assign, nonatomic) int numberOfLeaderboardColumns;
@property(retain, nonatomic) NSArray* actionSheetActions;
@property(retain, nonatomic) GKSupplementaryViewMetrics* segmentedControlMetrics;
@property(retain, nonatomic) GKSegmentedSectionDataSource* segmentedDataSource;
@property(retain, nonatomic) GKChallengesDataSource* challengesDataSource;
@property(retain, nonatomic) GKGameRecentPlayersDataSource* recentPlayersDataSource;
@property(retain, nonatomic) GKFriendPlayersDataSource* friendPlayersDataSource;
@property(retain, nonatomic) GKCollectionViewAggregateDataSource* playersDataSource;
@property(retain, nonatomic) GKAchievementsDataSource* achievementsDataSource;
@property(retain, nonatomic) GKSectionHeaderView* leaderboardHeader;
@property(retain, nonatomic) GKLeaderboardScoresDataSource* friendsLeaderboardDataSource;
@property(retain, nonatomic) GKLeaderboardScoresDataSource* globalLeaderboardDataSource;
@property(retain, nonatomic) GKCollectionViewDataSource* leaderboardDataSource;
@property(retain, nonatomic) UICollectionReusableView* headerView;
@property(retain, nonatomic) GKGameRecommendationInternal* recommendation;
@property(assign, getter=isPurchasableGame) BOOL purchasableGame;
@property(retain, nonatomic) GKGameRecord* game;
+(id)viewControllerWithRestorationIdentifierPath:(id)restorationIdentifierPath coder:(id)coder;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)encodeRestorableStateWithCoder:(id)coder;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(void)collectionViewController:(id)controller didSelectItemAtIndexPath:(id)indexPath;
-(void)showChallenge:(id)challenge;
-(void)showPlayer:(id)player fromIndexPath:(id)indexPath;
-(void)showLeaderboard:(id)leaderboard;
-(void)showScore:(id)score fromCell:(id)cell leaderboard:(id)leaderboard;
-(void)showScore:(id)score fromIndexPath:(id)indexPath;
-(void)showAchievementDetails:(id)details fromIndexPath:(id)indexPath;
-(void)playGame;
-(void)uninstallGame;
-(void)removeGame;
-(void)shareGame;
-(void)buyGame;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)showActions:(id)actions;
-(void)segmentedSectionDataSource:(id)source inSection:(unsigned)section didSelectDataSourceWithIndex:(int)index;
-(void)updateMetrics;
-(float)headerHeight;
-(void)registerHeaderFactoryForDataSource:(id)dataSource withFormatter:(/*function-pointer*/ void*)formatter;
-(void)configureViewFactories;
-(void)headerViewDidLoad;
-(void)configureDataSource;
-(float)leaderboardRowHeight;
-(void)didEnterLoadedState;
-(id)configureLeaderboardDataSource;
-(void)setLeaderboard:(id)leaderboard;
-(void)showAllLeaderboards:(id)leaderboards;
-(void)didTouchShowMoreGlobal:(id)global;
-(void)didTouchShowMoreFriends:(id)friends;
-(void)addShowcaseCellToMetrics:(id)metrics;
-(void)updateShowcaseCellMetrics;
-(id)segmentedDataSourceForGame:(id)game;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithGame:(id)game purchasableGame:(BOOL)game2;
@end
