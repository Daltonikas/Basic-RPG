#include "Texture_Manager.h"
//function for adding textures
Texture_Manager::Texture_Manager()
{
    addResource(Texture_Name::Test, "Res/Textures/Face.png");
    addResource(Texture_Name::Slime, "Res/Textures/Slime.png");
}

