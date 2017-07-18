#ifndef TEXTURE_MANAGER_H_INCLUDED
#define TEXTURE_MANAGER_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <map>

#include"Resource_Manager.h"
//class for holding different textures
enum class Texture_Name
{
    Test,
    Slime,
};
//class for adding textures
class Texture_Manager : public Resource_Manager<Texture_Name, sf::Texture>
{
public:
    Texture_Manager();
};

#endif // TEXTURE_MANAGER_H_INCLUDED
