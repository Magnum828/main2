#include <iostream>
using namespace std;

int main()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c;
    x = a+b;
    y = b+c;
    z = a+c;
    if(x>c && c>a && c>b)
        cout << "TAK";
    else if(y>a && a>b && a>c)
        cout << "TAK";
    else if(z>b && b>a && b>c)
        cout << "TAK";
    else if(a+b == b+c && a>0 && b>0 && c>0)
        cout << "TAK";
    else if(a==0 || b==0 || c==0)
        cout << "NIE";
    else
        cout << "NIE";
}
