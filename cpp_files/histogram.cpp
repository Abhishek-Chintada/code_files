#include <cstdio>

constexpr char pos_A{65}, pos_Z{90}, pos_a{97}, pos_z{122};
constexpr bool is_capital(char x) {
    if(x >= pos_A && x <= pos_Z) return true;
    return false;
}
constexpr bool is_small(char x) {
    if(x >= pos_a && x <= pos_z) return true;
    return false;
}
