#include "Playing_State.h"

#include <iostream>//<----------  will have to delete this a some point
#include "../Application.h"
#include "../Display.h"


namespace State
{
    Playing::Playing(Application& application)
    :   Game_State (application)
    {
        //making size of the slime
        shape.setSize({500, 500});
        //describing where to find slime
        shape.setTexture(&Resource_Holder::get().getTexture(Texture_Name::Slime));
        /*text.setFont(Resource_Holder::get().getFont(Font_Name::Test));
        sound.setBuffer(Resource_Holder::get().getSoundBuff(Sound_Name::Test));

        sound.play();*/

        //Adding manually frames(needs automation), that need to be in loading state, witch needs to be crated;
        //walkAnimation.addFrame({LeftEdge, TopEdge, Width, Height},timeForFrame)
        walkAnimation.addFrame({0, 0, 16, 16}, 0.09);
        walkAnimation.addFrame({16, 0, 16, 16}, 0.09);
        walkAnimation.addFrame({32, 0, 16, 16}, 0.09);
        walkAnimation.addFrame({48, 0, 16, 16}, 0.09);
        walkAnimation.addFrame({64,0, 16, 16}, 0.09);
        walkAnimation.addFrame({80, 0, 16, 16}, 0.09);
        walkAnimation.addFrame({96, 0, 16, 16}, 0.09);
        walkAnimation.addFrame({112, 0, 16, 16}, 0.09);
        walkAnimation.addFrame({128, 0, 16, 16}, 0.09);
        walkAnimation.addFrame({144, 0, 16, 16}, 0.09);
        walkAnimation.addFrame({160, 0, 16, 16}, 0.09);

    }
    // no input yet for player interaction
    void Playing::input()
    {

    }
    //update function has now reason to be and it is to update slimes frame
    void Playing::update(float dt)
    {
        shape.setTextureRect(walkAnimation.getFrame());

    }
    //currently draws slime
    void Playing::draw()
    {
        Display::draw(shape);
        //Display::draw(text);
    }

}
