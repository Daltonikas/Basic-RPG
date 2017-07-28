#include "Playing_State.h"

#include <iostream>//<----------  will have to delete this a some point
#include "../Application.h"
#include "../Display.h"

#include "Game_State.h"


namespace State
{
    Playing::Playing(Application& application)
    :   Game_State (application)
    {
        ///Constructor in witch we add texture to sprites etc...
        //making size of the slime
        shape.setSize({50, 50});
        //describing where to find slime
        shape.setTexture(&Resource_Holder::get().getTexture(Texture_Name::Slime));
        /*text.setFont(Resource_Holder::get().getFont(Font_Name::Test));
        sound.setBuffer(Resource_Holder::get().getSoundBuff(Sound_Name::Test));

        sound.play();*/

        //Adding manually frames(needs automation), that need to be in loading state, witch needs to be crated;
        //walkAnimation.addFrame({LeftEdge, TopEdge, Width, Height},timeForFrame)
        walkAnimation.addFrames(7, {0, 0, 32, 32}, 0.09);
    }
    //For player input
    void Playing::input(const sf::Event& e)
    {
        ///Here we will put the functions that perceive player inputs
    }
    //
    void Playing::input()
    {

    }
    //update function has now reason to be and it is to update slimes frame
    void Playing::update(float dt)
    {
        ///needs game logic: for collision, changing the animations, ...
        shape.setTextureRect(walkAnimation.getFrame());

    }
    //currently draws slime
    void Playing::draw()
    {
        Display::draw(shape);
        //Display::draw(text);
    }

}
