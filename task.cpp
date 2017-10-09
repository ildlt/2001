#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int a;
	int b;
	double q;
	double w;
	double e;
	double r;
	
	cout << "Введите число a" << endl;
	cin >> a;
	cout << "Введите число b" << endl;
	cin >> b;			
	q=a+b;
	cout << "Сумма a+b: " << q << endl;				
	w=a-b;
	cout << "Разность a-b: " << w << endl;			
	e=a*b;
	cout << "Произведение a*b: " << e << endl;	
	r=a/b;
	cout << "Частное a/b: " << r << endl;	
	return 0;
}