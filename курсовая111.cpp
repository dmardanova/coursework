#include <iostream>
#include "Header1.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "\tКурсовая работа:\n";
	cout << "Практическая работа номер 1\n";
	cout << "Практическая работа номер 2\n";
	cout << "Практическая работа номер 3\n";
	cout << "Практическая работа номер 4\n";
	int number;
	cin >> number;
	cin.sync();
	switch (number) {
	case 1:
		system("cls");
		p11();
		break;
	case 2:
		p22();
		break;
	case 3:
		p33();
		break;
	case 4:
		p44();
		break;
	}
	main();
	return 0;
}


