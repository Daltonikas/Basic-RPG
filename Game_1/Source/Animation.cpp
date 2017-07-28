#include "Animation.h"

#include <iostream>

//Creating a function that adds several similar frames, frames must me same size and go from left to right, needs a number of frames
void Animation::addFrames(int numFrames, const sf::IntRect& frameSize, float time)
{
    for (int i = 0; i <= numFrames; i++)
    {
        addFrame({(frameSize.left + frameSize.width * i), frameSize.top, frameSize.width, frameSize.height}, time);
    }
}
//creating function to add frames to the m_frames
void Animation::addFrame(const sf::IntRect& rect, float timeToNextFrame)
{
    if (timeToNextFrame > m_longestFrameTime)
        m_longestFrameTime = timeToNextFrame;

    m_frames.emplace_back(rect, timeToNextFrame);
}
//for animation and sending files frames to draw
const sf::IntRect Animation::getFrame()
{
    //checking if the frame did not overstay its welcome
    if (m_timer.getElapsedTime().asSeconds() >=
        m_frames.at(m_currentFrame).timeToNextFrame)
    {
        m_currentFrame++;
        //checking if its the last of its kind
        if(m_currentFrame == m_frames.size())
            //making new family
                reset();

        m_timer.restart();
    }
    //returning the frame we need to draw
    return m_frames.at(m_currentFrame).rect;
}

const sf::IntRect Animation::getFrame(int index)
{
    return m_frames[index].rect;
}

bool Animation::isOnFinalFrame() const
{
    return m_currentFrame == m_frames.size() - 1;
}

void Animation::reset()
{
    m_currentFrame = 0;
    m_timer.restart().asSeconds();
}
