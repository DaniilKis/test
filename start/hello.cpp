#include <iostream>
#include <Windows.h>
using std::cin;
using std::cout;
using std::endl;

const int n = 3;

int state[n][n]{
	{2, 0, 1},
	{0, 1, 0},
	{0, 0, 2},
};

//0 - пуста€ клетка
//1 - крестик
//2 - нолик

// ¬ывод обычным методом
void printState() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char symbol = ' ';
			int currentCell = state[i][j];
			if (currentCell == 1) symbol = 'X';
			else if (currentCell == 2) symbol = 'O';
			cout << " " << symbol << " ";
		}
		cout << endl;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);	
	
	printState();

	return 0;
}
