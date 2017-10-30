#ifndef SORT_TESTS_HPP
#define SORT_TESTS_HPP

#include <vector>

#include "../../algorithms/sort.hpp"

#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(is_sorted_i_true)
{
    std::vector<int> v_sorted = {1, 2, 3, 6, 7};
    BOOST_REQUIRE_EQUAL(true, exl::is_sorted_i(v_sorted));
}

BOOST_AUTO_TEST_CASE(is_sorted_i_false)
{
    std::vector<int> v_sorted = {1, 2, 6, 3, 7};
    BOOST_REQUIRE_EQUAL(false, exl::is_sorted_i(v_sorted));
}

BOOST_AUTO_TEST_CASE(is_sorted_d_true)
{
    std::vector<int> v_sorted = {5, 4, 3, 2, 1, 0};
    BOOST_REQUIRE_EQUAL(true, exl::is_sorted_d(v_sorted));
}

BOOST_AUTO_TEST_CASE(is_sorted_d_false)
{
    std::vector<int> v_sorted = {5, 4, 6, 3, 2, 1};
    BOOST_REQUIRE_EQUAL(false, exl::is_sorted_d(v_sorted));
}

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

BOOST_AUTO_TEST_CASE(quicksort_int)
{
    std::vector<int> v_unsorted = {3, 1, 2, 7, 6};
    std::vector<int> v_sorted = {1, 2, 3, 6, 7};
    auto v_test = exl::quicksort(v_unsorted);
    BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
                                  v_test.begin(), v_test.end());
}

// BOOST_AUTO_TEST_CASE(quicksort_int_2)
// {
//     std::vector<int> v_unsorted = {10, 10, 6, 9, 1};
//     std::vector<int> v_sorted = {1, 6, 9, 10, 10};
//     auto v_test = exl::quicksort(v_unsorted);
//     BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
//                                   v_test.begin(), v_test.end());
// }

// BOOST_AUTO_TEST_CASE(quicksort_int_3)
// {
//     std::vector<int> v_unsorted = {10, 10, 6, 9, 1, 149, 4, 2, 100};
//     std::vector<int> v_sorted = {1, 2, 4, 6, 9, 10, 10, 100, 149};
//     auto v_test = exl::quicksort(v_unsorted);
//     BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
//                                   v_test.begin(), v_test.end());
// }

// BOOST_AUTO_TEST_CASE(quicksort_double)
// {
//     std::vector<double> v_unsorted = {3.0, 1.0, 2.0, 7.0, 6.0};
//     std::vector<double> v_sorted = {1.0, 2.0, 3.0, 6.0, 7.0};
//     auto v_test = exl::quicksort(v_unsorted);
//     BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
//                                   v_test.begin(), v_test.end());
// }

// BOOST_AUTO_TEST_CASE(quicksort_double_2)
// {
//     std::vector<double> v_unsorted = {3.0, 1.0, 2.0, 7.0, 6.0};
//     std::vector<double> v_sorted = {1.0, 2.0, 3.0, 6.0, 7.0};
//     auto v_test = exl::quicksort(v_unsorted);
//     BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
//                                   v_test.begin(), v_test.end());
// }

// BOOST_AUTO_TEST_CASE(quicksort_float)
// {
//     std::vector<float> v_unsorted = {3.0, 1.0, 2.0, 7.0, 6.0};
//     std::vector<float> v_sorted = {1.0, 2.0, 3.0, 6.0, 7.0};
//     auto v_test = exl::quicksort(v_unsorted);
//     BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
//                                   v_test.begin(), v_test.end());
// }

// BOOST_AUTO_TEST_CASE(quicksort_float_2)
// {
//     std::vector<float> v_unsorted = {3.0, 1.0, 2.0, 7.0, 6.0};
//     std::vector<float> v_sorted = {1.0, 2.0, 3.0, 6.0, 7.0};
//     auto v_test = exl::quicksort(v_unsorted);
//     BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
//                                   v_test.begin(), v_test.end());
// }

// BOOST_AUTO_TEST_CASE(quicksort_long)
// {
//     std::vector<long> v_unsorted = {3, 1, 2, 7, 6};
//     std::vector<long> v_sorted = {1, 2, 3, 6, 7};
//     auto v_test = exl::quicksort(v_unsorted);
//     BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
//                                   v_test.begin(), v_test.end());
// }

// BOOST_AUTO_TEST_CASE(quicksort_long_2)
// {
//     std::vector<long> v_unsorted = {10, 10, 6, 9, 1};
//     std::vector<long> v_sorted = {1, 6, 9, 10, 10};
//     auto v_test = exl::quicksort(v_unsorted);
//     BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
//                                   v_test.begin(), v_test.end());
// }

// BOOST_AUTO_TEST_CASE(quicksort_longlong)
// {
//     std::vector<long long> v_unsorted = {3, 1, 2, 7, 6};
//     std::vector<long long> v_sorted = {1, 2, 3, 6, 7};
//     auto v_test = exl::quicksort(v_unsorted);
//     BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
//                                   v_test.begin(), v_test.end());
// }

// BOOST_AUTO_TEST_CASE(quicksort_longlong_2)
// {
//     std::vector<long long> v_unsorted = {10, 10, 6, 9, 1};
//     std::vector<long long> v_sorted = {1, 6, 9, 10, 10};
//     auto v_test = exl::quicksort(v_unsorted);
//     BOOST_CHECK_EQUAL_COLLECTIONS(v_sorted.begin(), v_sorted.end(), 
//                                   v_test.begin(), v_test.end());
// }

#endif // SORT_TESTS_HPP
