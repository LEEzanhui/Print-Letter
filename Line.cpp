#include "Line.hpp"

void setpos(short int x, short int y) {
    COORD point={x,y};
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, point);
}

char Pattern::fChar = '*';

Line::Line(int endX, int endY):
    endX(endX), endY(endY) {}

HorizonLine::HorizonLine(int endX, int endY): Line(0, endY) {}

void HorizonLine::print(int initX, int initY, int k) const {
    setpos(initX, initY);
    int i;
    for(i = 0; i< endY * k; i++) {
        std::cout << fChar;
    }
};

VerticalLine::VerticalLine( int endX, int endY): Line(endX, 0) {}

void VerticalLine::print(int initX, int initY, int k) const {
    int i;
    for(i = 0; i < endX * k; i++) {
        setpos(initX, initY + i);
        std::cout << fChar;
    }
}

DiagonalLine::DiagonalLine(int endX, int endY): Line(endX, endY) {}

void DiagonalLine::print(int initX, int initY, int k) const {
    int i;
    for(i=0; i < endX * k; i++) {
        setpos(initX + i, initY + i);
        std::cout << fChar;
    }
}

AntiDiagonalLine::AntiDiagonalLine(int endX, int endY): Line(endX, endY) {}

void AntiDiagonalLine::print(int initX, int initY, int k) const {
    int i;
    for(i = 0; i < endX * k; i++) {
        setpos(initX - i, initY + i);
        std::cout << fChar;
    }
}
