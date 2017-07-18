#ifndef PLAYING_STATE_H_INCLUDED
#define PLAYING_STATE_H_INCLUDED

#include "Game_State.h"

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "../Animation.h"


namespace State
{
    //inheriting the game state
    class Playing : public Game_State
    {
    public:
        Playing(Application& application);
        void input  () override;
        void update (float dt) override;
        void draw   () override;

    private:
        //creating a spite to be drawn, a sound to be played and a text to be written
        sf::RectangleShape shape;
        sf::Sound sound;
        sf::Text text;
    //Added the walking animation
        Animation walkAnimation;

    };
}


#endif // PLAYING_STATE_H_INCLUDED
