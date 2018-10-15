#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = 1;
	for (int i = 2; i <= n; i++) {
		a *= i;
	}
	cout << a << "\n";
}
