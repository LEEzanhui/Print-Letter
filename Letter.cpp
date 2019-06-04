#include "Letter.hpp"

#include<windows.h>
Figure::Figure() {

}

AlphaZ::AlphaZ() {
    lines.push_back(new HorizonLine(0, 4) );
    lines.push_back(new AntiDiagonalLine(4, 4) );
    lines.push_back(new HorizonLine(0, 4) );
}

void AlphaZ::print(int x, int y, int k) const {
    lines[0]->print(x, y, k);
    lines[1]->print(x + 4*k, y, k);
    lines[2]->print(x, y + 4*k, k);
}
