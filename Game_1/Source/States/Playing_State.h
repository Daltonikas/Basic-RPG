#ifndef PLAYING_STATE_H_INCLUDED
#define PLAYING_STATE_H_INCLUDED

#include "Game_State.h"

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


namespace State
{
    class Playing : public Game_State
    {
    public:
        Playing(Application& application);

        void input  () override;
        void update (float dt) override;
        void draw   () override;

    private:
        sf::RectangleShape shape;
        sf::Sound sound;
        sf::Text text;

    };
}


#endif // PLAYING_STATE_H_INCLUDED
