#include "conversion.hpp"

namespace exl
{
    template<typename T>
    double km_to_mi(T _km) {
        return _km * KM_MI;
    }

    template double km_to_mi(int _km);
    template double km_to_mi(float _km);
    template double km_to_mi(double _km);
    template double km_to_mi(long _km);
    template double km_to_mi(long long _km);

    template<typename T>
    double km_to_yd(T _km) {
        return _km * KM_YD;
    }

    template double km_to_yd(int _km);
    template double km_to_yd(float _km);
    template double km_to_yd(double _km);
    template double km_to_yd(long _km);
    template double km_to_yd(long long _km);

    template<typename T>
    double km_to_ft(T _km) {
        return _km * KM_FT;
    }

    template double km_to_ft(int _km);
    template double km_to_ft(float _km);
    template double km_to_ft(double _km);
    template double km_to_ft(long _km);
    template double km_to_ft(long long _km);

    template<typename T>
    double km_to_in(T _km) {
        return _km * KM_IN;
    }

    template double km_to_in(int _km);
    template double km_to_in(float _km);
    template double km_to_in(double _km);
    template double km_to_in(long _km);
    template double km_to_in(long long _km);
}
