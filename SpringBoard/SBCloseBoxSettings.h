/* SBCloseBoxSettings.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBCloseBoxSettings : XXUnknownSuperclass {
	BOOL _jitterEnabled;
	BOOL _ignoresUninstallability;
	float _adaptiveSaturation;
	float _adaptiveBrightness;
	float _adaptiveAlpha;
	float _adaptiveForegroundAlpha;
}
@property(assign) BOOL ignoresUninstallability;
@property(assign, getter=isJitterEnabled) BOOL jitterEnabled;
@property(assign) float adaptiveForegroundAlpha;
@property(assign) float adaptiveAlpha;
@property(assign) float adaptiveBrightness;
@property(assign) float adaptiveSaturation;
+(id)settingsControllerModule;
-(void)setDefaultValues;
@end
