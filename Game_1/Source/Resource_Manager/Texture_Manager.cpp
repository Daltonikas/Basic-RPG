#include "Texture_Manager.h"
//function for adding textures
Texture_Manager::Texture_Manager()
{
    //Severely lacks automation
    addResource(Texture_Name::Idle, "Res/Textures/Face.png");
    addResource(Texture_Name::Slime, "Res/Textures/Slime.png");
    addResource(Texture_Name::MattGames, "Res/Textures/MattGames.png");
    addResource(Texture_Name::MadeByMatt, "Res/Textures/MadeByMatt.png");
}

