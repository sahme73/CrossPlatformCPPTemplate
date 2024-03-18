#pragma once

#include "Platforms.h"

class Base {
    public:
        virtual ~Base() = default;

        virtual void operation() = 0;
};