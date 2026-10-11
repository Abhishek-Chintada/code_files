#include <bits/stdc++.h>

using namespace std;

int addn(int a = 10,int b = 5);

int addn(int a, int b) {
    return a + b;
}

int main(void) {
    int result = addn(12);
    cout << result << endl;
    return 0;
}
