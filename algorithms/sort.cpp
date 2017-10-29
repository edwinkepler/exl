#include "sort.hpp"
#include <algorithm>

namespace exl
{
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
    std::vector<T> quicksort(std::vector<T>& _item, int _pivot) {
        if(_item.size() < 2) {
            return _item;
        } else {
            std::vector<T> v_sorted;
            T pivot = _item[_pivot];
            std::vector<T> less;
            std::vector<T> greater;
            for(const auto& i : _item) {
                if(i <= pivot) {
                    less.push_back(i);
                }
            }
            for(const auto& i : _item) {
                if(i > pivot) {
                    greater.push_back(i);
                }
            }
            for(const auto& i : less) {
                v_sorted.push_back(i);
            }
            v_sorted.push_back(pivot);
            for(const auto& i : greater) {
                v_sorted.push_back(i);
            }
            return quicksort(v_sorted);
        }
    }

    template std::vector<int> quicksort(std::vector<int>& _item, int _pivot);
    template std::vector<double> quicksort(std::vector<double>& _item, int _pivot);
    template std::vector<float> quicksort(std::vector<float>& _item, int _pivot);
    template std::vector<long> quicksort(std::vector<long>& _item, int _pivot);
    template std::vector<long long> quicksort(std::vector<long long>& _item, int _pivot);
}
