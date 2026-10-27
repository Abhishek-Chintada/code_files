#include <bits/stdc++.h>
// tests -> 1.8
using namespace std;

bool accept() {
    cout << "Do you want to proceed? (y or n)\n";
    char answer = 0;
    cin >> answer;
    switch(answer) {
        case 'y': return true;
        case 'n': return false;
        default : cout << "I'll take that as a no.\n"; return false;
    }
}

bool check(int x) {
    if(int val = x; val != 0) {
        return true;
    } else return false;
}

int main(void) {
    int a = 10;
    int b = 0;
    if(check(a)) cout << "a is good" << endl;
    if(check(b)) cout << "b is good" << endl;
    return 0;
}
