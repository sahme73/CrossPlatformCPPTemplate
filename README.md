# CrossPlatformCPPTemplate
A template for building platform/compiler independent C++ software.

BASH:

`cmake -S . -B build -DCMAKE_INSTALL_PREFIX=.`

`cmake --build build`

`cmake --install build`

POWERSHELL:

`cmake -S . -B build -DCMAKE_INSTALL_PREFIX="${PWD}"`

`cmake --build build`

`cmake --install build`

DEBUG:

add `-DCMAKE_BUILD_TYPE=DEBUG`

`cmake --build build`