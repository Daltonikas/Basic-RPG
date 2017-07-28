#ifndef RESOURCE_MANAGER_H_INCLUDED
#define RESOURCE_MANAGER_H_INCLUDED

#include <map>
#include <stdexcept>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

template<typename Enum, typename Resource>
class Resource_Manager
{
public:
    const Resource& get(Enum name)  const
    {
        return m_resources.at(name);
    }
    virtual ~Resource_Manager() = default;

protected:
    void addResource(Enum name, const std::string& fileName)
    {
        //loading textures, sounds, and fonts from files
        Resource res;
        if(!res.loadFromFile(fileName))
        {
            throw std::runtime_error ("Could load resource: " + fileName + "!");
        }

        m_resources.insert(std::make_pair(name, res));
    }

private:
    std::map<Enum, Resource> m_resources;
};

#endif // RESOURCE_MANAGER_H_INCLUDED
