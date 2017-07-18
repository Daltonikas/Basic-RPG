#include "Display.h"

#include <memory>

namespace Display
{
    std::unique_ptr<sf::RenderWindow> window;

    void init()
    {
        window = std::make_unique <sf::RenderWindow>(sf::VideoMode(WIDTH, HEIGHT), "WINDOW");
    }

    void clear()
    {
        window->clear();
    }

    void display()
    {
        window->display();
    }

    void draw(const sf::Drawable& drawable)
    {
        window->draw(drawable);
    }

    void checkWindowEvents()
    {
        sf::Event e;
        while (window->pollEvent(e))
        {
            //Need additional Events likes what will happen to a screen if someone
            //will change its size or minimizes the screen, ect...
            if(e.type == sf::Event::Closed)
                window->close();
        }
    }

    bool isOpen()
    {
        return window->isOpen();
    }
}

