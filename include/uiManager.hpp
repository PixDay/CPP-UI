/*
** File name :
** ui.hpp
** File creator :
** Adrien Colombier
*/

#pragma once

#include <vector>
#include "ui.hpp"

class UIManager
{
    public:
        UIManager();
       ~UIManager() = default;

    private:
        std::vector<UI &> _elements;
};