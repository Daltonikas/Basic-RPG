#ifndef ANIMATION_H_INCLUDED
#define ANIMATION_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <vector>

class Animation
{
    //structure for holing each individual frame
    struct Frame
    {
        Frame(const sf::IntRect& rect, float timeToNextFrame)
        :   rect            (rect)
        ,   timeToNextFrame (timeToNextFrame)
        {   }
        const sf::IntRect rect;
        const float timeToNextFrame;
    };
public:
    // Adding frame function
    void addFrame(const sf::IntRect& rect, float timeToNextFrame);
    //For returning frames
    sf::IntRect getFrame();

private:
    //m_frames holds all the different frames of different types
    std::vector<Frame> m_frames;
    //Setting clock for checking how long frames last
    sf::Clock m_timer;
    //pretty self explanatory, 0 to initialize all frames form first frame and not a random one
    int m_currentFrame = 0;

};

#endif // ANIMATION_H_INCLUDED
