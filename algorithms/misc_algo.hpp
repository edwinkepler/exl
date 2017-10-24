/**
 * Misc algorithms
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
