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

        void input (const sf::Event& e);
        void input  () override;
        void update (float dt) override;
        void draw   () override;

    private:
        ///in here you add the text boxes and sprites to be drawn, sound to be played, and music to be played
        ///if its animated you must add animation thats animates the sprite
        //creating a spite to be drawn, a sound to be played and a text to be written
        sf::RectangleShape shape;
        sf::Sound sound;
        sf::Text text;
        //Added the walking animation
        Animation walkAnimation;

    };
}


#endif // PLAYING_STATE_H_INCLUDED
