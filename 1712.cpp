#include <iostream>

using namespace std;

int main() {
	int fix, var, sell;
	int cnt = 0;

	cin >> fix >> var >> sell;

	if (sell <= var)
		cout << -1 << endl;
	else {
		while (cnt <= fix / (sell - var))
			cnt++;
		cout << cnt << endl;
	}
	
	return 0;
}
/*
a - �������, b - �������, c - �ǸŰ���
�� ��� = A + B*n
�Ǹź�� > �������
A + B*n < C*n
A < (c-b)*n
n > a/(c-b), n>=0
c-b > 0, c>b
*/