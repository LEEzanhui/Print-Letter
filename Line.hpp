#ifndef LINE_HPP
#define LINE_HPP
#include <iostream>
#include <windows.h>
#include <cmath>

//x: col, y: row
void setpos(short int x, short int y);

class Pattern {
public:
    virtual void print(int initX, int initY, int k) const =0;
protected:
    static char fChar;
};

//��ֱ��Ĭ�ϴ�(0, 0)��ʼ��endX��endY����ֱ�������ɾ�������½�λ��
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
};
class VerticalLine: public Line {
public:
    VerticalLine(int endX, int endY);
    void print (int initX, int initY, int k) const;
};

class DiagonalLine: public Line {
public:
    DiagonalLine(int endX, int endY);
    void print(int initX, int initY, int k) const;
};
class AntiDiagonalLine: public Line {
public:
    AntiDiagonalLine(int endX, int endY);
    void print(int initX, int initY, int k) const;
};

class ObliqueLine: public Line {
public:
    ObliqueLine(int endX, int endY);
    void print(int initX, int initY, int k) const;
private:
    double theta;
};
class AntiObliqueLine: public Line {
public:
    AntiObliqueLine(int endX, int endY);
    void print(int initX, int initY, int k) const;
private:
    double theta;
};

#endif /* end of include guard: LINE_HPP */
