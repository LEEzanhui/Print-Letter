#include <iostream>
#include <windows.h>

using namespace std;

void setpos(int x,int y){
    COORD point={x,y};
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, point);
}
class Shape {
public:
    virtual void print(int initX, int initY, int k) const =0;
protected:
    static char fChar;
};
char Shape::fChar = '*';

class Line: public Shape {
public:
    Line(int begX, int endX, int begY, int endY);
    virtual void print(int initX, int initY, int k) const =0;
protected:
    int begX, begY, endX, endY;
};

Line::Line(int begX, int endX, int begY, int endY) {
    this->begX = begX;
    this->begY = begY;
    this->endX = endX;
    this->endY = endY;
}

class HorizonLine: public Line {
public:
    HorizonLine(int x, int begY, int endY);
    void print(int initX, int initY, int k) const;
private:
};
HorizonLine::HorizonLine(int x, int begY, int endY): Line(x, x, begY, endY){}

void HorizonLine::print(int initX, int initY, int k) const {
    setpos(initX, initY);
    int i;
    for(i = begY; i< 9 * k; i++) {
        cout << fChar;
    }
};
/*
class DiagonalLine: public Line {
public:
    DiagonalLine();
    void print const();
private:

};
DiagonalLine::DiagonalLine(int begX, int endX, int begY, int endY):
    begX(begX), endX(endX), begY(begY), endY(endY) {}

class VerticalLine: public Line {
public:
    VerticalLine();
    void print const();
private:

};
VerticalLine::VerticalLine(int begX, int endX, int Y):
    begX(begX), endX(endX), begY(Y), endY(Y) {}

class AntiDiagonalLine(): public Line {
public:
    AntiDiagonal();
    void print const();
private:

};
AntiDiagonal::AntiDiagonal(int begX, int endX, int begY, int endY):
    begX(begX), endX(endX), begY(begY), endY(endY) {}{}


    */
