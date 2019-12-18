#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	int alphabet[26] = {
		2,2,2,3,3,3,4,4,4,5,5,5,
		6,6,6,7,7,7,7,8,8,8,9,9,
		9,9
	};
	cin >> input;
	int sum = 0;
	for (int i = 0; i < input.size(); i++) {
		for (int j = 0; j < 26; j++) {
			if ((input[i] - 'A') == j)
				sum += alphabet[j] + 1;
		}
	}

	cout << sum << endl;
}
