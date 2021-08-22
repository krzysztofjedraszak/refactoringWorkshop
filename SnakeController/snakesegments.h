#ifndef SNAKESEGMENTS_H
#define SNAKESEGMENTS_H
#pragma once

#include <list>
#include <memory>
#include <functional>
#include "IEventHandler.hpp"
#include "SnakeInterface.hpp"


namespace Snake
{
    class SnakeSegments
    {
        struct Segment
        {
            int x;
            int y;
        };

        std::list<Segment> m_segments;

        bool isSegmentAtPosition(int x, int y) const;
        Segment calculateNewHead() const;
        void updateSegmentsIfSuccessfullMove(Segment const& newHead);
        void addHeadSegment(Segment const& newHead);
        void removeTailSegmentIfNotScored(Segment const& newHead);
        void removeTailSegment();

    public:
        SnakeSegments();
    };
}

#endif // SNAKESEGMENTS_H
