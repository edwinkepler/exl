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

#include <tuple>
#include <cmath>

namespace exl
{
    const double KM_MI      = 0.62137;      // kilometers to miles
    const double KM_YD      = 1093.6;       // kilimoters to yards
    const double KM_FT      = 3280.8;       // kilometers to feets
    const double KM_IN      = 39370;        // kilometers to inches
    const double MI_M       = 0.00062137;   // miles to meters
    const double MI_CM      = 0.0000062137; // miles to centimeters
    const double MI_YD      = 1760.0;       // miles to yards
    const double C_F        = 1.8000;       // celsius to fahrenheit
    const int    C_F_ADD    = 32;           // additional for celsius to fahrenheit

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

    /**
     * @brief Kilometers to miles and yards conversion.
     * @param Value to convert in kilometers.
     * @return Tuple of converted miles and yards.
     */
    template<typename T>
    std::tuple<int, int> km_to_mi_yd(T);

    /**
     * @brief Miles to kilometers conversion.
     * @param Value to convert.
     * @return Converted value.
     */
    template<typename T>
    double mi_to_km(T);

    /**
     * @brief Miles to meters conversion.
     * @param Value to convert.
     * @return Converted value.
     */
    template<typename T>
    double mi_to_m(T);

    /**
     * @brief Miles to centimeters conversion.
     * @param Value to convert.
     * @return Converted value.
     */
    template<typename T>
    double mi_to_cm(T);

    /**
     * @brief Miles to yards conversion.
     * @param Value to convert.
     * @return Converted value.
     */
    template<typename T>
    double mi_to_yd(T);

    /**
     * @brief Celsius to fahrenheit conversion.
     * @param Value to convert.
     * @return Converted value.
     */
    template<typename T>
    double c_to_f(T);

    /**
     * @brief Fahrenheit to celsius conversion.
     * @param Value to convert.
     * @return Converted value.
     */
    template<typename T>
    double f_to_c(T);
}

#endif // CONVERSION_HPP
