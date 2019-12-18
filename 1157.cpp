#include <iostream>
#include <string>

using namespace std;

int checkAlphabet(string str);

int main() {
	string input;
	char print;
	cin >> input;

	int index = checkAlphabet(input);
	if (index == -1)
		cout << "?" << endl;
	else {
		cout << (char)index << endl;
	}
}

int checkAlphabet(string str) {
	int alphabet[26] = { 0 };

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 97 && str[i] <= 122)
			alphabet[str[i] - 97] += 1;
		else if (str[i] >= 65 && str[i] <= 90)
			alphabet[str[i] - 65] += 1;
	}
	int max = -1;
	int index = 0;
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			index = i + 65;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == max) {
			cnt++;
		}
	}
	if (cnt > 1) {
		index = -1;
		return index;
	}
	return index;
}