/**
 * CoreFoundation Version Header
 *
 * by HASHBANG Productions <http://hbang.ws>
 * WTFPL <http://wtfpl.net>
 *
 * 2.0	478.23
 * 2.1	478.26
 * 2.2	478.29
 * 3.0	478.47
 * 3.1	478.52
 * 3.2	478.61
 * 4.0	550.32
 * 4.1	550.38
 * 4.2	550.52
 * 4.3	550.58
 * 5.0	675.00
 * 5.1	690.10
 * 6.x	793.00
 */

/**
 * iOS 2.0 - 4.2 are defined in CoreFoundation/CFBase.h.
 * The format prior to 4.0 is kCFCoreFoundationVersionNumber_iPhoneOS_X_Y
 * 4.0 and newer have the format kCFCoreFoundationVersionNumber_iOS_X_Y
 */

#import <CoreFoundation/CFBase.h>

/**
 * The weird thing about those #defines is that some newer ones don't
 * exist in newer SDKs. Let's define version numbers all the way up to
 * the latest.
 */

#ifndef kCFCoreFoundationVersionNumber_iOS_4_3
#define kCFCoreFoundationVersionNumber_iOS_4_3 550.58
#endif

#ifndef kCFCoreFoundationVersionNumber_iOS_5_0
#define kCFCoreFoundationVersionNumber_iOS_5_0 675.00
#endif

#ifndef kCFCoreFoundationVersionNumber_iOS_5_1
#define kCFCoreFoundationVersionNumber_iOS_5_1 690.10
#endif

#ifndef kCFCoreFoundationVersionNumber_iOS_6_0
#define kCFCoreFoundationVersionNumber_iOS_6_0 793.00
#endif

#ifndef kCFCoreFoundationVersionNumber_iOS_6_1
#define kCFCoreFoundationVersionNumber_iOS_6_1 793.00
#endif

/**
 * Let's also define some useful functions to check which firmware
 * the user is on. (Note that feature detection is highly
 * recommended where possible)
 *
 * First up are some general checks of the major version, then
 * separate quick macros for checking particular minor versions.
 */

#define IS_IOS_2 (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_iPhoneOS_2_0 && kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber_iPhoneOS_3_0)
#define IS_IOS_3 (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_iPhoneOS_3_0 && kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber_iOS_4_0)
#define IS_IOS_4 (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_iOS_4_0 && kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber_iOS_5_0)
#define IS_IOS_5 (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_iOS_5_0 && kCFCoreFoundationVersionNumber < kCFCoreFoundationVersionNumber_iOS_6_0)
#define IS_IOS_6 (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_iOS_6_0)

#define IS_IOS_2_0 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iPhoneOS_2_0)
#define IS_IOS_2_1 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iPhoneOS_2_1)
#define IS_IOS_2_2 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iPhoneOS_2_2)
#define IS_IOS_3_0 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iPhoneOS_3_0)
#define IS_IOS_3_1 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iPhoneOS_3_1)
#define IS_IOS_3_2 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iPhoneOS_3_2)
#define IS_IOS_4_0 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iOS_4_0)
#define IS_IOS_4_1 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iOS_4_1)
#define IS_IOS_4_2 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iOS_4_2)
#define IS_IOS_4_3 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iOS_4_3)
#define IS_IOS_5_0 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iOS_5_0)
#define IS_IOS_5_1 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iOS_5_1)
#define IS_IOS_6_0 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iOS_6_0)
#define IS_IOS_6_1 (kCFCoreFoundationVersionNumber == kCFCoreFoundationVersionNumber_iOS_6_1)

/**
 * Sometimes those functions aren't all that helpful, so
 * here's some more that check if the device is on a firmware
 * that's older or newer than a version or between two
 * specified versions.
 */

#define IS_IOS_OR_OLDER(version) (kCFCoreFoundationVersionNumber <= kCFCoreFoundationVersionNumber_##version)
#define IS_IOS_OR_NEWER(version) (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_##version)
#define IS_IOS_BETWEEN(start, end) (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_##start && kCFCoreFoundationVersionNumber <= kCFCoreFoundationVersionNumber_##end)
