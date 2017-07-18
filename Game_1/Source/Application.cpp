#include "Application.h"
#include "Display.h"

//#include <memory>

#include "States/Splash_Screen_State.h"

Application::Application()
{
    Display::init();
    //Pushing the Splash screen state on top
    pushState(std::make_unique<State::Splash_Screen>(*this));
}

void Application::runMainLoop()
{
    while(Display::isOpen())
    {
        Display::checkWindowEvents();

        Display::clear();

        m_states.top() -> input     ();
        m_states.top() -> update    (0.0f);
        m_states.top() -> draw      ();

        Display::display();
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

