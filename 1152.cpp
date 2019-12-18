#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;

	getline(cin, input);

	int cnt = 0;
	
	for (int i = 0; i < input.size(); i++) {
		if (i == 0)
			continue;
		if (i == input.size() - 1)
			continue;
		if (input[i - 1] != ' '&& input[i] == ' '&&input[i + 1] != ' ')
			cnt++;
	}
	if (input != ""&&input!=" ")
		cout << cnt + 1 << endl;
	else
		cout << cnt << endl;
	return 0;
}