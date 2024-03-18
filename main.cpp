#include "BaseFactory.h"

int main() {
    Base* base = createBase();
    base->operation();
    delete base;

    return 0;
}