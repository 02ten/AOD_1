// AOD_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int func_6(int A[],int n) {
	for (int i = 0; i < n; i++) {
		if (A[i] < 0) {
			return i;
		}
	}
	return -1;
}
void func_7(int A[], int n) {
	int key;
	cin >> key;
	for (int i = 0; i < n; i++) {
		if (A[i] == key) {
			cout << i<<' ';
		}
	}
}
void func_8(int A[], int n) {
	int value;
	int value_i;
	cin >> value;
	cin >> value_i;
	for (int i = n - 1; i >= value_i; i--) {
	A[i + 1] = A[i];
}
	A[value_i] = value;
	n++;
}
void func_9(int A[], int n) {
	int value_i;
	cin >> value_i;
	for (int i = value_i; i < n - 1; i++) {
		A[i] = A[i + 1];
	}
	n--;
}
void func_10(int A[], int n) {
	int value;
	cin >> value;
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] == value) {
			k++;
			for (int j = i; j < n - 1; j++) {
				A[j] = A[j + 1];
			}
		}
	}
	n = n - k;
}
void func_11(int A[], int n) {
	int value;
	int k = 0;
	cin >> value;
	for (int i = 0; i < n; i++) {
		A[k] = A[i];
		if (A[i] != value) {
			k++;
		}
	}
	n = k;
}

int main()
{
	int A[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	/*for (int i = 0; i < n; i++) {
		A[i] = rand();
		cout << A[i] << ' ';
		
	}*/
	cout << '\n';
	cout << func_6(A, n);
}


