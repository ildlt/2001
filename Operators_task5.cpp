#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int a;
	int b;
	cout << "Привет! Выбери одного из 10 котиков. Потом сможешь покормить его!" << endl;
	cin >> a;

	switch (a) {
		case 1: {
			cout << "Этот кот ест только рыбу. Введите 1, чтобы покормить его." << endl;
			cin >> b;
			if (b = 1) {
				cout << "Кот покормлен!" << endl;
			}
			else {
				cout << "Кота не покормили!" << endl;
			}
			break;
		}
		case 2: {
			cout << "Этот кот ест только мясо. Введите 1, чтобы покормить его." << endl;
			cin >> b;
			if (b = 1) {
				cout << "Кот покормлен!" << endl;
			}
			else {
				cout << "Кота не покормили!" << endl;
			}
			break;
		}
		case 3: {
			cout << "Этот кот ест только молоко. Введите 1, чтобы покормить его." << endl;
			cin >> b;
			if (b = 1) {
				cout << "Кот покормлен!" << endl;
			}
			else {
				cout << "Кота не покормили!" << endl;
			}
			break;
		}
		case 4: {
			cout << "Этот кот ест только зелень. Введите 1, чтобы покормить его." << endl;
			cin >> b;
			if (b = 1) {
				cout << "Кот покормлен!" << endl;
			}
			else {
				cout << "Кота не покормили!" << endl;
			}
			break;
		}
		case 5: {
			cout << "Этот кот ест только жареное. Введите 1, чтобы покормить его." << endl;
			cin >> b;
			if (b = 1) {
				cout << "Кот покормлен!" << endl;
			}
			else
			{
				cout << "Кота не покормили!" << endl;
			}
			break;
		}
		case 6: {
			cout << "Этот кот ест только шоколад. Введите 1, чтобы покормить его." << endl;
			cin >> b;
			if (b = 1) {
				cout << "Кот покормлен!" << endl;
			}
			else {
				cout << "Кота не покормили!" << endl;
			}
			break;
		}
		case 7: {
			cout << "Этот кот ест только хлеб. Введите 1, чтобы покормить его." << endl;
			cin >> b;
			if (b = 1) {
				cout << "Кот покормлен!" << endl;
			}
			else {
				cout << "Кота не покормили!" << endl;
			}
			break;
		}
		case 8: {
			cout << "Этот кот ест только чипсы. Введите 1, чтобы покормить его." << endl;
			cin >> b;
			if (b = 1) {
				cout << "Кот покормлен!" << endl;
			}
			else {
				cout << "Кота не покормили!" << endl;
			}
			break;
		}
		case 9:	{
			cout << "Этот кот ест только курицу. Введите 1, чтобы покормить его." << endl;
			cin >> b;
			if (b = 1) {
				cout << "Кот покормлен!" << endl;
			}
			else {
				cout << "Кота не покормили!" << endl;
			}
			break;
		}
		case 10: {
			cout << "Этот кот ест только тортики. Введите 1, чтобы покормить его." << endl;
			cin >> b;
			if (b = 1) {
				cout << "Кот покормлен!" << endl;
			}
			else {
				cout << "Кота не покормили!" << endl;
			}
			break;
		}
		default: {
			cout << "У нас всего 10 котиков!" << endl;
			break;
		}
	}

	system("pause"); 
    return 0;
}