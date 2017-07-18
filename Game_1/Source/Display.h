#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

#include <SFML/Graphics.hpp>

namespace Display
{
    //initializes our window
    void init();
    //clears and displays that window
    void clear();
    void display();
    //draw stuff and we are sending to it anything that sfml considers drawable
    void draw(const sf::Drawable& drawable);
    //For checking what is happening to our window
    void checkWindowEvents();

    bool isOpen();
    //Our window resolution
    constexpr int HEIGHT    = 720;
    constexpr int WIDTH     = 1280;
}

#endif // DISPLAY_H_INCLUDED
