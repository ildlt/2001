#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int a;
	int b;
	int z;

	cout << "Введите число a" << endl;
	cin >> a;
	cout << "Введите число b" << endl;
	cin >> b;					
	cout << "Результат умножения числа a на число b?" << endl;
	cin >> z;
	
	if (z==a*b) {
		cout << "Ответ правильный" << endl;	
	}
	else {
		cout << "Неправильно! Ответ: " << a*b <<endl;
	}
	return 0;
}