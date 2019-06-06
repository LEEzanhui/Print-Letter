#ifndef LETTER_HPP
#define LETTER_HPP
#include <vector>
#include "Line.cpp"

class Figure: public Pattern {
public:
    Figure();
    void print(int initX, int initY, int k) const =0;
protected:
    std::vector<Line*> lines;
};

//standard size is 9*9
class AlphaZ: public Figure {
public:
    AlphaZ();
    void print(int x, int y, int k) const;
};

#endif /* end of include guard: LETTER_HPP */
