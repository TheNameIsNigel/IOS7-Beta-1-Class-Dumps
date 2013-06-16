/* CalendarLandscapeViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileCal-Structs.h"
#import "CanHandleEventShowing.h"
#import "EKDayTimeViewDelegate.h"
#import "CalendarMainView.h"
#import "CalendarLandscapeWeekViewDataSource.h"
#import "CalendarLandscapeWeekGroupDelegate.h"
#import "EKEventGestureControllerDelegate.h"
#import "ABPersonViewControllerDelegate.h"
#import "EKEventViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EKEventGestureController, UIView, EKCalendarDate, CalendarLandscapeTimeView, CalendarModel, NSMutableArray, UIScrollView;
@protocol CalendarLandscapeViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CalendarLandscapeViewController : XXUnknownSuperclass <EKEventViewDelegate, ABPersonViewControllerDelegate, EKDayTimeViewDelegate, UIScrollViewDelegate, CalendarLandscapeWeekViewDataSource, CalendarLandscapeWeekGroupDelegate, CalendarMainView, EKEventGestureControllerDelegate, CanHandleEventShowing> {
@private
	CalendarModel* _model;
@protected
	CalendarLandscapeTimeView* _timeView;
	EKCalendarDate* _displayedDate;
	EKCalendarDate* _referenceWeekStart;
	float _weekWidth;
	NSMutableArray* _reusableViews;
	NSRange _visibleRange;
	NSMutableArray* _visibleWeeks;
	CGSize _lastBoundsSize;
@private
	BOOL _initialShow;
@protected
	BOOL _updatingHeaderHeights;
@private
	BOOL _updatingAllDayContentOffset;
	int _lastScrollPositionSecond;
@protected
	float _cachedHeaderHeight;
	int _currentlyDisplayedMonth;
	UIScrollView* _weekScroller;
	UIView* _allDayDividerLineView;
	EKEventGestureController* _eventGestureController;
	id<CalendarLandscapeViewControllerDelegate> _delegate;
}
@property(readonly, assign, nonatomic) CalendarModel* model;
@property(assign, nonatomic) __weak id<CalendarLandscapeViewControllerDelegate> delegate;
@property(copy, nonatomic) EKCalendarDate* displayedDate;
-(void).cxx_destruct;
-(id)bestDateForNewEvent;
-(void)setShowDayTitles:(BOOL)titles;
-(CGRect)circleFrame;
-(id)_labelWithString:(id)string font:(id)font centeredInFrame:(CGRect)frame;
-(int)dayIndexForToday;
-(id)weekDayLabels;
-(id)dayNumberLabels;
-(void)_updateTimeViewMonthString;
-(void)_updateHeaderHeights;
-(CGRect)currentTimeRectInView:(id)view;
-(void)eventViewController:(id)controller didCompleteWithAction:(int)action;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)showEvent:(id)event animated:(BOOL)animated;
-(void)emptySpaceClickedOnDate:(id)date;
-(void)emptySpaceClick;
-(BOOL)didScrollWhenEventGestureController:(id)controller scrollTimerFiredToMoveLeft:(BOOL)moveLeft right:(BOOL)right vertically:(BOOL)vertically towardPoint:(CGPoint)point;
-(float)_widthForDayAtPoint:(CGPoint)point isMovingRight:(BOOL)right;
-(void)eventGestureControllerDidMoveAfterEditorChange:(id)eventGestureController;
-(void)eventGestureController:(id)controller didSingleTapOccurrence:(id)occurrence;
-(void)eventGestureController:(id)controller didCancelEditingOccurrence:(id)occurrence fadedOut:(BOOL)anOut;
-(BOOL)eventGestureController:(id)controller didCommitOccurrence:(id)occurrence toDate:(double)date isAllDay:(BOOL)day span:(int)span;
-(void)eventGestureController:(id)controller didMoveToDate:(double)date isAllDay:(BOOL)day;
-(void)eventGestureController:(id)controller didSetUpAtDate:(double)date isAllDay:(BOOL)day;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)eventGestureController;
-(float)eventGestureController:(id)controller heightForOccurrenceViewOfDuration:(double)duration allDay:(BOOL)day;
-(float)eventGestureController:(id)controller widthForOccurrenceViewOfDays:(unsigned)days;
-(CGPoint)eventGestureController:(id)controller pointAtDate:(double)date isAllDay:(BOOL)day;
-(double)eventGestureController:(id)controller dateAtPoint:(CGPoint)point;
-(BOOL)eventGestureController:(id)controller isAllDayAtPoint:(CGPoint)point requireInsistence:(BOOL)insistence;
-(id)eventGestureController:(id)controller occurrenceViewAtPoint:(CGPoint)point;
-(float)eventGestureController:(id)controller yPositionPerhapsMatchingAllDayOccurrence:(id)occurrence atPoint:(CGPoint)point;
-(id)createEventForEventGestureController:(id)eventGestureController;
-(void)eventGestureController:(id)controller adjustDraggingViewForAllDay:(BOOL)allDay;
-(id)createOccurrenceViewForEventGestureController:(id)eventGestureController;
-(float)computeXDragOffsetForEventGestureController:(id)eventGestureController currentX:(float)x startX:(float)x3;
-(BOOL)moreThanOneDayVisibleForEventGestureController:(id)eventGestureController;
-(float)timedRegionOriginForEventGestureController:(id)eventGestureController;
-(CGRect)marginFrameForEventGestureController:(id)eventGestureController;
-(float)eventGestureController:(id)controller convertXForMargin:(float)margin;
-(id)occurrenceViewSuperviewForEventGestureController:(id)eventGestureController;
-(id)touchTrackingViewForEventGestureController:(id)eventGestureController;
-(void)_removeDateHighlight;
-(void)_highlightDayViewDate:(double)date isAllDay:(BOOL)day;
-(void)_highlightDayViewCalendarDate:(id)date isAllDay:(BOOL)day;
-(void)eventGestureController:(id)controller addViewToScroller:(id)scroller isAllDay:(BOOL)day;
-(void)editorDidCancelEditingEvent:(id)editor;
-(void)editorDidDeleteEvent:(id)editor;
-(void)editorDidSaveEvent:(id)editor;
-(id)occurrenceViewAtPoint:(CGPoint)point;
-(id)_viewForEvent:(id)event;
-(CGPoint)pointAtDate:(double)date isAllDay:(BOOL)day;
-(id)dayDateAtPoint:(CGPoint)point;
-(id)dateAtPoint:(CGPoint)point isAllDay:(BOOL*)day;
-(id)dateAtPoint:(CGPoint)point isAllDay:(BOOL*)day requireAllDayRegionInsistence:(BOOL)insistence;
-(id)_weekGroupForPoint:(CGPoint)point;
-(id)_firstWeekGroup;
-(void)setDisplayedDate:(id)date animated:(BOOL)animated;
-(void)_scrollToCurrentTimeOfDay;
-(void)_scrollToDisplayedDateAnimated:(BOOL)displayedDateAnimated;
-(float)_xOffsetForDate:(id)date;
-(void)_adjustVisibleOccurrenceLabelsAnimated:(BOOL)animated;
-(void)weekGroupViewDidLayout:(id)weekGroupView;
-(void)_synchronizeWeekGroupScrollingToWeek:(id)week;
-(void)weekGroupDidScroll:(id)weekGroup;
-(void)didEditEvent:(id)event;
-(void)weekGroup:(id)group didSelectEvent:(id)event;
-(id)weekGroupForWeekAfter:(id)weekAfter;
-(id)weekGroupForWeekBefore:(id)weekBefore;
-(void)weekGroupAllDaySectionDidScroll:(id)weekGroupAllDaySection;
-(id)weekView:(id)view eventsForStartDate:(id)startDate endDate:(id)date;
-(void)_reloadData;
-(void)loaderEventsChanged:(id)changed;
-(void)_occurrencesChanged:(id)changed;
-(void)_draggingDone;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(id)_snapDateForOffset:(CGPoint)offset snapToWeeks:(BOOL)weeks;
-(void)snapTargetScrollOffset:(inout CGPoint*)offset withVelocity:(CGPoint)velocity snapToWeeksOnFlicks:(BOOL)weeksOnFlicks;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)_updateTimeMarker;
-(void)_layoutCells;
-(NSRange)_visibleRangeForOffset:(float)offset;
-(void)_reuseWeekView:(id)view;
-(id)_createPreparedViewForWeek:(int)week;
-(id)_dateForWeek:(int)week;
-(CGRect)_boundsForWeek:(int)week;
-(void)padAllDayView:(id)view occurrenceClicked:(id)clicked onDay:(double)day;
-(void)occurrenceClicked:(id)clicked onDay:(double)day;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)_localeChanged;
-(void)_resizeWeekGroupsIfNeededForOrientation:(int)orientation;
-(void)viewDidLoad;
-(void)loadView;
-(void)dealloc;
-(id)initWithModel:(id)model;
@end