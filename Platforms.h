#pragma once

// Platform-specific macros

#if defined(_WIN32) || defined(_WIN64)
    #define PLATFORM_WINDOWS
#elif defined(__APPLE__)
    #define PLATFORM_MAC
#elif defined(__unix__) || defined(__unix) || defined(unix) || defined(__linux__)
    #define PLATFORM_UNIX
#endif