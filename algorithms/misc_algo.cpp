#include "misc_algo.hpp"

namespace exl
{
    template<typename T>
    T sum(std::vector<T>& _v) {
        T summed = 0;
        for(const auto& i : _v) {
            summed = summed + i;
        }
        return summed;
    }

    template int sum(std::vector<int>& _v);
    template float sum(std::vector<float>& _v);
    template double sum(std::vector<double>& _v);
    template long sum(std::vector<long>& _v);
    template long long sum(std::vector<long long>& _v);
}
