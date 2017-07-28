#ifndef GAME_STATE_H_INCLUDED
#define GAME_STATE_H_INCLUDED

#include "../Resource_Manager/Resource_Holder.h"

class Application;

namespace State
{
    class Game_State
    {
    public:
        Game_State(Application& application);
        //Making this state a default state, but before that need fixing
        virtual ~Game_State() = default;

        //For player interaction
        virtual void input (const sf::Event& e) = 0;

        virtual void input  () = 0;
        virtual void update (float dt) = 0;
        virtual void draw   () = 0;

    protected:
        Application* m_p_application;
    };
}

#endif // GAME_STATE_H_INCLUDED
