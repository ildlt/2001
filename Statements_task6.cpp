#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int a;
	int z=0;
	cout << "Введите натуральное число" << endl;
	cin >> a;
	if (a<=0) {
    	cout << "Введите другое число" << endl;     
	}
   	else     	
        while (a>0) {
    		if ((a%10)%2==0) {
    		   z++;
    		   a/=10;
    		}    		
    	}
    	cout << "Количество четных цифр числа " << a << "= " << z <<endl;
	return 0;
}