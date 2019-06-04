#ifndef LINE_HPP
#define LINE_HPP
#include <iostream>
#include <windows.h>

//各种直线是否只保存长度

void setpos(short int x, short int y);

class Pattern {
public:
    virtual void print(int initX, int initY, int k) const =0;
protected:
    static char fChar;
};

class Line: public Pattern {
public:
    Line(int endX, int endY);
    virtual void print(int initX, int initY, int k) const =0;
protected:
    int endX, endY;
};

class HorizonLine: public Line {
public:
    HorizonLine(int endX, int endY);
    void print(int initX, int initY, int k) const;
private:
};

class VerticalLine: public Line {
public:
    VerticalLine(int endX, int endY);
    void print (int initX, int initY, int k) const;
private:

};


class DiagonalLine: public Line {
public:
    DiagonalLine(int endX, int endY);
    void print(int initX, int initY, int k) const;
private:

};

class AntiDiagonalLine: public Line {
public:
    AntiDiagonalLine(int endX, int endY);
    void print(int initX, int initY, int k) const;
private:

};



#endif /* end of include guard: LINE_HPP */
