#ifndef CONVERSION_TESTS_HPP
#define CONVERSION_TESTS_HPP

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

#endif // CONVERSION_TESTS_HPP
