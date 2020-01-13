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
a - 고정비용, b - 가변비용, c - 판매가격
총 비용 = A + B*n
판매비용 > 가변비용
A + B*n < C*n
A < (c-b)*n
n > a/(c-b), n>=0
c-b > 0, c>b
*/