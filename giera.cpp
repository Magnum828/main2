#include <cstdlib>
#include <iostream>
#include <ctime>
#include <fstream>
#include <windows.h>

using namespace std;

void clear() {
    COORD topLeft  = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
}

int main()
{
    int gra=1, a, b ,c, d;
    srand(time(NULL));
    cout << R"(
        #######################################
        # Najlepsze kolko krzyzyk, bo proste. #
        #                                     #
        #                                     #
        #      Michal "Magnum828" Hesek       #
        #                                     #
        #                                     #
        #                              v2.137 #
        #######################################
        )" ;
        Sleep(3500);
    jumpman:
    clear();
    cout << R"(
               Zasady gry:
                   Kolko i krzyzyk to gra strategiczna rozgrywana przez dwoch graczy,
                   najczesciej na kartce papieru w kratke.
                   Gracze obejmuja pola na przemian
                   dazac do objecia trzech pol w jednej linii,
                   przy jednoczesnym uniemozliwieniu tego samego przeciwnikowi.
                   Pole moze byc objete przez jednego gracza i nie zmienia swego wlasciciela
                   przez caly przebieg gry.
                   W najbardziej popularnej w Polsce wersji
                   gra odbywa sie na polu o wymiarach 3x3.



                   Reprezentacja graficzna:
                   puste pole - 0
                   X - 1
                   O - 2
                   Gracz zawsze jest krzyzykiem!
                   Plansza ponumerowana jest od 1 do 9 od lewego gornego rogu.
                   Poczekaj 10 sekund!
               )";
        gra = 1;
        int ruch = 0;
        int plansza[10][10] = {0};
        Sleep(10000);
        clear();
while(gra == 1){
    clear();
    cout << "Gracz:X" << '\n';
    cout << plansza[1][1] << '|' << plansza[1][2] << '|' << plansza[1][3] << '\n';
    cout << plansza[2][1] << '|' << plansza[2][2] << '|' << plansza[2][3] << '\n';
    cout << plansza[3][1] << '|' << plansza[3][2] << '|' << plansza[3][3] << '\n';
    cout << "Ktore pole wybierasz?" << '\n';
    cin >> a;
    if(a==1){
        plansza[1][1]=1;
    }
    else if(a==2){
        plansza[1][2]=1;
    }
    else if(a==3){
        plansza[1][3]=1;
    }
    else if(a==4){
        plansza[2][1]=1;
    }
    else if(a==5){
        plansza[2][2]=1;
    }
    else if(a==6){
        plansza[2][3]=1;
    }
    else if(a==7){
        plansza[3][1]=1;
    }
    else if(a==8){
        plansza[3][2]=1;
    }
    else if(a==9){
        plansza[3][3]=1;
    }
    b = rand()%3 + 1;
    c = rand()%3 + 1;
    if(plansza[b][c] != 1)
        plansza[b][c] = 2;
    else{

    while(plansza[b][c] == 1){
    b = rand()%3 + 1;
    c = rand()%3 + 1;
    if(plansza[b][c] == 0)
        plansza[b][c] = 2;
   }
  }
    ruch = ruch + 2;
    if(plansza[1][1] == 1 && plansza[1][2] == 1 && plansza[1][3] == 1){
        gra = 0;
        cout << "Wygrywa gracz!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[2][1] == 1 && plansza[2][2] == 1 && plansza[2][3] == 1){
        gra = 0;
        cout << "Wygrywa gracz!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[3][1] == 1 && plansza[3][2] == 1 && plansza[3][3] == 1){
        gra = 0;
        cout << "Wygrywa gracz!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[1][1] == 1 && plansza[2][1] == 1 && plansza[3][1] == 1){
        gra = 0;
        cout << "Wygrywa gracz!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[1][2] == 1 && plansza[2][2] == 1 && plansza[3][2] == 1){
        gra = 0;
        cout << "Wygrywa gracz!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[1][3] == 1 && plansza[2][3] == 1 && plansza[3][3] == 1){
        gra = 0;
        cout << "Wygrywa gracz!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[1][1] == 1 && plansza[2][2] == 1 && plansza[3][3] == 1){
        gra = 0;
        cout << "Wygrywa gracz!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[3][1] == 1 && plansza[2][2] == 1 && plansza[1][3] == 1){
        gra = 0;
        cout << "Wygrywa gracz!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[1][1] == 2 && plansza[1][2] == 2 && plansza[1][3] == 2){
        gra = 0;
        cout << "Wygrywa komputer!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[2][1] == 2 && plansza[2][2] == 2 && plansza[2][3] == 2){
        gra = 0;
        cout << "Wygrywa komputer!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[3][1] == 2 && plansza[3][2] == 2 && plansza[3][3] == 2){
        gra = 0;
        cout << "Wygrywa komputer!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[1][1] == 2 && plansza[2][1] == 2 && plansza[3][1] == 2){
        gra = 0;
        cout << "Wygrywa komputer!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[1][2] == 2 && plansza[2][2] == 2 && plansza[3][2] == 2){
        gra = 0;
        cout << "Wygrywa komputer!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[1][3] == 2 && plansza[2][3] == 2 && plansza[3][3] == 2){
        gra = 0;
        cout << "Wygrywa komputer!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[1][1] == 2 && plansza[2][2] == 2 && plansza[3][3] == 2){
        gra = 0;
        cout << "Wygrywa komputer!";
        Sleep(5000);
        goto jumpman;
    }
    else if(plansza[3][1] == 2 && plansza[2][2] == 2 && plansza[1][3] == 2){
        gra = 0;
        cout << "Wygrywa komputer!";
        Sleep(5000);
        goto jumpman;
    }
    else if(ruch >= 9){
        gra = 0;
        cout << "Remis!";
        Sleep(5000);
        goto jumpman;
    }
  }
}



