#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "LYKit.h"

FOUNDATION_EXPORT double LYKitVersionNumber;
FOUNDATION_EXPORT const unsigned char LYKitVersionString[];

