#ifndef SRC_DISTANCE_INL_INCLUDED
#define SRC_DISTANCE_INL_INCLUDED

#include <boost/range/combine.hpp>

namespace aiplusplus
{
    template <Distance distance>
    constexpr int GetDistance(int x, int y)
    {
        return std::abs(x-y);
    }

    template<Distance distance>
    auto GetDistance(const std::vector<int> &x, const std::vector<int> &y)
    {
        auto sum = 0;
        for (const auto &elements : boost::combine(x, y))
        {
            const auto d = std::abs(elements.get<0>() - elements.get<1>());
            sum += d * d;
        }

        return std::sqrt(sum);
    }
}

#endif // SRC_DISTANCE_INL_INCLUDED