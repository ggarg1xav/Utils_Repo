/* List of defines generated by configure. Included with preprocessor flag,
 * -include, to avoid long list of -D defines on the compile command-line.
 * Do not edit.
 */

#ifndef MOZILLA_CONFIG_H
#define MOZILLA_CONFIG_H

#if defined(__clang__)
#pragma clang diagnostic push
#if __has_warning("-Wreserved-id-macro")
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#endif

// Expands to all the defines from configure.
#define ACCESSIBILITY 1
#define BUILD_CTYPES 1
#define D_INO d_ino
#define ENABLE_INTL_API 1
#define ENABLE_MARIONETTE 1
#define ENABLE_SYSTEM_EXTENSION_DIRS 1
#define ENABLE_TESTS 1
#define EXPOSE_INTL_API 1
#define FIREFOX_VERSION 47.0.1
#define FORCE_PR_LOG 1
#define GL_PROVIDER_ 1
#define GTEST_HAS_RTTI 0
#define HAVE_64BIT_BUILD 1
#define HAVE_FORCEINLINE 1
#define HAVE_INTTYPES_H 1
#define HAVE_IO_H 1
#define HAVE_ISATTY 1
#define HAVE_LOCALECONV 1
#define HAVE_MALLOC_H 1
#define HAVE_SEH_EXCEPTIONS 1
#define HAVE_SETBUF 1
#define HAVE_SNPRINTF 1
#define HAVE_STDINT_H 1
#define HAVE_UINT64_T 1
#define HW_THREADS 1
#define JS_DEFAULT_JITREPORT_GRANULARITY 3
#define MALLOC_H <malloc.h>
#define MALLOC_USABLE_SIZE_CONST_PTR const
#define MOZILLA_OFFICIAL 1
#define MOZILLA_UAVERSION "47.0"
#define MOZILLA_VERSION "47.0.1"
#define MOZILLA_VERSION_U 47.0.1
#define MOZ_ACTIVITIES 1
#define MOZ_APP_UA_NAME ""
#define MOZ_APP_UA_VERSION "47.0.1"
#define MOZ_B2G_OS_NAME ""
#define MOZ_B2G_VERSION "1.0.0"
#define MOZ_BUILD_APP browser
#define MOZ_CRASHREPORTER 1
#define MOZ_CRASHREPORTER_ENABLE_PERCENT 100
#define MOZ_DATA_REPORTING 1
#define MOZ_DEBUG_SYMBOLS 1
#define MOZ_DIRECTSHOW 1
#define MOZ_DISTRIBUTION_ID "org.mozilla"
#define MOZ_DLL_SUFFIX ".dll"
#define MOZ_EME 1
#define MOZ_ENABLE_PROFILER_SPS 1
#define MOZ_ENABLE_SIGNMAR 1
#define MOZ_ENABLE_SKIA 1
#define MOZ_FEEDS 1
#define MOZ_FFVPX 1
#define MOZ_FMP4 1
#define MOZ_GAMEPAD 1
#define MOZ_GMP_SANDBOX 1
#define MOZ_INSTRUMENT_EVENT_LOOP 1
#define MOZ_JSDOWNLOADS 1
#define MOZ_LIBAV_FFT 1
#define MOZ_LOGGING 1
#define MOZ_MACBUNDLE_ID org.mozilla.firefox
#define MOZ_MAINTENANCE_SERVICE 1
#define MOZ_MEDIA_NAVIGATOR 1
#define MOZ_MEMORY 1
#define MOZ_MEMORY_WINDOWS 1
#define MOZ_MSVC_STL_WRAP_RAISE 1
#define MOZ_OFFICIAL_BRANDING 1
#define MOZ_OMNIJAR 1
#define MOZ_PAY 1
#define MOZ_PDF_PRINTING 1
#define MOZ_PEERCONNECTION 1
#define MOZ_PERMISSIONS 1
#define MOZ_PHOENIX 1
#define MOZ_PLACES 1
#define MOZ_PROFILELOCKING 1
#define MOZ_RAW 1
#define MOZ_SAFE_BROWSING 1
#define MOZ_SAMPLE_TYPE_FLOAT32 1
#define MOZ_SANDBOX 1
#define MOZ_SCTP 1
#define MOZ_SECUREELEMENT 1
#define MOZ_SERVICES_CLOUDSYNC 1
#define MOZ_SERVICES_COMMON 1
#define MOZ_SERVICES_CRYPTO 1
#define MOZ_SERVICES_HEALTHREPORT 1
#define MOZ_SERVICES_SYNC 1
#define MOZ_SOCIAL 1
#define MOZ_SRTP 1
#define MOZ_STATIC_JS 1
#define MOZ_TELEMETRY_REPORTING 1
#define MOZ_TREE_CAIRO 1
#define MOZ_TREE_PIXMAN 1
#define MOZ_UPDATER 1
#define MOZ_UPDATE_CHANNEL release
#define MOZ_URL_CLASSIFIER 1
#define MOZ_USER_DIR "Mozilla"
#define MOZ_VERIFY_MAR_SIGNATURE 1
#define MOZ_VORBIS 1
#define MOZ_VPX_ERROR_CONCEALMENT 1
#define MOZ_VPX_NO_MEM_REPORTING 1
#define MOZ_WEBAPP_RUNTIME 1
#define MOZ_WEBGL_CONFORMANT 1
#define MOZ_WEBM_ENCODER 1
#define MOZ_WEBRTC 1
#define MOZ_WEBRTC_ASSERT_ALWAYS 1
#define MOZ_WEBRTC_SIGNALING 1
#define MOZ_WEBSPEECH 1
#define MOZ_WEBSPEECH_TEST_BACKEND 1
#define MOZ_WINSDK_MAXVER 0x06030000
#define MOZ_WINSDK_TARGETVER 0x06030000
#define MOZ_WMF 1
#define MOZ_XUL 1
#define NOMINMAX 1
#define NO_NSPR_10_SUPPORT 1
#define NO_X11 1
#define NS_ENABLE_TSF 1
#define NS_PRINTING 1
#define NS_PRINT_PREVIEW 1
#define RELEASE_BUILD 1
#define STDC_HEADERS 1
#define TARGET_XPCOM_ABI "x86_64-msvc"
#define USE_SKIA 1
#define USE_SKIA_GPU 1
#define U_USING_ICU_NAMESPACE 0
#define VPX_X86_ASM 1
#define WIN32 1
#define WIN32_LEAN_AND_MEAN 1
#define WINVER 0x502
#define XP_WIN 1
#define XP_WIN32 1
#define X_DISPLAY_MISSING 1
#define _AMD64_ 1
#define _CRT_NONSTDC_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _USE_MATH_DEFINES 1
#define _VARIADIC_MAX 10
#define _WIN32_IE 0x0603
#define _WIN32_WINNT 0x502
#define _WINDOWS 1

