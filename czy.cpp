#include <iostream>
using namespace std;

int main() {
	long long x;
	cin >> x;
	if ((x & (x - 1)) == 0) {
		cout << "TAK";
	} else {
		cout << "NIE";
	}
}