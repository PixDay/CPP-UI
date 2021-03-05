/*
** File name :
** ui.hpp
** File creator :
** Adrien Colombier
*/

#pragma once

#include <SFML/Graphics.hpp>

class UI
{
    public:
        UI();
       ~UI() = default;

        // SETTER
        void setSprite      (std::string    &texture);
        void setTag         (std::string    &tag);
        void setType        (std::string    &type);
        void setPosition    (sf::Vector2f   &position);
        void setPosition    (float          &x,          float   &y);
        void setScale       (sf::Vector2f   &scale);
        void setScale       (float          &x,          float   &y);
        void setOrigin      (sf::Vector2f   &origin);
        void setOrigin      (float          &x,          float   &y);
        void setLayout      (size_t         &layout);
        void setActive      (bool           &active);      

    private:
        sf::Texture         _texture;
        sf::Sprite          _sprite;
        std::string         _tag;
        std::string         _type;
        sf::Vector2f        _position;
        sf::Vector2f        _scale;
        sf::Vector2f        _origin;
        size_t              _layout;
        bool                _active;
};