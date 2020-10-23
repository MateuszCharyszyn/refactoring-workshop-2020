#pragma once
#include <segments.cpp>
/*
class Remove{

    void removeTailSegmentIfNotScored(Segment const& newHead);
    void removeTailSegment();
};
void Remove::removeTailSegmentIfNotScored(Segment const& newHead)
{
    if (std::make_pair(newHead.x, newHead.y) == m_foodPosition) {
        m_scorePort.send(std::make_unique<EventT<ScoreInd>>());
        m_foodPort.send(std::make_unique<EventT<FoodReq>>());
    } else {
        removeTailSegment();
    }
}
*/