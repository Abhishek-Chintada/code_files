#include <bits/stdc++.h>

using namespace std;

constexpr double sum(vector<double>& a) {
    double res = 0;
    for(double x : a) {
        res += x;
    }
    return res;
}

int main(void) {
    constexpr vector<double> a {1.2, 6.5, 9.2};
    constexpr double res = sum(a);
    cout << res << endl;
    return 0;
}
