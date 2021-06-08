#ifndef SRC_DISTANCE_HPP_INCLUDED
#define SRC_DISTANCE_HPP_INCLUDED

#include <vector>
#include <cmath>

namespace aiplusplus
{
    enum class Distance
    {
        EUCLIDEAN
    };

    template <Distance distance = Distance::EUCLIDEAN>
    constexpr int GetDistance(int x, int y);

    template <Distance distance = Distance::EUCLIDEAN>
    auto GetDistance(const std::vector<int>& x, const std::vector<int>& y);

}

#include "distance.inl"

#endif // SRC_DISTANCE_HPP_INCLUDED