#include <iostream>

using namespace std;

void findFraction(int a);

int main() {
	int n;

	cin >> n;

	findFraction(n);
}

void findFraction(int a) {
	int num = 2; // numerator
	int den = 0; // denominator
	
	bool isNum = false;
	bool isDen = true;

	for (int i = 1; i <= a; i++) {
		if (isDen == true) {
			den++;
			num--;
		}
		else if (isNum == true) {
			num++;
			den--;
		}
	}

	cout << num << "/" << den << endl;
}