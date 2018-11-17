#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	short tab[n];
	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}
	for (int i = 0; i < n; i+=2) {
		cout << tab[i] << " ";
	}
	cout << "\n";
	for (int i = 1; i < n; i+=2) {
		cout << tab[i] << " ";
	}
	cout << "\n";
}
