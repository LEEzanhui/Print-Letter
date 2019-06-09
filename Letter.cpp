#include "Letter.hpp"
#include<windows.h>

//print x0+xi*k


AlphaH::AlphaH() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(7, 0) );
}
void AlphaH::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+9*k, y+1*k, k);
    patterns[2]->print(x+1*k, y+5*k, k);
}

AlphaK::AlphaK() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new AntiObliqueLine(7, 4) );
    patterns.push_back(new ObliqueLine(8, 4) );
}
void AlphaK::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+8*k, y+1*k, k);
    patterns[2]->print(x+1*k, y+5*k, k);
}

AlphaL::AlphaL() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(8, 0) );
}
void AlphaL::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+1*k, y+9*k, k);
}

AlphaO::AlphaO() {
    patterns.push_back(new Circle(4) );
}
void AlphaO::print(int x, int y, double k) const {
    patterns[0]->print(x+5*k, y+5*k, k);
}

AlphaS::AlphaS() {
    patterns.push_back(new CircleArc(0, 50, 2) );
    patterns.push_back(new CircleArc(180, 360, 2) );
    patterns.push_back(new CircleArc(0, 260, 2) );
}
void AlphaS::print(int x, int y, double k) const {
    patterns[0]->print(x+5*k, y+3*k, k);
    patterns[1]->print(x+5*k, y+3*k, k);
    patterns[2]->print(x+5*k, y+7*k, k);
}

AlphaU::AlphaU() {
    patterns.push_back(new VerticalLine(0, 3) );
    patterns.push_back(new CircleArc(90, 270, 4) );
    patterns.push_back(new VerticalLine(0, 3) );
}
void AlphaU::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+5*k, y+5*k, k);
    patterns[2]->print(x+9*k, y+1*k, k);
}

AlphaY::AlphaY() {
    patterns.push_back(new DiagonalLine(4, 4) );
    patterns.push_back(new AntiDiagonalLine(4, 4) );
    patterns.push_back(new VerticalLine(0, 4) );
}
void AlphaY::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+9*k, y+1*k, k);
    patterns[2]->print(x+5*k, y+5*k, k);
}

AlphaZ::AlphaZ() {
    patterns.push_back(new HorizonLine(8, 0) );
    patterns.push_back(new AntiDiagonalLine(8, 8) );
    patterns.push_back(new HorizonLine(8, 0) );
}
void AlphaZ::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+9*k, y+1*k, k);
    patterns[2]->print(x+1*k, y+9*k, k);
}
