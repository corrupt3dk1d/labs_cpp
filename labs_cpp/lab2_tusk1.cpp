#include <iostream>


int main(){
    setlocale(LC_ALL, "RU");
    char op = ' ';
    int n1, n2;
    std::cin >> n1;
    std::cin >> n2;
    std::cout << "Введите +, -, *, /" << std::endl; // "input + - * or /"
    std::cin >> op;
    // if (op == '+') {
    //     std::cout << n1 + n2;
    // }
    // else if (op == '-') std::cout << n1 - n2;
    // else if (op == '/') std::cout << n1 / n2;
    // else if (op == '*') std::cout << n1 * n2;
    // else std::cout << "Ошибка ввода"; // "input error"
    switch(op){
        case '+': 
            std::cout << n1 + n2;
            break;
        case '-':
            std::cout << n1 - n2;
            break;
        case '*':
            std::cout << n1 * n2;
            break;
        case '/': {
            float res = (n2 != 0) ? n1 / static_cast<float>(n2): 0;
            if (n2 != 0) std::cout << res;
            else std::cout << "Делить на 0 нельзя."; // "u can not divide by zero
            break;
        }
        default:
            std::cout << std::endl << "Ошибка ввода."; // "input error"
        
    }
}