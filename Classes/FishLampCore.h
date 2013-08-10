//
//  FishLampCore.h
//  FLCore
//
//  Copyright (c) 2013 GreenTongue Software LLC, Mike Fullerton.
//  The FishLamp Framework is released under the MIT License: http://fishlamp.com/license 
//

// Prerequisites

#ifndef FISHLAMP
#error FISHLAMP not defined
#endif

#ifndef FISHLAMP_TARGET
#error FISHLAMP_TARGET not defined
#endif

#import <Foundation/Foundation.h>
#import <Availability.h>

#if DEBUG
    #define FL_SHIP_ONLY_INLINE 
#else
    #define FL_SHIP_ONLY_INLINE NS_INLINE
#endif

#import <FishLampCore/FLCoreRequired.h>
#import <FishLampCore/FishLampVersion.h>
// TODO: push these out to the frameworks?
#if IOS
    #import <UIKit/UIKit.h>
    #import <CoreGraphics/CoreGraphics.h>
    #import <MobileCoreServices/MobileCoreServices.h>
    #import <ImageIO/ImageIO.h>
#else
    #import <Cocoa/Cocoa.h>
    #import <AppKit/AppKit.h>
    #import <CoreServices/CoreServices.h>
#endif

// Errors
#import <FishLampCore/FLExceptions.h>
#import <FishLampCore/FLAssertionFailedError.h>
#import <FishLampCore/FLAssertionFailureErrorDomain.h>
#import <FishLampCore/FLAssertions.h>
#import <FishLampCore/FLCancelError.h>
#import <FishLampCore/FLConfirmations.h>
#import <FishLampCore/FLErrorException.h>
#import <FishLampCore/FLErrorCodes.h>
#import <FishLampCore/FLMutableError.h>
#import <FishLampCore/FLStackTrace.h>
#import <FishLampCore/NSError+FLExtras.h>

// Logger
#import <FishLampCore/FLLog.h>
#import <FishLampCore/FLLogSink.h>
#import <FishLampCore/FLLogEntry.h>
#import <FishLampCore/FLConsoleLogSink.h>
#import <FishLampCore/FLLogger.h>
#import <FishLampCore/FLPrintf.h>

// Properties
#import <FishLampCore/FLAssociatedProperty.h>
#import <FishLampCore/FLAtomicProperties.h>
#import <FishLampCore/FLBitFlagsProperty.h>
#import <FishLampCore/FLDefaultProperty.h>
#import <FishLampCore/FLProperties.h>
#import <FishLampCore/FLSingletonProperty.h>
#import <FishLampCore/FLStaticMemberProperty.h>
#import <FishLampCore/FLStructFlagsProperty.h>

#import <FishLampCore/FLPrettyString.h>
#import <FishLampCore/FLStringFormatter.h>
#import <FishLampCore/FLStringUtils.h>
#import <FishLampCore/FLWhitespace.h>

// Utilities
#import <FishLampCore/FLAtomic.h>
#import <FishLampCore/FLBitFlags.h>
#import <FishLampCore/FLOSVersion.h>
#import <FishLampCore/FLSelectorPerforming.h>
#import <FishLampCore/FLVersion.h>
#import <FishLampCore/NSArray+FLExtras.h>
#import <FishLampCore/NSDictionary+FLAdditions.h>
#import <FishLampCore/NSObject+Blocks.h>
#import <FishLampCore/FLMath.h>

// observing and messaging
#import <FishLampCore/FLBroadcaster.h>
#import <FishLampCore/FLObservable.h>

/*
    // Runtime
    #import <FishLampCore/FLObjcRuntime.h>
    #import <FishLampCore/FLPropertyAttributes.h>
    #import <FishLampCore/FLRuntimeInfo.h>
    #import <FishLampCore/FLSelector.h>

    // Strings
    #import <FishLampCore/FLCharString.h>

*/

