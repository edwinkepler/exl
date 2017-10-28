#ifndef CONVERSION_TESTS_HPP
#define CONVERSION_TESTS_HPP

#include <tuple>
#include <cmath>

#include "../../maths/conversion.hpp"

#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(km_to_mi_int)
{
    BOOST_REQUIRE_EQUAL(62, std::floor(exl::km_to_mi(100)));
}

BOOST_AUTO_TEST_CASE(km_to_mi)
{
    BOOST_REQUIRE_EQUAL(62, std::floor(exl::km_to_mi(100.0)));
}

BOOST_AUTO_TEST_CASE(km_to_yd_int)
{
    BOOST_REQUIRE_EQUAL(54679, std::floor(exl::km_to_yd(50)));
}

BOOST_AUTO_TEST_CASE(km_to_yd)
{
    BOOST_REQUIRE_EQUAL(54679, std::floor(exl::km_to_yd(50.0)));
}

BOOST_AUTO_TEST_CASE(km_to_ft_int)
{
    BOOST_REQUIRE_EQUAL(164040, std::floor(exl::km_to_ft(50)));
}

BOOST_AUTO_TEST_CASE(km_to_ft)
{
    BOOST_REQUIRE_EQUAL(164040, std::floor(exl::km_to_ft(50.0)));
}

BOOST_AUTO_TEST_CASE(km_to_in_int)
{
    BOOST_REQUIRE_EQUAL(1968500, std::floor(exl::km_to_in(50)));
}

BOOST_AUTO_TEST_CASE(km_to_in)
{
    BOOST_REQUIRE_EQUAL(1968500, std::floor(exl::km_to_in(50.0)));
}

BOOST_AUTO_TEST_CASE(km_to_mi_yd)
{
    auto test = exl::km_to_mi_yd(100.0);
    BOOST_REQUIRE_EQUAL(62, std::get<0>(test));
    BOOST_REQUIRE_EQUAL(241, std::get<1>(test));
}

BOOST_AUTO_TEST_CASE(mi_to_km_int)
{
    BOOST_REQUIRE_EQUAL(80, std::floor(exl::mi_to_km(50)));
}

BOOST_AUTO_TEST_CASE(mi_to_km)
{
    BOOST_REQUIRE_EQUAL(80, std::floor(exl::mi_to_km(50.0)));
}

BOOST_AUTO_TEST_CASE(mi_to_m_int)
{
    BOOST_REQUIRE_EQUAL(80467, std::floor(exl::mi_to_m(50)));
}

BOOST_AUTO_TEST_CASE(mi_to_m)
{
    BOOST_REQUIRE_EQUAL(80467, std::floor(exl::mi_to_m(50.0)));
}

BOOST_AUTO_TEST_CASE(mi_to_cm_int)
{
    BOOST_REQUIRE_EQUAL(8046735, std::floor(exl::mi_to_cm(50)));
}

BOOST_AUTO_TEST_CASE(mi_to_cm)
{
    BOOST_REQUIRE_EQUAL(8046735, std::floor(exl::mi_to_cm(50.0)));
}

BOOST_AUTO_TEST_CASE(mi_to_yd_int)
{
    BOOST_REQUIRE_EQUAL(88000, std::floor(exl::mi_to_yd(50)));
}

BOOST_AUTO_TEST_CASE(mi_to_yd)
{
    BOOST_REQUIRE_EQUAL(88000, std::floor(exl::mi_to_yd(50.0)));
}

BOOST_AUTO_TEST_CASE(c_to_f)
{
    BOOST_REQUIRE_EQUAL(212, std::floor(exl::c_to_f(100)));
}

BOOST_AUTO_TEST_CASE(c_to_f_2)
{
    BOOST_REQUIRE_EQUAL(122, std::floor(exl::c_to_f(50)));
}

BOOST_AUTO_TEST_CASE(f_to_c)
{
    BOOST_REQUIRE_EQUAL(100, std::floor(exl::f_to_c(212)));
}

BOOST_AUTO_TEST_CASE(f_to_c_2)
{
    BOOST_REQUIRE_EQUAL(50, std::floor(exl::f_to_c(122)));
}

#endif // CONVERSION_TESTS_HPP
