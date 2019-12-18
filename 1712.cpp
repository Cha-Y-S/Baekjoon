#include <iostream>

using namespace std;

int main() {
	int fix, var, sell;
	int cnt = 0;

	cin >> fix >> var >> sell;

	if (sell - var <= 0)
		cout << -1 << endl;
	else {
		for (;; cnt++) {
			if (fix + (var * cnt) < sell * cnt) {
				cout << cnt << endl;
				break;
			}
		}
	}

	return 0;
}