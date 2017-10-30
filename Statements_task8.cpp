#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int a;
	int b;
	char z;
	double r;
	cout << "Введите число a" << endl;
	cin >> a;
	cout << "Введите число b" << endl;
	cin >> b;
	cout << "Выберите оператор, который хотите использовать (1-сложение; 2-вычитание; 3-умножение; 4-деление)" << endl;
	cin >> z;		
  	switch (z) {
    	case 1: {
	    	cout << a << " + " << b << " = " << a + b << endl; // выполнить сложение
	     	break;
	    }
	    case 2: {
	     	cout << a << " - " << b << " = " << a - b << endl; // выполнить вычитание
	     	break;
	    }
	    case 3: {
	     	cout << a << " * " << b << " = " << a * b << endl; // выполнить умножение
	    	break;
	    }
	    case 4: {
	     	cout << a << " / " << b << " = " << a / b << endl; // выполнить деление
	     	break;
		}
		default: {
     		cout << "Используйте поддерживаемый оператор" << endl;
		}
    }	
	return 0;
}