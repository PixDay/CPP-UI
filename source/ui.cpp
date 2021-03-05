/*
** File name :
** ui.cpp
** File creator :
** Adrien Colombier
*/

#include "ui.hpp"

UI::UI():
    _tag("default"),
    _type("default"),
    _position({0.0f, 0.0f}),
    _scale({1.0f, 1.0f}),
    _origin({0.0f, 0.0f}),
    _layout(0),
    _active(true)
{};

// SETTER
void UI::setSprite      (std::string    &texture)
{
    _texture.loadFromFile(texture);
    _sprite.setTexture(_texture, false);
}

void UI::setTag         (std::string    &tag)
{
    _tag = tag;
}

void UI::setType        (std::string    &type)
{
    _type = type;
}

void UI::setPosition    (sf::Vector2f   &position)
{
    _position = position;
}

void UI::setPosition    (float          &x,          float   &y)
{
    _position = (sf::Vector2f){x, y};
}

void UI::setScale       (sf::Vector2f   &scale)
{
    _scale = scale;
}

void UI::setScale       (float          &x,          float   &y)
{
    _scale = (sf::Vector2f){x, y};
}

void UI::setOrigin      (sf::Vector2f   &origin)
{
    _origin = origin;
}

void UI::setOrigin      (float          &x,          float   &y)
{
    _origin = (sf::Vector2f){x, y};
}

void UI::setLayout      (size_t         &layout)
{
    _layout = layout;
}

void UI::setActive      (bool           &active)
{
    _active = active;
}
     