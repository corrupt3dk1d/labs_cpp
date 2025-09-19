#include <iostream>

int main(){
    int n = -1;
    while (n <= 0){
        std::cout << "Input a positive number" << std::endl;
        std::cin >> n;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    int arr[10] = {1, 2, 44, 55, 6, 77, 88, 9, 10};
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) std::cout << arr[i] << ' ';
    }
    sum = 0;
    for (int i = 1; i < 10; i++) {
        if (i % 2 == 1) sum += arr[i];
    }
    std::cout << std::endl << "Sum of numbers with uneven indexes: " << sum;
    return 0;
}