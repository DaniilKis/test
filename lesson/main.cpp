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
		std::cout << "������� �������: ";
		std::cin >> message;
		std::cout << std::endl;

		if (message == "������") {
			std::cout << "������, �������� �����!" << std::endl;
		}
	}

	return 0;
}
