/*
*  DEFINES.H
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/

//APPLICATION
#define APPLICATION_NAME "Merge Engine"

//TYPEDEFS
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef long long unsigned int u64;
typedef char b8;
typedef bool b32;
typedef float f32;
typedef double f64;

//WINDOW
#define DEFAULT_WINDOW_WIDTH 850
#define DEFAULT_WINDOW_HEIGHT 620

//PLATFORM
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#define MPLATFORM_WINDOWS 1
#ifndef _WIN64
#error "This engine only runs on x64-bit versions"
#endif
#elif defined(__linux__) || defined(__gnu__linux__)
#define MPLATFORM_LINUX 1
#if defined(__ANDROID__)
#define MPLATFORM_ANDROID 1
#endif
#elif defined(__unix__)
#define MPLATFORM_APPLE 1
#else
#error "No platform found!"
#endif

//COMPILERS

//OTHERS
#define INLINE inline
#define FORCE_INLINE __forceinline
