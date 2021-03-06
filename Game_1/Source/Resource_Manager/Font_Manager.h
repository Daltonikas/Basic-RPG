#ifndef FONT_MANAGER_H_INCLUDED
#define FONT_MANAGER_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <map>

#include "Resource_Manager.h"

enum class Font_Name
{
    Test
};

class Font_Manager : public Resource_Manager <Font_Name, sf::Font>
{
public:
    Font_Manager();
};

#endif // FONT_MANAGER_H_INCLUDED
