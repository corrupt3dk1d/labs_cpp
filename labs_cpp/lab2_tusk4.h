#include <iostream>
void func(int n);
#define MAX(a, b) a + b;
using namespace std;

namespace MySpace {
    void func(int n) {
        static int static_n = 0;
        cout << n + static_n << endl;
        static_n = n;
    }
};