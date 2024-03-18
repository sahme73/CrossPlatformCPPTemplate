#include "BaseFactory.h"

int main() {
    std::cout << "Test" << std::endl;

    Base* base = createBase();
    base->operation();
    delete base;

    return 0;
}