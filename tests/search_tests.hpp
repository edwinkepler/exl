#ifndef SEARCH_TESTS_HPP
#define SEARCH_TESTS_HPP

#include <vector>

#include "../algorithms/search.hpp"

#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(binary_search_int_vector)
{
    std::vector<int> v_test = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    BOOST_REQUIRE_EQUAL(4, exl::binary_search(v_test, 4));
}

BOOST_AUTO_TEST_CASE(binary_search_int_vector_elem_not_in_a_list)
{
    std::vector<int> v_test = {1, 2, 3, 5, 6, 7, 8, 9, 10};
    BOOST_REQUIRE_EQUAL(0, exl::binary_search(v_test, 4));
}

BOOST_AUTO_TEST_CASE(binary_search_float_vector)
{
    std::vector<float> v_test = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f};
    BOOST_REQUIRE_EQUAL(4, exl::binary_search(v_test, 4.0f));
}

BOOST_AUTO_TEST_CASE(binary_search_float_vector_elem_not_in_a_list)
{
    std::vector<float> v_test = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f};
    BOOST_REQUIRE_EQUAL(0, exl::binary_search(v_test, 4.1f));
}

BOOST_AUTO_TEST_CASE(binary_search_double_vector)
{
    std::vector<double> v_test = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    BOOST_REQUIRE_EQUAL(4, exl::binary_search(v_test, 4.0));
}

BOOST_AUTO_TEST_CASE(binary_search_double_vector_elem_not_in_a_list)
{
    std::vector<double> v_test = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    BOOST_REQUIRE_EQUAL(0, exl::binary_search(v_test, 4.1));
}

BOOST_AUTO_TEST_CASE(binary_search_long_vector)
{
    std::vector<long> v_test = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    BOOST_REQUIRE_EQUAL(4, exl::binary_search(v_test, (long)4));
}

BOOST_AUTO_TEST_CASE(binary_search_long_vector_elem_not_in_a_list)
{
    std::vector<long> v_test = {1, 2, 3, 5, 6, 7, 8, 9, 10};
    BOOST_REQUIRE_EQUAL(0, exl::binary_search(v_test, (long)4));
}

#endif // SEARCH_TESTS_HPP
