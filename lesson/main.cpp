#include <iostream>
#include <Windows.h>
#include <string>

using std::string;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool end = false;
	string message = "";

	while (!end)
	{
		std::cout << "Введите команду: ";
		std::cin >> message;
		std::cout << std::endl;

		if (message == "Привет") {
			std::cout << "Привет, кожанный мешок!" << std::endl;
		}
	}

	return 0;
}
