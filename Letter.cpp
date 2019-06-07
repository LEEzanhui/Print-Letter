#include "Letter.hpp"
#include<windows.h>

//print 1*k+x*k-1
AlphaZ::AlphaZ() {
    lines.push_back(new HorizonLine(1, 7) );
    lines.push_back(new AntiDiagonalLine(7, 7) );
    lines.push_back(new HorizonLine(1, 7) );
}
void AlphaZ::print(int x, int y, int k) const {
    lines[0]->print(x+1*k, y+1*k, k);
    lines[1]->print(x+7*k+k, y+1*k, k);
    lines[2]->print(x+1*k, y+7*k+k, k);
}


AlphaS::AlphaS() {
    lines.push_back(new CircleArc(0, 45, 2) );
    lines.push_back(new CircleArc(180, 360, 2) );
    lines.push_back(new CircleArc(0, 235, 2) );
}
void AlphaS::print(int x, int y, int k) const {
    lines[0]->print(x+3*k, y+3*k, k);
    lines[1]->print(x+7*k, y+1, k);
    lines[2]->print(x+1, y+7*k, k);
}
