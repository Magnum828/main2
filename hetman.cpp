#include <iostream>

using namespace std;

int plansza[8][8];

int x = 0, y = 0, p = 64, h = 0;

void poziom(int x)
{
    for (int i=0; i<8; i++)
	if(plansza[x][i] == 0)
	{
		plansza[x][i] = 1;
		p--;
	}
}

void pion(int y)
{
    for (int i=0; i<8; i++)
	if(plansza[i][y] == 0)
	{
		plansza[i][y] = 1;
		p--;
	}
}

void przekatna(int x, int y)
{
    for (int i=0, j=0; i<8; i++, j++)
    if(plansza[j][i] == 0)
    {
        plansza[j][i] = 1;
        p--;
    }


}

void rysuj()
{
	cout << "  0 1 2 3 4 5 6 7" << endl;
	for (int i=0; i < 8; i++)
	{
		cout << i << " ";
		for (int j=0; j < 8; j++)
			cout << plansza[i][j] << " ";
		cout << endl;
	}
	cout << 'H' << ' ' << h << ' ' << 'P' << ' ' << p << '\n';
}

int main()
{
    rysuj();

    while(h<8)
    {

	do
    cin >> x >> y;
    while(plansza[x][y] != 0);

    plansza[x][y] = 2;

    h++;

    poziom(x);
    pion(y);
    przekatna(x, y);
    rysuj();
    }

    if(h == 8)
    cout << "Win";
    else
    cout << "Lose";
}
