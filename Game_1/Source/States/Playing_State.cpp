#include "Playing_State.h"

#include <iostream>//<----------  will have to delete this a some point
#include "../Application.h"
#include "../Display.h"

namespace State
{
    Playing::Playing(Application& application)
    :   Game_State (application)
    {
        shape.setSize({500, 500});
        text.setString("Hello");

        shape.setTexture(&Resource_Holder::get().getTexture(Texture_Name::Test));
        text.setFont(Resource_Holder::get().getFont(Font_Name::Test));
        sound.setBuffer(Resource_Holder::get().getSoundBuff(Sound_Name::Test));

        sound.play();
    }

    void Playing::input()
    {

    }

    void Playing::update(float dt)
    {


    }
    void Playing::draw()
    {
        Display::draw(shape);
        Display::draw(text);

    }

}
