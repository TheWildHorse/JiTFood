// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import AVFoundation;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSCoder;

/// UIButton Subclass for Capturing Photo and Video with SwiftyCamViewController
SWIFT_CLASS("_TtC9SwiftyCam15SwiftyCamButton")
@interface SwiftyCamButton : UIButton
/// Initialization Declaration
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
/// Initialization Declaration
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;

/// A UIViewController Camera View Subclass
SWIFT_CLASS("_TtC9SwiftyCam23SwiftyCamViewController")
@interface SwiftyCamViewController : UIViewController
/// Maxiumum video duration if SwiftyCamButton is used
@property (nonatomic) double maximumVideoDuration;
/// Sets whether flash is enabled for photo and video capture
@property (nonatomic) BOOL flashEnabled;
/// Sets whether Pinch to Zoom is enabled for the capture session
@property (nonatomic) BOOL pinchToZoom;
/// Sets the maximum zoom scale allowed during gestures gesture
@property (nonatomic) CGFloat maxZoomScale;
/// Sets whether Tap to Focus and Tap to Adjust Exposure is enabled for the capture session
@property (nonatomic) BOOL tapToFocus;
/// Sets whether the capture session should adjust to low light conditions automatically
/// Only supported on iPhone 5 and 5C
@property (nonatomic) BOOL lowLightBoost;
/// Set whether SwiftyCam should allow background audio from other applications
@property (nonatomic) BOOL allowBackgroundAudio;
/// Sets whether a double tap to switch cameras is supported
@property (nonatomic) BOOL doubleTapCameraSwitch;
/// Sets whether swipe vertically to zoom is supported
@property (nonatomic) BOOL swipeToZoom;
/// Sets whether swipe vertically gestures should be inverted
@property (nonatomic) BOOL swipeToZoomInverted;
/// Sets wether the taken photo or video should be oriented according to the device orientation
@property (nonatomic) BOOL shouldUseDeviceOrientation;
/// Returns true if video is currently being recorded
@property (nonatomic, readonly) BOOL isVideoRecording;
/// Returns true if the capture session is currently running
@property (nonatomic, readonly) BOOL isSessionRunning;
/// Disable view autorotation for forced portrait recorindg
@property (nonatomic, readonly) BOOL shouldAutorotate;
/// ViewDidLoad Implementation
- (void)viewDidLoad;
/// ViewDidLayoutSubviews() Implementation
- (void)viewDidLayoutSubviews;
/// ViewDidAppear(_ animated:) Implementation
- (void)viewDidAppear:(BOOL)animated;
/// ViewDidDisappear(_ animated:) Implementation
- (void)viewDidDisappear:(BOOL)animated;
/// Capture photo from current session
/// UIImage will be returned with the SwiftyCamViewControllerDelegate function SwiftyCamDidTakePhoto(photo:)
- (void)takePhoto;
/// Begin recording video of current session
/// SwiftyCamViewControllerDelegate function SwiftyCamDidBeginRecordingVideo() will be called
- (void)startVideoRecording;
/// Stop video recording video of current session
/// SwiftyCamViewControllerDelegate function SwiftyCamDidFinishRecordingVideo() will be called
/// When video has finished processing, the URL to the video location will be returned by SwiftyCamDidFinishProcessingVideoAt(url:)
- (void)stopVideoRecording;
/// Switch between front and rear camera
/// SwiftyCamViewControllerDelegate function SwiftyCamDidSwitchCameras(camera:  will be return the current camera selection
- (void)switchCamera;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIGestureRecognizer;

@interface SwiftyCamViewController (SWIFT_EXTENSION(SwiftyCam)) <UIGestureRecognizerDelegate>
/// Set beginZoomScale when pinch begins
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end

@class AVCaptureFileOutput;

@interface SwiftyCamViewController (SWIFT_EXTENSION(SwiftyCam)) <AVCaptureFileOutputRecordingDelegate>
/// Process newly captured video and write it to temporary directory
- (void)captureOutput:(AVCaptureFileOutput * _Null_unspecified)captureOutput didFinishRecordingToOutputFileAtURL:(NSURL * _Null_unspecified)outputFileURL fromConnections:(NSArray * _Null_unspecified)connections error:(NSError * _Null_unspecified)error;
@end


@interface SwiftyCamViewController (SWIFT_EXTENSION(SwiftyCam))
@end


@interface SwiftyCamViewController (SWIFT_EXTENSION(SwiftyCam))
/// Sets the maximum duration of the SwiftyCamButton
- (double)setMaxiumVideoDuration SWIFT_WARN_UNUSED_RESULT;
/// Set UITapGesture to take photo
- (void)buttonWasTapped;
/// Set UILongPressGesture start to begin video
- (void)buttonDidBeginLongPress;
/// Set UILongPressGesture begin to begin end video
- (void)buttonDidEndLongPress;
/// Called if maximum duration is reached
- (void)longPressDidReachMaximumDuration;
@end

#pragma clang diagnostic pop
