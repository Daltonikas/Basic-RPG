#ifndef SPLASH_SCREEN_STATE_H_INCLUDED
#define SPLASH_SCREEN_STATE_H_INCLUDED

#include "Game_State.h"

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "../Animation.h"

#include<queue>


namespace State
{
    //inheriting the game state
    class Splash_Screen : public Game_State
    {
        class Splash
        {
            public:
                //constructor for splash screens without sound
                Splash(const sf::Texture& texture, float time);
                //constructor for splash screens with sound
                Splash(const sf::Texture& texture, const sf::SoundBuffer& buffer, float time);

                void input (const sf::Event& e);
                void start();
                bool isOver() const;
                void draw();

            private:
                //for holding our splash screens and sounds
                sf::RectangleShape  m_sprite;
                sf::Sound           m_sound;
                //appearing time, and clock for checking when its time to end it
                float               m_time;
                sf::Clock           m_timer;
                // for describing if the splash screen has sound
                bool                m_hasSound;

        };

        public:
            Splash_Screen(Application& application);
            void input  () override;
            void update (float dt) override;
            void draw   () override;
        private:
            //creating a queue of splash screens
            std::queue<Splash>  m_splashes;
    };
}

#endif // SPLASH_SCREEN_STATE_H_INCLUDED
