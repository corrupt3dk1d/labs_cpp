#include <iostream>


int main() {

    int a = 228;
    int *pa = &a;
    std::cout << "Adress: " << pa << " ; Value: " << *pa;
    *pa += 2;
    std::cout << std::endl << "after *pa+2 ; a = " << a;

    int arr[3] = {1, 2, 3};
    int *parr = arr;
    std::cout << std::endl;
    for (parr; parr <= &arr[2]; parr++){
        std::cout << *parr << std::endl;
    }

    int n = 5;
    int n2 = 8;
    int* const pn = &n;
    std::cout << "pn= " << pn << std::endl;
    *pn = 3;
    // pn = &n2; // Error
    std::cout << "*pn= " << *pn << std::endl;
    std::cout << "n= " << n << std::endl;
    return 0;
}