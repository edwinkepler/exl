#ifndef MISC_ALGO_HPP
#define MISC_ALGO_HPP

#include <vector>

namespace exl
{
    /**
     * @brief Sum all elements of std::vector.
     * @param Vector to sum.
     * @return Summed value.
     */
    template<typename T>
    T sum(std::vector<T>&);
}

#endif // MISC_ALGO_HPP
