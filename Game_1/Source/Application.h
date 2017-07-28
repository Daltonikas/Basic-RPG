#ifndef APPLICATION_H_INCLUDED
#define APPLICATION_H_INCLUDED

#include <memory>
#include <stack>

#include "States/Game_State.h"
#include "Resource_Manager/Resource_Holder.h"

class Application
{
    public:
        Application();

        void runMainLoop();

        void pushState (std::unique_ptr<State::Game_State> state);
        void popState ();

        void changeState(std::unique_ptr<State::Game_State> state);

    private:
        //our state stack;
        std::stack<std::unique_ptr<State::Game_State>> m_states;
        //For storing those sweet ass tunes
        sf::Music m_music;

};


#endif // APPLICATION_H_INCLUDED
