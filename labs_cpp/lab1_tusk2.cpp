#include <iostream>  // Включаем библиотеку для соут

int main()
{
	setlocale(LC_ALL, "RU");
	int n1 = 150;
	float n2 = 15.993;
	short n3 = 250;
	std::cout << n3;
	std::cout << "n1 = " << n1 << std::endl;
	std::cout << "n2 = " << n2 << std::endl;
	std::cout << "n3 = " << n3 << std::endl;

	short d = 29;
	std::string m = "Декабря";
	short y = 2005;
	std::cout << "Моя дата рождения: " << d << ' ' << m << ' ' << y << ' ' << "года" << std::endl;

	const float n4 = 2.3;
	const std::string s = "WINDOWS";
	std::cout << n4 << ' ' << s;
}

