#include "Sound_Manager.h"

Sound_Manager::Sound_Manager()
{
    addResource(Sound_Name::Test, "Res/Sounds/Sound.ogg");
    addResource(Sound_Name::MattGames, "Res/Sounds/MattGames.ogg");
    addResource(Sound_Name::MadeByMatt, "Res/Sounds/MadeByMatt.ogg");
}

