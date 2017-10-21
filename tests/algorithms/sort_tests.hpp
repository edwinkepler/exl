#ifndef SORT_TESTS_HPP
#define SORT_TESTS_HPP

#include <vector>

#include "../../algorithms/sort.hpp"

#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(selection_sort_int)
{
    std::vector<int> v_unsorted = {3, 1, 2, 7, 6};
    std::vector<int> v_sorted = {1, 2, 3, 6, 7};
    auto v_test = exl::selection_sort(v_unsorted);
    BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
                                  v_test.begin(), v_test.end());
}

BOOST_AUTO_TEST_CASE(selection_sort_double)
{
    std::vector<double> v_unsorted = {3.0, 1.0, 2.0, 7.0, 6.0};
    std::vector<double> v_sorted = {1.0, 2.0, 3.0, 6.0, 7.0};
    auto v_test = exl::selection_sort(v_unsorted);
    BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
                                  v_test.begin(), v_test.end());
}

BOOST_AUTO_TEST_CASE(selection_sort_float)
{
    std::vector<float> v_unsorted = {3.0, 1.0, 2.0, 7.0, 6.0};
    std::vector<float> v_sorted = {1.0, 2.0, 3.0, 6.0, 7.0};
    auto v_test = exl::selection_sort(v_unsorted);
    BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
                                  v_test.begin(), v_test.end());
}

BOOST_AUTO_TEST_CASE(selection_sort_long)
{
    std::vector<long> v_unsorted = {3, 1, 2, 7, 6};
    std::vector<long> v_sorted = {1, 2, 3, 6, 7};
    auto v_test = exl::selection_sort(v_unsorted);
    BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
                                  v_test.begin(), v_test.end());
}

BOOST_AUTO_TEST_CASE(selection_sort_longlong)
{
    std::vector<long long> v_unsorted = {3, 1, 2, 7, 6};
    std::vector<long long> v_sorted = {1, 2, 3, 6, 7};
    auto v_test = exl::selection_sort(v_unsorted);
    BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
                                  v_test.begin(), v_test.end());
}

#endif // SORT_TESTS_HPP
