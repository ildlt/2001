#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	char a;

	cout << "Доволен ли гусь? (да/нет)" << endl;
	cin >> a;
	if (a=='да') {
		cout << "Отлично" << endl;	
	}
	if (a=='нет') {
		cout << "Гусю явно стоит прогуляться" << endl;
	}
	return 0;
}