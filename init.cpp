#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>

using std::cout;
using std::cin;

void letterMode();
    void printLetter(int initX, int initY, char ch, double scale, bool printInfo);
void figureMode();

bool shift(int *PinitX, int *PinitY, double *scalePtr, bool *printInfoPtr);
char legalInput(int min, int max);


void letterMode() {
    cout << "You can print any letters as you wants, such as \"TA TQL\"" << '\n';
    string str;
    getline(cin, str);

//initialize initX and size here
    double scale = 1.0;
    int initX = 0, initY = 3;
    bool flag = true, printInfo = false;

    while(flag) {
        system("cls");
        bool inInfo;

        do {
            if(printInfo == false) {
                cout << "Direction keys control the position, a/d key control the size" << '\n';
                cout << "press 'e' to print the information of the letters" << '\n';
                cout << "press esc to return" << '\n' << '\n';
            }
            else {
                cout << "press any key to return" << '\n' << '\n';
            }

            inInfo = true;
            int charX = initX, charY = initY;
            for(int i=0; i < str.length(); i++ ) {
                printLetter(charX, charY, str[i], scale, printInfo);
                charY += (int)(charX + scale*11) / 66 * 11*scale;
                charX = (int)(charX + scale*11) % 66;
            }

            if( printInfo == true ) {
                char ch = getch();
                printInfo = false;
                inInfo = false;
                system( "cls" );
            }
        } while( inInfo == false );

        flag = shift(&initX, &initY, &scale, &printInfo);
    }

}
void printLetter(int initX, int initY, char ch, double scale, bool printInfo) {
    switch(ch) {
        case 'a': case 'A': {
            AlphaA a;
            if(printInfo == false)
            a.print(initX, initY, scale);
            else
            a.printInfo(initX, initY, scale);
        }
        break;
        case 'b': case 'B': {
            AlphaB b;
            if(printInfo == false)
            b.print(initX, initY, scale);
            else
            b.printInfo(initX, initY, scale);
        }
        break;
        case 'c': case 'C': {
            AlphaC c;
            if(printInfo == false)
            c.print(initX, initY, scale);
            else
            c.printInfo(initX, initY, scale);
        }
        break;
        case 'd': case 'D': {
            AlphaD d;
            if(printInfo == false)
            d.print(initX, initY, scale);
            else
            d.printInfo(initX, initY, scale);
        }
        break;
        case 'e': case 'E': {
            AlphaE e;
            if(printInfo == false)
            e.print(initX, initY, scale);
            else
            e.printInfo(initX, initY, scale);
        }
        break;
        case 'f': case 'F': {
            AlphaF f;
            if(printInfo == false)
            f.print(initX, initY, scale);
            else
            f.printInfo(initX, initY, scale);
        }
        break;
        case 'g': case 'G': {
            AlphaG g;
            if(printInfo == false)
            g.print(initX, initY, scale);
            else
            g.printInfo(initX, initY, scale);
        }
        break;
        case 'h': case 'H': {
            AlphaH h;
            if(printInfo == false)
            h.print(initX, initY, scale);
            else
            h.printInfo(initX, initY, scale);
        }
        break;
        case 'i': case 'I': {
            AlphaI i;
            if(printInfo == false)
            i.print(initX, initY, scale);
            else
            i.printInfo(initX, initY, scale);
        }
        break;
        case 'j': case 'J': {
            AlphaJ j;
            if(printInfo == false)
            j.print(initX, initY, scale);
            else
            j.printInfo(initX, initY, scale);
        }
        break;
        case 'k': case 'K': {
            AlphaK tk;
            if(printInfo == false)
            tk.print(initX, initY, scale);
            else
            tk.printInfo(initX, initY, scale);
        }
        break;
        case 'l': case 'L': {
            AlphaL l;
            if(printInfo == false)
            l.print(initX, initY, scale);
            else
            l.printInfo(initX, initY, scale);
        }
        break;
        case 'm': case 'M': {
            AlphaM m;
            if(printInfo == false)
            m.print(initX, initY, scale);
            else
            m.printInfo(initX, initY, scale);
        }
        break;
        case 'n': case 'N': {
            AlphaN n;
            if(printInfo == false)
            n.print(initX, initY, scale);
            else
            n.printInfo(initX, initY, scale);
        }
        break;
        case 'o': case 'O': {
            AlphaO o;
            if(printInfo == false)
            o.print(initX, initY, scale);
            else
            o.printInfo(initX, initY, scale);
        }
        break;
        case 'p': case 'P': {
            AlphaP p;
            if(printInfo == false)
            p.print(initX, initY, scale);
            else
            p.printInfo(initX, initY, scale);
        }
        break;
        case 'q': case 'Q': {
            AlphaQ q;
            if(printInfo == false)
            q.print(initX, initY, scale);
            else
            q.printInfo(initX, initY, scale);
        }
        break;
        case 'r': case 'R': {
            AlphaR r;
            if(printInfo == false)
            r.print(initX, initY, scale);
            else
            r.printInfo(initX, initY, scale);
        }
        break;
        case 's': case 'S': {
            AlphaS s;
            if(printInfo == false)
            s.print(initX, initY, scale);
            else
            s.printInfo(initX, initY, scale);
        }
        break;
        case 't': case 'T': {
            AlphaT t;
            if(printInfo == false)
            t.print(initX, initY, scale);
            else
            t.printInfo(initX, initY, scale);
        }
        break;
        case 'u': case 'U': {
            AlphaU u;
            if(printInfo == false)
            u.print(initX, initY, scale);
            else
            u.printInfo(initX, initY, scale);
        }
        break;
        case 'v': case 'V': {
            AlphaV v;
            if(printInfo == false)
            v.print(initX, initY, scale);
            else
            v.printInfo(initX, initY, scale);
        }
        break;
        case 'w': case 'W': {
            AlphaW w;
            if(printInfo == false)
            w.print(initX, initY, scale);
            else
            w.printInfo(initX, initY, scale);
        }
        break;
        case 'x': case 'X': {
            AlphaX x;
            if(printInfo == false)
            x.print(initX, initY, scale);
            else
            x.printInfo(initX, initY, scale);
        }
        break;
        case 'y': case 'Y': {
            AlphaY y;
            if(printInfo == false)
            y.print(initX, initY, scale);
            else
            y.printInfo(initX, initY, scale);
        }
        break;
        case 'z': case 'Z': {
            AlphaZ z;
            if(printInfo == false)
            z.print(initX, initY, scale);
            else
            z.printInfo(initX, initY, scale);
        }
        break;
        case ' ':
        break;
    }
}
void figureMode() {
    cout << "We have finished two figures' design, " << '\n';
    cout << "you can choose to print:" << '\n';
    cout << "1 circle" << '\n';
    cout << "2 star" << '\n';
    char fig = legalInput(1, 2);

    double scale = 1.0;
    int initX = 30, initY = 10;

    if(fig == '\x1B') {
        return;
    }

    bool flag = true;
    while(flag) {
        system("cls");
        cout << "press esc to return" << '\n';

        switch(fig - '0') {
            case 1:{
                Circle circle(10*scale);
                circle.print(initX, initY, scale);
                }
                break;
            case 2:{
                Star s;
                s.print(initX, initY, scale);
                }
                break;
            default:
                break;
        }
        bool useless;
        flag = shift(&initX, &initY, &scale, &useless);
    }
}

bool shift(int* PinitX, int* PinitY, double* scalePtr, bool* printInfoPtr) {
    char ch = getch();

    switch(ch) {
        case '\x1B':
        return false;
        case 'a':(*scalePtr) /= 1.1;
        return true;
        case 'd':(*scalePtr) *= 1.1;
        return true;
        case 72:(*PinitY)--;
        return true;
        case 80:(*PinitY)++;
        return true;
        case 75:(*PinitX)--;
        return true;
        case 77:(*PinitX)++;
        return true;
        case 'e':*printInfoPtr = true;
        return true;
    }
}
char legalInput(int min, int max) {
    char input;
    input = getch();
    cout << '\n';
    //the input must be min~max or \x1B(Esc)
    while(!(input>=min+'0'&&input<=max+'0' || input=='\x1B') ) {
        std::cout << "Invalid input! Please re-enter: ";
        input = getch();
        std::cout << '\n';
    }
    system("cls");
    return input;
}
