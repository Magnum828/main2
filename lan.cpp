#include <iostream>
using namespace std;

int main() {
	int a, x;
	cin >> a >> x;
	int y = a % 10;
	cout << 50*((y*2)+5)+1764-x;
}