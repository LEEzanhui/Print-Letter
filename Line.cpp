#include "Line.hpp"

void setpos(short int x, short int y) {
    COORD point={x,y};
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, point);
}

char Pattern::fChar = '*';

Line::Line(int begX, int endX, int begY, int endY):
    begX(begX), endX(endX), begY(begY), endY(endY) {}

HorizonLine::HorizonLine(int x, int begY, int endY): Line(x, x, begY, endY) {}

void HorizonLine::print(int initX, int initY, int k) const {
    setpos(initX, initY);
    int i;
    for(i = begY; i< (endY-begY) * k; i++) {
        std::cout << fChar;
    }
};
/*
VerticalLine::VerticalLine(int begX, int endX, int Y): Line(begX, endX, Y, Y) {}

void VerticalLine::print(int initX, int initY, int k) const {
    int i;
    for(i = begX; i< (endX-endY) * k; i++) {
        setpos(initX, initY);
        std::cout << fChar;
    }
}
*/
