#include <iostream>

int func(int *start, int *end);
int plus(int a, int b);
int minus(int a, int b);
void sol(char op);
int (*function(char op))(int, int);

int func(int *start, int *end) {
    int sum = 0;
    for (start; start <= end; start++) sum += *start;
    return sum;
}

int main() {
    int arr[3] = {1, 2, 3};
    int *p1 = arr;
    int *p2 = arr + 2;
    std::cout << func(p1, p2);

    int (*testf)(int, int) = function('+');
    std::cout << testf(3, 3) << std::endl;

    float *pf = new float(13.55);
    std::cout << pf;
    delete pf;
    return 0;
}



int plus(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}
int (*function(char op))(int, int) {
    if (op == '+') return plus;
    if (op == '0') return minus;
    return nullptr;
}