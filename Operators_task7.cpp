#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	int b;

	cout << "Хочешь узнать, насколько вы со своей половинкой совместимы?" << endl;
	cout << "Скорее вводи номер своего знака зодиака! (1 - Овен, 2 - Близнецы, 3 - Дева, 4 - Стрелец)" << endl;
	cin >> a;

	cout << "Скорее вводи номер знака зодиака своей половинки! (1 - Овен, 2 - Близнецы, 3 - Дева, 4 - Стрелец)" << endl;
	cin >> b;

	if ((a == 1) && (b == 1)) {
		cout << "1%" << endl;
	}
	else if ((a == 1) && (b == 2)) {
		cout << "3%" << endl;
	}
	else if ((a == 1) && (b == 3)) {
		cout << "6%" << endl;
	}
	else if ((a == 1) && (b == 4)) {
		cout << "9%" << endl;
	}

	else if ((a == 2) && (b == 2)) {
		cout << "24%" << endl;
	}
	else if ((a == 2) && (b == 3)) {
		cout << "27%" << endl;
	}
	else if ((a == 2) && (b == 4)) {
		cout << "30%" << endl;
	}
	else if ((a == 2) && (b == 1)) {
		cout << "3%" << endl;
	}

	else if ((a == 3) && (b == 1)) {
		cout << "6%" << endl;
	}
	else if ((a == 3) && (b == 2)) {
		cout << "27%" << endl;
	}
	else if ((a == 3) && (b == 3)) {
		cout << "51%" << endl;
	}
	else if ((a == 3) && (b == 4)) {
		cout << "54%" << endl;
	}

	else if ((a == 4) && (b == 1)) {
		cout << "9%" << endl;
	}
	else if ((a == 4) && (b == 2)) {
		cout << "30%" << endl;
	}
	else if ((a == 4) && (b == 3)) {
		cout << "54%" << endl;
	}
	else if ((a == 4) && (b == 4)) {
		cout << "69%" << endl;
	}

	system("pause"); 
    return 0;
}