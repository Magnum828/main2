#include <iostream>
#include <cstdlib>
#include <ctime>
#include <signal.h>
using namespace std;

inline int card() {
	int x = rand()%13+1;
	if (x > 10) {
		x = 10;
	}
	return x;
}

int your_wins = 0, their_wins = 0;

void onexit(int _) {
	if ((your_wins+their_wins) > 0) {
		cout << "\nWspółczynnik wygranych: " << 100.0*your_wins/(your_wins + their_wins) << "%\n";
	}
	exit(0);
}

int main() {
	signal(SIGINT, onexit);
	srand(time(nullptr));
	int your, shown_their, hidden_their;
	char c;
	bool zadanie_zrobione = true, na_lekcji = true;
	while (zadanie_zrobione == na_lekcji) {
		c = 0;
		your = card() + card();
		shown_their = card();
		hidden_their = card();
		cout << "Odkryta karta krupiera: " << shown_their << "\n";
		while (c != 's') {
			cout << "Suma twoich kart: " << your << "\n";
			if (your >= 21) {
				if (your == 21) {
					cout << "\nDokładnie 21, wygrywasz!\n";
					your_wins++;
				} else { // > 21
					cout << "\nPrzebiłeś 21, przegrywasz!\n";
					their_wins++;
				}
				goto round_end;
				
			}
			c = 0;
			while (c != 'h' && c != 's') {	
				cout << "(h)it czy (s)tand?\n";
				cin >> c;
			}
			if (c == 'h') {
				your += card();
			}
		}
		cout << "Suma twoich kart: " << your << "\n";
		cout << "Suma kart krupiera: " << shown_their + hidden_their << "\n";
		if (your > (shown_their + hidden_their)) {
			cout << "\nMasz więcej, wygrywasz!\n";
			your_wins++;
		} else if (your == (shown_their + hidden_their)) {
			cout << "\nMasz tyle samo, remis!\n";
		} else {
			cout << "\nMasz mniej, przegrywasz!\n";
			their_wins++;
		}
		round_end:
		cout << "Obecny wynik: " << your_wins << ":" << their_wins << "\n";
		cout << "\n\n--- Następna runda ---\n";
	}
}
