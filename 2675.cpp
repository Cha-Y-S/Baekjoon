#include <iostream>
#include <string>

using namespace std;

int main() {
	int tCase;

	cin >> tCase;
	
	for (int i = 0; i < tCase; i++) {
		int rotate;
		string input;
		string p;
		
		cin >> rotate;

		cin >> input;

		for (int i = 0; i < input.size(); i++) {
			for (int j = 0; j < rotate; j++) {
				p.push_back(input[i]);
			}
		}
		cout << p << endl;
	}
}