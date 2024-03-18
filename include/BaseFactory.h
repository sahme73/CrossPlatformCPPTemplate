#pragma once

#include "WindowsDerived.h"

// Plopping factory in a header because likely requirement of custom type definitions

Base* createBase() {
    #if defined(PLATFORM_WINDOWS)
        return new WindowsDerived();
    #endif
}