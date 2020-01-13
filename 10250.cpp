#include <iostream>

using namespace std;

int getRoomNum(int h, int w, int n);

int main() {
	int tCase, h, w, n;
	
	cin >> tCase;

	for (int i = 0; i < tCase; i++) {
		cin >> h >> w >> n;
		cout << getRoomNum(h, w, n) << endl;
	}
	return 0;
}

int getRoomNum(int h, int w, int n) {
	int room;

	if (n%h == 0) {
		room = h * 100;
		room += n / h;
	}
	else {
		room = (n%h) * 100;
		room += n / h + 1;
	}

	return room;

}