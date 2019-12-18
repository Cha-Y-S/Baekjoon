#include <iostream>
#include <string>

using namespace std;

void checkGrade(string arr);

int main() {
	string result;
	int tCase;
	
	cin >> tCase;

	for (int i = 0; i < tCase; i++) {
		cin >> result;
		checkGrade(result);
	}
}

void checkGrade(string arr) {
	int num = 0;
	int sum = 0;
	bool connect = false;
	int i = 0;
	while (arr[i] != '\0') {
		if (arr[i] == 'O') {
			num++;
			sum += num;
			connect = true;
		}
		else {
			connect = false;
			num = 0;
		}
		i++;
	}
	cout << sum << endl;

}