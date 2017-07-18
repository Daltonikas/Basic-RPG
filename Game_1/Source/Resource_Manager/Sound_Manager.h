#ifndef SOUND_MANAGER_H_INCLUDED
#define SOUND_MANAGER_H_INCLUDED

#include <SFML/Audio.hpp>
#include <map>

#include "Resource_Manager.h"

enum class Sound_Name
{
    Test,
    MattGames,
    MadeByMatt,
};

class Sound_Manager : public Resource_Manager<Sound_Name, sf::SoundBuffer>
{
public:
    Sound_Manager();
};

#endif // SOUND_MANAGER_H_INCLUDED
