#include "Letter.hpp"

Figure::Figure(int x, int y, int k) {
    this->x = x;
    this->y = y;
}

AlphaZ::AlphaZ(int x, int y, int k): Figure(x, y, k) {
    lines.push_back(new HorizonLine(x, y, k) );
}
