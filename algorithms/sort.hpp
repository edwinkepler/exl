/**
 * Sort algorithms
 * Copyright (c) Edwin Kepler, All rights reserved.
 * 
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 3.0 of the License, or (at your option)
 * any later version.
 * 
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.
 */

#ifndef SORT_HPP
#define SORT_HPP

#include <vector>

namespace exl
{
    /**
     * @brief Function checks if vector is sorted increasingly.
     * @param Vector to check.
     * @return True if vector is sorted increasingly, false otherwise.
     */
    template<typename T>
    bool is_sorted_i(std::vector<T>&);

    /**
     * @brief Function checks if vector is sorted decreasingly.
     * @param Vector to check.
     * @return True if vector is sorted decreasingly, false otherwise.
     */
    template<typename T>
    bool is_sorted_d(std::vector<T>&);

    /**
     * @brief Selection sort algorithm. O(n2) efficiency.
     * @param Vector to sort.
     * @return Sorted vector.
     */
    template<typename T>
    std::vector<T> selection_sort(std::vector<T>);
}

#endif // SORT_HPP
