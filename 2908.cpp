#include <iostream>
#include <string>

using namespace std;

int main() {
	string input1, input2;
	
	cin >> input1;
	cin >> input2;

	char *invert1 = new char[input1.size()];
	char *invert2 = new char[input2.size()];

	int invertNum1, invertNum2;

	for (int i = 0; i < input1.size(); i++) {
		invert1[i] = input1[2 - i];
	}
	for (int i = 0; i < input2.size(); i++) {
		invert2[i] = input2[2 - i];
	}
	
	invertNum1 = (invert1[0]-'0') * 100 + (invert1[1]-'0') * 10 + (invert1[2]-'0');
	invertNum2 = (invert2[0]-'0') * 100 + (invert2[1]-'0') * 10 + (invert2[2]-'0');
	if (invertNum1 > invertNum2)
		cout << invertNum1 << endl;
	else
		cout << invertNum2 << endl;

}