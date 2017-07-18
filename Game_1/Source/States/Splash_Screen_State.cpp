#include "Splash_Screen_State.h"

#include "../Display.h"
#include "Playing_State.h"
#include "../Application.h"

#include "../Resource_Manager/Resource_Holder.h"


namespace   State
{
    //This is what you get when you put class into class(I mean additional splash_screen:: not the splash splash
    Splash_Screen::Splash::Splash(const sf::Texture& texture, float time)
    :   m_sprite    ({Display::WIDTH, Display::HEIGHT})
    ,   m_time      (time)
    ,   m_hasSound  (false)
    {

    }

    Splash_Screen::Splash::Splash(const sf::Texture& texture, const sf::SoundBuffer& buffer, float time)
    :   m_sprite    ({Display::WIDTH, Display::HEIGHT})
    ,   m_sound     (buffer)
    ,   m_time      (time)
    ,   m_hasSound  (true)
    {
        m_sprite.setTexture (&texture);
    }

    void Splash_Screen::Splash::start()
    {
        if(m_hasSound)
        {
            m_sound.play();
        }
        m_timer.restart();
    }

    bool Splash_Screen::Splash::isOver() const
    {
        return (m_timer.getElapsedTime().asSeconds() >= m_time);
    }

    void Splash_Screen::Splash::draw()
    {
        Display::draw(m_sprite);
    }


    Splash_Screen::Splash_Screen(Application& application)
    :   Game_State (application)
    {
        //implementing the splash screens nr 1 and nr 2.
        m_splashes.emplace(Resource_Holder::get().getTexture(Texture_Name::MadeByMatt),
                           Resource_Holder::get().getSoundBuff(Sound_Name::MadeByMatt),
                           2.0f);

        m_splashes.emplace(Resource_Holder::get().getTexture(Texture_Name::MattGames),
                           Resource_Holder::get().getSoundBuff(Sound_Name::MattGames),
                           2.0f);

        m_splashes.front().start();
    }

    void Splash_Screen::input()
    {
        //lacks for players ability to skip the splash screens
    }

    void Splash_Screen::update(float dt)
    {
        //plays the splash screen if the queue is not empty
        if(!m_splashes.empty())
        {
            //changes if the splash screen was running long enough
            if(m_splashes.front().isOver())
                {
                    //pushes the top one off
                    m_splashes.pop();
                    if(!m_splashes.empty())
                    {
                        m_splashes.front().start();

                    }
                }
        }
        else
        {
            //Changes the game state to playing
            m_p_application->changeState(std::make_unique<Playing>(*m_p_application));
        }
    }

    void Splash_Screen::draw()
    {
        //draws if not empty
        if(!m_splashes.empty())
            m_splashes.front().draw();
    }
}
