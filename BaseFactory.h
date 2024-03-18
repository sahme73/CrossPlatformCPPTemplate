#pragma once

#include "WindowsDerived.h"

Base* createBase() {
    #if defined(PLATFORM_WINDOWS)
        return new WindowsDerived();
    #endif
}