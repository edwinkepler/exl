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
}
