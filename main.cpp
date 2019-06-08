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

void printLetter(int initX, string str, int i) {
    switch(str[i]) {
        case 'z':break;
    }
}

void figureMode() {
    cout << "choose which figure you want to..." << '\n';
    while(1) {
        char fig = legalInput(1, 5);

        if(fig == '\x1B') {
            break;
        }

        switch( fig-'0' ) {
            case 1: cout << "!";
        }
    }
}

void letterMode() {
    cout << "choose which letter you want to..." << '\n';

    string str;
    cin >> str;

    cout << "plz enter the size of the letter (plz enter int)" << '\n';

    int size;

    int i=0;
    int initX=0;
    for(; i < str.length(); i++, initX += size*9) {
        printLetter(initX, str, i);
    }

    cout << "enter any key to return";
    getch();
}

int main(int argc, char const *argv[]) {
    cout << "»¶Ó­";
    Sleep(500);
    system("cls");

    while(1) {
        cout << "model 1" << '\n';
        cout << "print some figures" << '\n';
        cout << "model 2" << '\n';
        cout << "print letter" << '\n';
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

/*
    // setpos(3, 1);
     AlphaZ a;
     a.print(0, 0, 3);
    // AlphaO a;
    // a.print(0, 0, 1);
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
*/
