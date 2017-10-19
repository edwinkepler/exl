#include "search.hpp"

namespace exl
{
    template<class T>
    int binary_search(std::vector<T>& _list, T _item) {
        int low = 0;
        int high = _list.size() - 1;
        while(low <= high) {
            int mid = low + high;
            int guess = _list[mid];
            if(guess == _item) {
                return guess;
            }
            if(guess > _item) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return 0;
    }

    template int binary_search(std::vector<int>& _list, int _item);
    template int binary_search(std::vector<double>& _list, double _item);
    template int binary_search(std::vector<float>& _list, float _item);
    template int binary_search(std::vector<long>& _list, long _item);

    template<typename T>
    T find_smallest(std::vector<T>& _item) {
        T smallest = _item[0];
        for(auto const& i : _item) {
            if(i < smallest) {
                smallest = i;
            }
        }
        return smallest;
    }

    template int find_smallest(std::vector<int>& _item);
    template double find_smallest(std::vector<double>& _item);
    template float find_smallest(std::vector<float>& _item);
    template long find_smallest(std::vector<long>& _item);

    template<typename T>
    T find_largest(std::vector<T>& _item) {
        T smallest = _item[0];
        for(auto const& i : _item) {
            if(i > smallest) {
                smallest = i;
            }
        }
        return smallest;
    }

    template int find_largest(std::vector<int>& _item);
    template double find_largest(std::vector<double>& _item);
    template float find_largest(std::vector<float>& _item);
    template long find_largest(std::vector<long>& _item);
}
