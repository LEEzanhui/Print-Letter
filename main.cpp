#include "Letter.cpp"
#include <windows.h>
#include <conio.h>
#include <string>

using namespace std;

char legalInput(int min, int max) {
    char input;
    input = getch();
    std::cout << '\n';
    //the input must be min~max or \x1B(Esc)
    while(!(input>=min+'0'&&input<=max+'0' || input=='\x1B') ) {
        std::cout << "Invalid input! Please re-enter: ";
        input = getch();
        std::cout << '\n';
    }
    system("cls");
    return input;
}

void printLetter(int initX, int initY, string str, int i, double k) {
    switch(str[i]) {
        case 'z':{
            AlphaZ z;
            z.print(initX, initY, k);
            }
            break;
        case 'l':{
            AlphaL l;
            l.print(initX, initY, k);
            }
            break;
        case 'y':{
            AlphaY y;
            y.print(initX, initY, k);
            }
            break;
        case 'k':{
            AlphaK tk;
            tk.print(initX, initY, k);
            }
            break;
    }
}

bool shift(int* PinitX, int* PinitY, double* PsizeLe) {
    char ch = getch();

    switch(ch) {
        case '\x1B':system("cls");
            return false;
        case 'a':(*PsizeLe) /= 1.1;
            return true;
        case 'd':(*PsizeLe) *= 1.1;
            return true;
        case 72:(*PinitY)--;
            return true;
        case 80:(*PinitY)++;
            return true;
        case 75:(*PinitX)--;
            return true;
        case 77:(*PinitX)++;
            return true;
    }
}

void figureMode() {
    cout << "choose which figure you want to..." << '\n';
    cout << "1 star" << '\n';
    cout << "2 tri" << '\n';
    while(1) {
        char fig = legalInput(1, 5);

        if(fig == '\x1B') {
            break;
        }

        switch( fig-'0' ) {
            case 1: cout << "star" << '\n';
                break;
            case 2: cout << "tri" << '\n';
                break;
            default:break;
        }
    }
}

void letterMode() {
    cout << "choose which letter you want to..." << '\n';
    cout << "L Y K N B" << '\n';

    string str;
    cin >> str;

//change initX and size here
    double sizeLe = 1.0;

    int initX = 0;
    int initY = 2;

    bool flag = true;

    for(; flag; ) {
        system("cls");

        cout << "direction keys control the position, a/d key control the size" << '\n';
        cout << "press esc to return" << '\n';

        int charX = initX;
        int charY = initY;
        for(int i=0; i < str.length(); i++ ) {
            printLetter(charX, charY, str, i, sizeLe);
            charX += sizeLe*10;
        }

        flag = shift(&initX, &initY, &sizeLe);
    }

}

void test();
int main(int argc, char const *argv[]) {
    //test();

    //cout << "welcome";
    //system("cls");

    while(1) {
        cout << "Model 1" << '\n';
        cout << "    print some figures" << '\n';
        cout << "Model 2" << '\n';
        cout << "    print some letters" << '\n';
        char input = legalInput(1, 2);

        if(input-'0' == 1) {
            figureMode();
        }
        else {
            letterMode();
        }
    }

    return 0;
}
void test() {
    // setpos(3, 1);

    AlphaS s1;
    s1.print(0, 0, 1);

    AlphaY y;
    y.print(11, 0, 1);

    AlphaS s2;
    s2.print(22, 0, 1);

    AlphaU u;
    u.print(33, 0, 1);

    AlphaL l;
    l.print(0, 10, 1);

    AlphaZ z;
    z.print(11, 10, 1);

    AlphaH h;
    h.print(22, 10, 1);

    AlphaO o;
    o.print(44, 0, 1);

    AlphaK k;
    k.print(55, 0, 1);






    // AntiDiagonalLine line2(4, 4);
    // line2.print(8, 0, 2);
    // AntiObliqueLine line1(4, 2);
    // line1.print(10, 10, 2);
    // CircleArc arc1(0, 45, 10);
    // CircleArc arc2(270, 360, 10);
    // arc1.print(10, 10, 1);
    // arc2.print(10, 10, 1);
    // DiagonalLine line1(17, 17);
    // line1.print(0, 10, 1);
    // Circle circle1(5);
    // circle1.print(10, 10, 1);

    setpos(20, 20);

}
