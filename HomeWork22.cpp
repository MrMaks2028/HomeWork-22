#include <iostream>
using namespace std;

void showArr(int a[], int len) {
	cout << "[";
	for (int i = 0; i < len; i++)
		cout << a[i] << ", ";
	cout << "\b\b]\n";
}

void refPow(int* pn, int num) {
	int q = *pn;
	for (int i = 1; i < num; i++)
		q *= *pn;
	*pn = q;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int a[10] = {2,1,4,3,6,5,8,7,10,9};
	int* pa = &a[1];
	cout << "Задача 1.\nИзначальный массив:\n";
	showArr(a, 10);
	for (int i = 0; i < 10; i += 2)
		swap(*(a + i), *(pa + i));
	showArr(a, 10);

	cout << "Задача 2.\n";
	int n = 10;
	cout << n << " в квадрате = ";
	refPow(&n, 2);
	cout << n;

	return 0;
}