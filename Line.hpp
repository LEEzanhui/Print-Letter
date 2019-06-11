#ifndef LINE_HPP
#define LINE_HPP
#include <iostream>
#include <windows.h>
#include <cmath>

#define PI 3.14159265

//x: col, y: row
void setpos(short int x, short int y);

// num1, num2 are used to decide the location of a pattern,
// k is used to describe the size
// In the line class, they means the coordinate of bottom right hand corner
// In the CircleArc class, they means the coordinate of center
class Pattern {
public:
    virtual void print(int num1, int num2, double k) const =0;
    virtual void printInfo(int initX, int initY, double k) const =0;
protected:
    static char fChar;
};

class Line: public Pattern {
public:
    Line(int endX, int endY);
    virtual void print(int initX, int initY, double k) const =0;
    virtual void printInfo(int initX, int initY, double k) const =0;
protected:
    int endX, endY;
};

class HorizonLine: public Line {
public:
    HorizonLine(int endX, int endY);
    void print(int initX, int initY, double k) const;
    void printInfo(int initX, int initY, double k) const;
};
class VerticalLine: public Line {
public:
    VerticalLine(int endX, int endY);
    void print (int initX, int initY, double k) const;
    void printInfo(int initX, int initY, double k) const;
};

class DiagonalLine: public Line {
public:
    DiagonalLine(int endX, int endY);
    void print(int initX, int initY, double k) const;
    void printInfo(int initX, int initY, double k) const;
};
class AntiDiagonalLine: public Line {
public:
    AntiDiagonalLine(int endX, int endY);
    void print(int initX, int initY, double k) const;
    void printInfo(int initX, int initY, double k) const;
};

class ObliqueLine: public Line {
public:
    ObliqueLine(int endX, int endY);
    void print(int initX, int initY, double k) const;
    void printInfo(int initX, int initY, double k) const;
private:
    double theta;
};
class AntiObliqueLine: public Line {
public:
    AntiObliqueLine(int endX, int endY);
    void print(int initX, int initY, double k) const;
    void printInfo(int initX, int initY, double k) const;
private:
    double theta;
};

class CircleArc: public Pattern {
public:
    CircleArc(int begDeg, int endDeg, int rad);
    void print(int x0, int y0, double k) const;
    void printInfo(int initX, int initY, double k) const;
private:
    int begDeg, endDeg, rad;
};

class Circle: public CircleArc {
public:
    Circle(int rad);
};


#endif /* end of include guard: LINE_HPP */
