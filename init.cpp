#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>

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

void printLetter(int initX, int initY, string str, int i, double k, bool isPrint) {
    switch(str[i]) {
        case 'a':{
            AlphaA a;
            if(isPrint == false)
                a.print(initX, initY, k);
            else
                a.printInfo(initX, initY, k);
            }
            break;
        case 'b':{
            AlphaB b;
            if(isPrint == false)
                b.print(initX, initY, k);
            else
                b.printInfo(initX, initY, k);
            }
            break;
        case 'c':{
            AlphaC c;
            if(isPrint == false)
                c.print(initX, initY, k);
            else
                c.printInfo(initX, initY, k);
            }
            break;
        case 'd':{
            AlphaD d;
            if(isPrint == false)
                d.print(initX, initY, k);
            else
                d.printInfo(initX, initY, k);
            }
            break;
        case 'e':{
            AlphaE e;
            if(isPrint == false)
                e.print(initX, initY, k);
            else
                e.printInfo(initX, initY, k);
            }
            break;
        case 'f':{
            AlphaF f;
            if(isPrint == false)
                f.print(initX, initY, k);
            else
                f.printInfo(initX, initY, k);
            }
            break;
        case 'g':{
            AlphaG g;
            if(isPrint == false)
                g.print(initX, initY, k);
            else
                g.printInfo(initX, initY, k);
            }
            break;
        case 'h':{
            AlphaH h;
            if(isPrint == false)
                h.print(initX, initY, k);
            else
                h.printInfo(initX, initY, k);
            }
            break;
        case 'i':{
            AlphaI i;
            if(isPrint == false)
                i.print(initX, initY, k);
            else
                i.printInfo(initX, initY, k);
            }
            break;
        case 'j':{
            AlphaJ j;
            if(isPrint == false)
                j.print(initX, initY, k);
            else
                j.printInfo(initX, initY, k);
            }
            break;
        case 'k':{
            AlphaK tk;
            if(isPrint == false)
                tk.print(initX, initY, k);
            else
                tk.printInfo(initX, initY, k);
            }
            break;
        case 'l':{
            AlphaL l;
            if(isPrint == false)
                l.print(initX, initY, k);
            else
                l.printInfo(initX, initY, k);
            }
            break;
        case 'm':{
            AlphaM m;
            if(isPrint == false)
                m.print(initX, initY, k);
            else
                m.printInfo(initX, initY, k);
            }
            break;
        case 'n':{
            AlphaN n;
            if(isPrint == false)
                n.print(initX, initY, k);
            else
                n.printInfo(initX, initY, k);
            }
            break;
        case 'o':{
            AlphaO o;
            if(isPrint == false)
                o.print(initX, initY, k);
            else
                o.printInfo(initX, initY, k);
            }
            break;
        case 'p':{
            AlphaP p;
            if(isPrint == false)
                p.print(initX, initY, k);
            else
                p.printInfo(initX, initY, k);
            }
            break;
/*
        case 'q':{
            AlphaQ q;
            if(isPrint == false)
                q.print(initX, initY, k);
            else
                q.printInfo(initX, initY, k);
            }
            break;
*/
        case 'r':{
            AlphaR r;
            if(isPrint == false)
                r.print(initX, initY, k);
            else
                r.printInfo(initX, initY, k);
            }
            break;
        case 's':{
            AlphaS s;
            if(isPrint == false)
                s.print(initX, initY, k);
            else
                s.printInfo(initX, initY, k);
            }
            break;
        case 't':{
            AlphaT t;
            if(isPrint == false)
                t.print(initX, initY, k);
            else
                t.printInfo(initX, initY, k);
            }
            break;
        case 'u':{
            AlphaU u;
            if(isPrint == false)
                u.print(initX, initY, k);
            else
                u.printInfo(initX, initY, k);
            }
            break;
        case 'v':{
            AlphaV v;
            if(isPrint == false)
                v.print(initX, initY, k);
            else
                v.printInfo(initX, initY, k);
            }
            break;
        case 'w':{
            AlphaW w;
            if(isPrint == false)
                w.print(initX, initY, k);
            else
                w.printInfo(initX, initY, k);
            }
            break;
        case 'x':{
            AlphaX x;
            if(isPrint == false)
                x.print(initX, initY, k);
            else
                x.printInfo(initX, initY, k);
            }
            break;
        case 'y':{
            AlphaY y;
            if(isPrint == false)
                y.print(initX, initY, k);
            else
                y.printInfo(initX, initY, k);
            }
            break;
        case 'z':{
            AlphaZ z;
            if(isPrint == false)
                z.print(initX, initY, k);
            else
                z.printInfo(initX, initY, k);
            }
            break;
    }
}

bool shift(int* PinitX, int* PinitY, double* PsizeLe, bool* PisPrint) {
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
        case 'p':*PisPrint = true;
            return true;
    }
}

void figureMode() {
    cout << "choose which figure you want to..." << '\n';
    cout << "1 circle" << '\n';
    cout << "2 star" << '\n';
    while(1) {
        char fig = legalInput(1, 2);

        if(fig == '\x1B') {
            break;
        }

        switch( fig-'0' ) {
            case 1:{
                Circle circle(10);
                circle.print(30, 3, 1);
                }
                break;
            case 2:{
                Star s;
                s.print(30, 3, 1);
                }
                break;
            default:break;
        }

    }
}

void letterMode() {
    cout << "choose which letter you want to..." << '\n';
    cout << "L K Y N B" << '\n';

    string str;
    cin >> str;

//change initX and size here
    double sizeLe = 1.0;

    int initX = 0;
    int initY = 2;

    bool flag = true;
    bool isPrint = false;

    for(; flag; ) {
        system("cls");

        if(isPrint == false) {
            cout << "direction keys control the position, a/d key control the size" << '\n';
        }
        cout << "press esc to return" << '\n' << '\n';

        int charX = initX;
        int charY = initY;
        for(int i=0; i < str.length(); i++ ) {
            printLetter(charX, charY, str, i, sizeLe, isPrint);
            charX += sizeLe*11;
        }

        flag = shift(&initX, &initY, &sizeLe, &isPrint);
    }

}
