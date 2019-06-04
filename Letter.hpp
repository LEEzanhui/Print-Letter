#ifndef LETTER_HPP
#define LETTER_HPP
#include <vector>
#include "Line.hpp"

class Figure: public Pattern {
public:
    Figure();
    void print(int initX, int initY, int k) const =0;
protected:
    std::vector<Line*> lines;
//    int x, y, k;
};

class AlphaZ: public Figure {
public:
    AlphaZ();
    void print(int x, int y, int k) const;
private:

};

#endif /* end of include guard: LETTER_HPP */
