#include <iostream>


int func(int num = 1);
void func2(int n1, int n2, int &n3, int &n4);

int main(){
    int arr[2][3] = {{0, 1, 2}, {3, 4, 5}};
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) sum += arr[i][j];
    }
    int arr2[3];
    for (int i = 0; i < 3; i++) arr2[i] = arr[0][i] + arr[1][i];
    for (int i = 0; i < 3; i++) std::cout << arr2[i] << ' ';
    std::cout << std::endl;
    
    float n = 20.84;
    float &link1 = n;
    float &link2 = n;
    link2 += 2;
    std::cout << "n=" << n << " link1=" << link1 << " link2=" << link2 << std::endl;

    std::cout << func(2) << std::endl;

    int num1 = 4;
    int num2 = 6;
    func2(1, 2, num1, num2);
    std::cout << "num1= " << num1 << "; num2 =" << num2 << std::endl;

    int some_var = 1;
    for (int i = 0; i < 3; i++) {
        int var_in_cycle = 228;
        std::cout << some_var << ',' << var_in_cycle << ',';
    }
    //std::cout var_in_cycle; // Is not Working!
    return 0;

}

int func(int num) {
    int sum = 0;
    if (num > 0) for(int i; i <= num; i++) sum += i;
    return (num > 0) ? sum : 0;
}

void func2(int n1, int n2, int &n3, int &n4) {
    n3 = n1 + n2;
    n4 = n1 * n2;
}