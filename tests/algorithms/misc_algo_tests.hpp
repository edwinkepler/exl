#ifndef GENERAL_TESTS_HPP
#define GENERAL_TESTS_HPP

#include <vector>

#include "../../algorithms/misc_algo.hpp"

#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(sum_int_vector)
{
    std::vector<int> v_test = {8, 9, 10};
    BOOST_REQUIRE_EQUAL(27, exl::sum(v_test));
}

BOOST_AUTO_TEST_CASE(sum_int_vector_2)
{
    std::vector<int> v_test = {-9, 9, 10};
    BOOST_REQUIRE_EQUAL(10, exl::sum(v_test));
}

BOOST_AUTO_TEST_CASE(sum_float_vector)
{
    std::vector<float> v_test = {8.0, 9.0, 10.0};
    BOOST_REQUIRE_EQUAL(27.0, exl::sum(v_test));
}

BOOST_AUTO_TEST_CASE(sum_float_vector_2)
{
    std::vector<float> v_test = {-9.0, 9.0, 10.0};
    BOOST_REQUIRE_EQUAL(10.0, exl::sum(v_test));
}

BOOST_AUTO_TEST_CASE(sum_double_vector)
{
    std::vector<double> v_test = {8.0, 9.0, 10.0};
    BOOST_REQUIRE_EQUAL(27.0, exl::sum(v_test));
}

BOOST_AUTO_TEST_CASE(sum_double_vector_2)
{
    std::vector<double> v_test = {-9.0, 9.0, 10.0};
    BOOST_REQUIRE_EQUAL(10.0, exl::sum(v_test));
}

BOOST_AUTO_TEST_CASE(sum_long_vector)
{
    std::vector<long> v_test = {8, 9, 10};
    BOOST_REQUIRE_EQUAL(27, exl::sum(v_test));
}

BOOST_AUTO_TEST_CASE(sum_long_vector_2)
{
    std::vector<long> v_test = {-9, 9, 10};
    BOOST_REQUIRE_EQUAL(10, exl::sum(v_test));
}

BOOST_AUTO_TEST_CASE(sum_longlong_vector)
{
    std::vector<long long> v_test = {8, 9, 10};
    BOOST_REQUIRE_EQUAL(27, exl::sum(v_test));
}

BOOST_AUTO_TEST_CASE(sum_longlong_vector_2)
{
    std::vector<long long> v_test = {-9, 9, 10};
    BOOST_REQUIRE_EQUAL(10, exl::sum(v_test));
}

#endif // GENERAL_TESTS_HPP