/*
 * The c99 defining the limit macros (UINT32_MAX for example), says:
 *
 *   C++ implementations should define these macros only when
 *   __STDC_LIMIT_MACROS is defined before <stdint.h> is included.
 *
 * The same also occurs with __STDC_CONSTANT_MACROS for the constant macros
 * (INT8_C for example) used to specify a literal constant of the proper type,
 * and with __STDC_FORMAT_MACROS for the format macros (PRId32 for example) used
 * with the fprintf function family.
 */
#define __STDC_LIMIT_MACROS
#define __STDC_CONSTANT_MACROS
#if !defined(__STDC_FORMAT_MACROS)
#define __STDC_FORMAT_MACROS
#endif

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

/*
 * Force-include Char16.h in order to define PRUnichar as char16_t everywhere.
 * Note that this should be the first #include to make sure that prtypes.h does
 * not attempt to define PRUnichar.  This includes the following hunspell-specific
 * includes.
 */
#if !defined(__ASSEMBLER__)
#include "mozilla/Char16.h"
#endif

/*
 * Force-include hunspell_alloc_hooks.h and hunspell_fopen_hooks.h for hunspell,
 * so that we don't need to modify them directly.
 *
 * HUNSPELL_STATIC is defined in extensions/spellcheck/hunspell/src/Makefile.in,
 * unless --enable-system-hunspell is defined.
 */
#if defined(HUNSPELL_STATIC)
#include "hunspell_alloc_hooks.h"
#include "hunspell_fopen_hooks.h"
#endif

/*
 * Force-include sdkdecls.h for building the chromium sandbox code.
 *
 * CHROMIUM_SANDBOX_BUILD is defined in security/sandbox/moz.build.
 * Note that this include path relies on the LOCAL_INCLUDES in that file.
 */
#if defined(CHROMIUM_SANDBOX_BUILD) && defined(XP_WIN)
#include "base/win/sdkdecls.h"
#endif

#endif /* MOZILLA_CONFIG_H */
