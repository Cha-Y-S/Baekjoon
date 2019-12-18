#include <iostream>
#include <string>

using namespace std;

int checkRepeatedWord(string a);

int main() {
	int n;	// number of word
	int cnt = 0; // quantity of repeated word

	cin >> n;

	string *input = new string[n];
	
	for (int i = 0; i < n; i++) {
		cin >> input[i];
		cnt += checkRepeatedWord(input[i]);
	}
	cout << cnt << endl;
}

int checkRepeatedWord(string a) {
	int alphabet[26] = { 0 };

	for (int i = 0; i < a.length(); i++) {
		if (alphabet[a[i] - 'a'] == 0)
			alphabet[a[i] - 'a'] = 1;
		else if (alphabet[a[i] - 'a'] == 1 && a[i] == a[i - 1])
			continue;
		else
			return 0;
	}
	return 1;
}