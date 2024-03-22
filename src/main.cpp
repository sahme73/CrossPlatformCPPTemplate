#include "BaseFactory.h"

int main() {
    std::cout << "Test" << std::endl;

    Base* base = createBase();
    if (base) base->operation();
    delete base;

    return 0;
}