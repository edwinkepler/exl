#include "sort.hpp"
#include <algorithm>

namespace exl
{
    template<typename T>
    std::vector<T> selection_sort(std::vector<T> _item) {
        std::vector<T> v_sorted;
        for(int i = 0; i < _item.size(); ++i) {
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

    template std::vector<int> selection_sort(std::vector<int> _item);
}
