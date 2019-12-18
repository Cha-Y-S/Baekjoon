#include <iostream>

using namespace std;

void numOfStudent(int arr[],int size);

int main() {
	int tCase;
	cin >> tCase;
	for (int i = 0; i < tCase; i++) {
		int size;
		cin >> size;
		int *input = new int[size];
		for (int j = 0; j < size; j++) {
			cin >> input[j];
		}
		numOfStudent(input,size);
	}
}

void numOfStudent(int arr[],int size) {
	int cnt = 0;
	int sum = 0;
	int avg = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	avg = sum / size;
	for (int i = 0; i < size; i++) {
		if (arr[i] > avg)
			cnt++;
	}
	cout << fixed;
	cout.precision(3);
	cout << ((double)cnt / (double)size) * 100 << "%" << endl;
}