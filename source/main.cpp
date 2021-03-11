#include <iostream>
#include "ui.hpp"

int main(void)
{   
    UI ui = UI();

    std::cout << "Hello CMake hey look my UI tag : " << ui.getTag() << std::endl;
    return 0;
}