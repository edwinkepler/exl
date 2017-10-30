#include "sort.hpp"
#include <algorithm>

namespace exl
{
    template<typename T>
    bool is_sorted_i(std::vector<T>& _item) {
        T tmp = _item[0];
        for(const auto& i : _item) {
            if(tmp > i) {
                return false;
            }
            tmp = i;
        }
        return true;
    }

    template bool is_sorted_i(std::vector<int>& _item);
    template bool is_sorted_i(std::vector<double>& _item);
    template bool is_sorted_i(std::vector<float>& _item);
    template bool is_sorted_i(std::vector<long>& _item);
    template bool is_sorted_i(std::vector<long long>& _item);

    template<typename T>
    bool is_sorted_d(std::vector<T>& _item) {
        T tmp = _item[0];
        for(const auto& i : _item) {
            if(tmp < i) {
                return false;
            }
            tmp = i;
        }
        return true;
    }

    template bool is_sorted_d(std::vector<int>& _item);
    template bool is_sorted_d(std::vector<double>& _item);
    template bool is_sorted_d(std::vector<float>& _item);
    template bool is_sorted_d(std::vector<long>& _item);
    template bool is_sorted_d(std::vector<long long>& _item);

    template<typename T>
    std::vector<T> selection_sort(std::vector<T>& _item) {
        std::vector<T> v_sorted;
        while(!_item.empty()) {
            T smallest = _item[0];
            for(auto const& j : _item) {
                if(j < smallest) {
                    smallest = j;
                }
            }
            v_sorted.push_back(smallest);

            auto it = std::find(_item.begin(), _item.end(), smallest);
            if (it != _item.end()) {
                // to prevent moving all of items in vector
                // https://stackoverflow.com/a/15998752
                std::swap(*it, _item.back());
                _item.pop_back();
            }
        }
        return v_sorted;
    }

    template std::vector<int> selection_sort(std::vector<int>& _item);
    template std::vector<double> selection_sort(std::vector<double>& _item);
    template std::vector<float> selection_sort(std::vector<float>& _item);
    template std::vector<long> selection_sort(std::vector<long>& _item);
    template std::vector<long long> selection_sort(std::vector<long long>& _item);

    template<typename T>
    std::vector<T> quicksort(std::vector<T> _item) {
        // if(_item.size() < 2) {
        //     return _item;
        // } else {
        //     int partition = std::floor(_item.size() / 2);
        //     T pivot = _item[partition];
        //     std::vector<T> less;
        //     std::vector<T> greater;
        //     for(int i = 0; i < partition; i++) {
        //         if(i <= pivot) {
        //             less.push_back(i);
        //         }
        //     }
        //     for(int i = _item.size() - 1; i > partition; i--) {
        //         if(i > pivot) {
        //             greater.push_back(i);
        //         }
        //     }
        //     return quicksort(less) + quicksort(greater);
        // }
    }

    template std::vector<int> quicksort(std::vector<int> _item);
    template std::vector<double> quicksort(std::vector<double> _item);
    template std::vector<float> quicksort(std::vector<float> _item);
    template std::vector<long> quicksort(std::vector<long> _item);
    template std::vector<long long> quicksort(std::vector<long long> _item);
}
