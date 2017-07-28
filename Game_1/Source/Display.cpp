#include "Display.h"

#include "States/Game_State.h"

#include <memory>

namespace Display
{
    namespace
    {
        sf::RenderWindow window;
        sf::Image icon;

        void checkForClose(const sf::Event& e)
        {
            if (e.type == sf::Event::Closed)
            {
                window.close();
            }
        }
    }

    void init(const std::string& name)
    {
        window.create(  {WIDTH, HEIGHT},
                        name,
                        sf::Style::Close);
    }

    bool isOpen()
    {
        return window.isOpen();
    }

    void update()
    {
        window.display();
    }

    void clear(const sf::Color& colour)
    {
        window.clear(colour);
    }

    void draw(const sf::Drawable& drawable)
    {
        window.draw(drawable);
    }

    void pollEvents(State::Game_State& gameState)
    {
        //Creating an event holder e
        sf::Event e;
        while (window.pollEvent(e))
        {
            //Checking for player interactions
            gameState.input(e);
            //Checking if the window has been closed
            checkForClose(e);
        }
    }

    const sf::RenderWindow& get()
    {
        return window;
    }
}

