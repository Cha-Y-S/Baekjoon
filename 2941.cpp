#include <iostream>
#include <string>

using namespace std;

int main() {
	//c=,c-,dz=,d-,lj,nj,s=,z=
	string input;

	cin >> input;

	int cnt = 0;

	for (int i = 0; i < input.size(); i++) {
		cnt++;
		switch (input[i]) {
		case 'c':
			if (input[i + 1] == '=' || input[i + 1] == '-') {
				i++;
			}
			break;
		case 'd':
			if (input[i + 1] == '-') {
				i++;
			}
			else if ((input[i + 1] == 'z')&&(input[i + 2] == '=')) {
				i += 2;
			}
			break;
		case 'l':
			if (input[i + 1] == 'j') {
				i++;
			}
			break;
		case 'n':
			if (input[i + 1] == 'j')
				i++;
			break;
		case 's':
			if (input[i + 1] == '=')
				i++;
			break;
		case 'z':
			if (input[i + 1] == '=')
				i++;
			break;
		}
	}
	cout << cnt << endl;
	
	return 0;
}