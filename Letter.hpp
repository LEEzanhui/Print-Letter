#ifndef LETTER_HPP
#define LETTER_HPP
#include <vector>
#include "Line.cpp"

class Figure: public Pattern {
public:
    void print(int initX, int initY, double k) const =0;
//    void printInfo(int initX, int initY, double k) const =0;
protected:
    std::vector<Pattern *> patterns;
};
//standard size of the framework is 11*11, with the Letter size is 9*9

class AlphaA: public Figure {
public:
    AlphaA();
    void print(int x, int y, double k) const;
};

class AlphaB: public Figure {
public:
    AlphaB();
    void print(int x, int y, double k) const;
};

class AlphaC: public Figure {
public:
    AlphaC();
    void print(int x, int y, double k) const;
};

class AlphaD: public Figure {
public:
    AlphaD();
    void print(int x, int y, double k) const;
};

class AlphaE: public Figure {
public:
    AlphaE();
    void print(int x, int y, double k) const;
};

class AlphaF: public Figure {
public:
    AlphaF();
    void print(int x, int y, double k) const;
};

class AlphaG: public Figure {
public:
    AlphaG();
    void print(int x, int y, double k) const;
};

class AlphaH: public Figure {
public:
    AlphaH();
    void print(int x, int y, double k) const;
};

class AlphaI: public Figure {
public:
    AlphaI();
    void print(int x, int y, double k) const;
};

class AlphaJ: public Figure {
public:
    AlphaJ();
    void print(int x, int y, double k) const;
};

class AlphaK: public Figure {
public:
    AlphaK();
    void print(int x, int y, double k) const;
};

class AlphaL: public Figure {
public:
    AlphaL();
    void print(int x, int y, double k) const;
};

class AlphaO: public Figure {
public:
    AlphaO();
    void print(int x, int y, double k) const;
};

class AlphaS: public Figure {
public:
    AlphaS();
    void print(int x, int y, double k) const;
};

class AlphaT: public Figure {
public:
    AlphaT();
    void print(int x, int y, double k) const;
};

class AlphaU: public Figure {
public:
    AlphaU();
    void print(int x, int y, double k) const;
};

class AlphaY: public Figure {
public:
    AlphaY();
    void print(int x, int y, double k) const;
};

class AlphaZ: public Figure {
public:
    AlphaZ();
    void print(int x, int y, double k) const;
};



#endif /* end of include guard: LETTER_HPP */
