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

    template<typename T>
    std::tuple<int, int> km_to_mi_yd(T _km) {
        return std::make_tuple(
            std::floor(exl::km_to_mi(_km)), 
            mi_to_yd(exl::km_to_mi(_km) - std::floor(exl::km_to_mi(_km))));
    }

    template std::tuple<int, int> km_to_mi_yd(int _km);
    template std::tuple<int, int> km_to_mi_yd(float _km);
    template std::tuple<int, int> km_to_mi_yd(double _km);
    template std::tuple<int, int> km_to_mi_yd(long _km);
    template std::tuple<int, int> km_to_mi_yd(long long _km);

    template<typename T>
    double mi_to_km(T _mi) {
        return _mi / KM_MI;
    };

    template double mi_to_km(int _mi);
    template double mi_to_km(float _mi);
    template double mi_to_km(double _mi);
    template double mi_to_km(long _mi);
    template double mi_to_km(long long _mi);

    template<typename T>
    double mi_to_m(T _mi) {
        return _mi / MI_M;
    }

    template double mi_to_m(int _mi);
    template double mi_to_m(float _mi);
    template double mi_to_m(double _mi);
    template double mi_to_m(long _mi);
    template double mi_to_m(long long _mi);

    template<typename T>
    double mi_to_cm(T _mi){
        return _mi / MI_CM;
    }

    template double mi_to_cm(int _mi);
    template double mi_to_cm(float _mi);
    template double mi_to_cm(double _mi);
    template double mi_to_cm(long _mi);
    template double mi_to_cm(long long _mi);

    template<typename T>
    double mi_to_yd(T _mi) {
        return _mi * MI_YD;
    }

    template double mi_to_yd(int _mi);
    template double mi_to_yd(float _mi);
    template double mi_to_yd(double _mi);
    template double mi_to_yd(long _mi);
    template double mi_to_yd(long long _mi);

    template<typename T>
    double c_to_f(T _c) {
        return _c * C_F + C_F_ADD;
    }

    template double c_to_f(int _c);
    template double c_to_f(float _c);
    template double c_to_f(double _c);
    template double c_to_f(long _c);
    template double c_to_f(long long _c);

    template<typename T>
    double f_to_c(T _f) {
        return (_f - C_F_ADD) / C_F;
    }

    template double f_to_c(int _f);
    template double f_to_c(float _f);
    template double f_to_c(double _f);
    template double f_to_c(long _f);
    template double f_to_c(long long _f);
}
