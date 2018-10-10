#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	while (a % 10 == 0) {
		a /= 10;
	}
	for (int i = 1; i <= a; i *= 10) {
		cout << a/i % 10;
	}
	cout << "\n";
}
