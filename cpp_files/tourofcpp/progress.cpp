#include <bits/stdc++.h>

using namespace std;
int main(void) {
    char v[6];
    *(&v) = "labbe";
    cout << "This is the v array " << v << endl;
    char *p = "lavdesh";
    cout << "This is the v pointer" << p << endl;
    return 0;    
}
