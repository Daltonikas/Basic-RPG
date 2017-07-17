#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

#include <SFML/Graphics.hpp>

namespace Display
{
    void init();

    void clear();
    void display();

    void draw(const sf::Drawable& drawable);

    void checkWindowEvents();

    bool isOpen();

    constexpr int HEIGHT    = 720;
    constexpr int WIDTH     = 1280;
}

#endif // DISPLAY_H_INCLUDED
