#include "Application.h"

#include <iostream>

//#include <memory>
#include "Util/Random.h"
#include "Display.h"

#include "States/Splash_Screen_State.h"
#include "States/Playing_State.h"

Application::Application()
{
    //initiating the window
    Display::init("Basic Rpg v1.0");
    //initializing the rng
    Random::init();
    //Pushing the Splash screen state on top, basically commanding to start at splash screen tho need additional implimitation
    //pushState(std::make_unique<State::Splash_Screen>(*this)); <-to start at the splash screen
    pushState(std::make_unique<State::Playing>(*this));
}

void Application::runMainLoop()
{
    //main look will run till you close window
    while(Display::isOpen())
    {
        //
        sf::Clock c;

        auto dt = c.restart().asSeconds();

        Display::clear({50, 50, 100});

        m_states.top()->input   ();
        m_states.top()->update  (dt);
        m_states.top()->draw    ();

        Display::update         ();
        //calculateFPS            ();

        Display::pollEvents(*m_states.top());
    }
}

void Application::pushState(std::unique_ptr<State::Game_State>state)
{
    m_states.push(std::move(state));
}

void Application::popState()
{
    m_states.pop();
}

void Application::changeState(std::unique_ptr<State::Game_State>state)
{
    popState    ();
    pushState   (std::move(state));
}

