#include "Animation.h"
//creating function to add frames to the m_frames
void Animation::addFrame(const sf::IntRect& rect, float timeToNextFrame)
{
    m_frames.emplace_back(rect, timeToNextFrame);
}
//for animation and sending files frames to draw
sf::IntRect Animation::getFrame()
{
    //checking if the frame did not overstay its welcome
    if (m_timer.getElapsedTime().asSeconds() >=
        m_frames.at(m_currentFrame).timeToNextFrame)
    {
        m_currentFrame++;
        m_timer.restart();
        //checking if its the last of its kind
        if(m_currentFrame == m_frames.size())
        {
            //making new family
            m_currentFrame = 0;
        }
    }
    //returning the frame we need to draw
    return m_frames.at(m_currentFrame).rect;
}
