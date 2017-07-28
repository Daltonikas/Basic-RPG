#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

#include <cstdint>
#include <SFML/Graphics.hpp>
//I have no clue why this is here
namespace State
{
    class Game_State;
}

namespace Display
{
    //initializes our window
    void init(const std::string& name = "Window");
    //Fro checking if the window is open
    bool isOpen();
    //used to be called draw but now its called update
    void update ();
    //clears and displays that window
    void clear(const sf::Color& colour = {0, 0, 0});
    //draw stuff and we are sending to it anything that sfml considers drawable
    void draw(const sf::Drawable& drawable);
    //For checking what is happening to our window
    void pollEvents(State::Game_State& gameState);
    //
    const sf::RenderWindow& get();
    //Our window resolution
    constexpr uint16_t HEIGHT    = 720;
    constexpr uint16_t WIDTH     = 1280;
}

#endif // DISPLAY_H_INCLUDED
