#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    int m = s / 60;
    int h = m / 60;
    cout << h << "g" << m % 60 << "m" << s % 60 << "s";
}
