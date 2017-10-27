/**
 * Units conversions
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

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

namespace exl
{
    const double KM_MI = 0.62137;
    const double KM_YD = 1093.6;
    const double KM_FT = 3280.8;
    const double KM_IN = 39370;

    /**
     * @brief Kilometers to miles conversion.
     * @param Value to convert.
     * @return Converted value.
     */
    template<typename T>
    double km_to_mi(T);

    /**
     * @brief Kilometers to yards conversion.
     * @param Value to convert.
     * @return Converted value.
     */
    template<typename T>
    double km_to_yd(T);

    /**
     * @brief Kilometers to feets conversion.
     * @param Value to convert.
     * @return Converted value.
     */
    template<typename T>
    double km_to_ft(T);

    /**
     * @brief Kilometers to inches conversion.
     * @param Value to convert.
     * @return Converted value.
     */
    template<typename T>
    double km_to_in(T);
}

#endif // CONVERSION_HPP
