#ifndef LETTER_HPP
#define LETTER_HPP
#include <vector>
#include "Line.cpp"

class Figure: public Pattern {
public:
    void print(int initX, int initY, int k) const =0;
//    void printInfo(int initX, int initY, int k) const =0;
protected:
    std::vector<Pattern *> lines;
};
//standard size of the framework is 9*9, with the Letter size is 7*7

class AlphaZ: public Figure {
public:
    AlphaZ();
    void print(int x, int y, int k) const;
};

class AlphaY: public Figure {
public:
    AlphaY();
    void print(int x, int y, int k) const;
};

class AlphaO: public Figure {
public:
    AlphaO();
    void print(int x, int y, int k) const;
};

class AlphaS: public Figure {
public:
    AlphaS();
    void print(int x, int y, int k) const;
};


#endif /* end of include guard: LETTER_HPP */
