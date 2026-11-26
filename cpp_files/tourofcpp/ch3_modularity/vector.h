#include <cmath>

class Vector {
    private:
        double *elem;
        int sz;
    public:
        Vector(int s);
        auto operator[](int s) -> double;
        auto size() -> int;
};
