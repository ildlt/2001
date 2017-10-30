#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	double a;
	double b;

	cout << "Введите вес первого кота в килограммах" << endl;
	cin >> a;
	cout << "Введите вес второго кота в килограммах" << endl;
	cin >> b;			
	if (a>5) {
		cout << "Возможно, у первого кота ожирение" << endl;	
	}
	if (b>5) {
		cout << "Возможно, у второго кота ожирение" << endl;
	}
	return 0;
}