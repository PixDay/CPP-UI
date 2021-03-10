#include <iostream>
#include "ui.hpp"

int main(void)
{   
    UI ui = UI();
    auto tag = std::string("Adedigado");
    
    ui.setTag(tag);
    std::cout << "Hello CMake hey look my UI tag : " << ui.getTag() << std::endl;
    return 0;
}