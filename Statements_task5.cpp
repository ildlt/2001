#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int a;
	int z=0;
	cout << "Введите число" << endl;
	cin >> a;
	for (int i=1; i<=a; i++) {
		z=z+i;
	}
	cout << "Сумма всех чисел от 1 до " << a << " = " << z << endl;
	return 0;
}