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
        sf::IntRect rect;
        float timeToNextFrame;
    };
public:
    // adding several frames description is in cpp
    void addFrames(int numFrames, const sf::IntRect& frameSize, float time);
    // Adding frame function
    void addFrame(const sf::IntRect& rect, float timeToNextFrame);
    //for checking if its on final frame
    bool isOnFinalFrame() const;
    //resets frames
    void reset();
    //for returning multiple frames
    const sf::IntRect getFrame();
    //For returning a singular frame of choosing
    const sf::IntRect getFrame(int index);
    //returns number of frames that the animation has
    int getNumFrames(){return m_frames.size();}


private:
    //m_frames holds all the different frames of different types
    std::vector<Frame> m_frames;
    //Setting clock for checking how long frames last
    sf::Clock m_timer;
    //pretty self explanatory, 0 to initialize all frames form first frame and not a random one
    unsigned m_currentFrame = 0;
    float m_longestFrameTime = 0;

};

#endif // ANIMATION_H_INCLUDED
