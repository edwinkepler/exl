#ifndef MISC_MATH_TESTS_HPP
#define MISC_MATH_TESTS_HPP

#include "../../maths/misc_math.hpp"

#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(factorial_0)
{
    BOOST_REQUIRE_EQUAL(1, exl::factorial(0));
}

BOOST_AUTO_TEST_CASE(factorial_1)
{
    BOOST_REQUIRE_EQUAL(1, exl::factorial(1));
}

BOOST_AUTO_TEST_CASE(factorial_10)
{
    BOOST_REQUIRE_EQUAL(3628800, exl::factorial(10));
}

BOOST_AUTO_TEST_CASE(factorial_15)
{
    BOOST_REQUIRE_EQUAL(1307674368000, exl::factorial(15));
}

#endif // MISC_MATH_TESTS_HPP
