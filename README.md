# CrossPlatformCPPTemplate
a template for building platform/compiler independent cpp software

`cmake -S . -B build -DCMAKE_INSTALL_PREFIX=.`

`cmake --build build`

`cmake --install build`

DEBUG:

`cmake -S . -B build -DCMAKE_INSTALL_PREFIX=. -DCMAKE_BUILD_TYPE=DEBUG`

`cmake --build build`