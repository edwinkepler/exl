#include "maths.hpp"

namespace exl
{
    long long factorial(int _x) {
        if(_x == 0) {
            return 1;
        } else if(_x == 1) {
            return 1;
        } else {
            return _x * factorial(_x - 1);
        }
    }
}
