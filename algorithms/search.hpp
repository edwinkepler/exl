/**
 * Search algorithms
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

#ifndef SEARCH_HPP
#define SEARCH_HPP

#include <vector>

/**
 * @brief Namespace containing all Extended Libraries.
 */
namespace exl
{
    /**
     * @brief Binary search algorithm. O(log n) efficiency.
     * @param Vector to look into.
     * @param Element to search for.
     * @return Position of a found element or 0 if there is no element in the
     *         list.
     */
    template<typename T>
    int binary_search(std::vector<T>&, T);

    /**
     * @brief Find the smallest value in a vector. O(n) efficiency.
     * @param Vector to look into.
     * @return Smallest value.
     */
    template<typename T>
    T find_smallest(std::vector<T>&);

    /**
     * @brief Find the biggest value in a vector. O(n) efficiency.
     * @param Vector to look into.
     * @return Biggest value.
     */
    template<typename T>
    T find_largest(std::vector<T>&);
}

#endif // SEARCH_HPP
