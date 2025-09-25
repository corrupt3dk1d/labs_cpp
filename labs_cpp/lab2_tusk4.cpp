#include "lab2_tusk4.h";



int main() {
    MySpace::func(1);
    MySpace::func(2);

    cout << MAX(3, 4);
    return 0;
}

namespace MySpace {
    void func(int n) {
        static int static_n = 0;
        cout << n + static_n << endl;
        static_n = n;
    }
}