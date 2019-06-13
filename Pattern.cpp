#include "Pattern.hpp"
#include<windows.h>

//print x0+xi*k

AlphaA::AlphaA() {
    patterns.push_back(new AntiObliqueLine(4, 8) );
    patterns.push_back(new ObliqueLine(4, 8) );
    patterns.push_back(new HorizonLine(4, 0) );
}
void AlphaA::print(int x, int y, double k) const {
    patterns[0]->print(x+5*k, y+1*k, k);
    patterns[1]->print(x+5*k, y+1*k, k);
    patterns[2]->print(x+3*k, y+5*k, k);
}
void AlphaA::printInfo(int x, int y, double k) const {
    cout << "AlphaA: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+5*k, y+1*k, k);
    patterns[1]->printInfo(x+5*k, y+1*k, k);
    patterns[2]->printInfo(x+3*k, y+5*k, k);
}

AlphaB::AlphaB() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(5, 0) );
    patterns.push_back(new HorizonLine(5, 0) );
    patterns.push_back(new HorizonLine(5, 0) );
    patterns.push_back(new CircleArc(0, 180, 2) );
    patterns.push_back(new CircleArc(0, 180, 2) );
}
void AlphaB::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+1*k, y+1*k, k);
    patterns[2]->print(x+1*k, y+5*k, k);
    patterns[3]->print(x+1*k, y+9*k, k);
    patterns[4]->print(x+6*k, y+3*k, k);
    patterns[5]->print(x+6*k, y+7*k, k);
}
void AlphaB::printInfo(int x, int y, double k) const {
    cout << "AlphaB: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+1*k, y+1*k, k);
    patterns[2]->printInfo(x+1*k, y+5*k, k);
    patterns[3]->printInfo(x+1*k, y+9*k, k);
    patterns[4]->printInfo(x+6*k, y+3*k, k);
    patterns[5]->printInfo(x+6*k, y+7*k, k);
}

AlphaC::AlphaC() {
    patterns.push_back(new CircleArc(0, 30, 4) );
    patterns.push_back(new CircleArc(120, 360, 4) );
}
void AlphaC::print(int x, int y, double k) const {
    patterns[0]->print(x+5*k, y+5*k, k);
    patterns[1]->print(x+5*k, y+5*k, k);
}
void AlphaC::printInfo(int x, int y, double k) const {
    cout << "AlphaC: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+5*k, y+5*k, k);
    patterns[1]->printInfo(x+5*k, y+5*k, k);
}

AlphaD::AlphaD() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(4, 0) );
    patterns.push_back(new CircleArc(0, 180, 4) );
    patterns.push_back(new HorizonLine(4, 0) );
}
void AlphaD::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+1*k, y+1*k, k);
    patterns[2]->print(x+4*k, y+5*k, k);
    patterns[3]->print(x+1*k, y+9*k, k);
}
void AlphaD::printInfo(int x, int y, double k) const {
    cout << "AlphaD: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+1*k, y+1*k, k);
    patterns[2]->printInfo(x+4*k, y+5*k, k);
    patterns[3]->printInfo(x+1*k, y+9*k, k);
}

AlphaE::AlphaE() {
    patterns.push_back(new HorizonLine(8, 0) );
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(8, 0) );
    patterns.push_back(new HorizonLine(7, 0) );
}
void AlphaE::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+1*k, y+1*k, k);
    patterns[2]->print(x+1*k, y+9*k, k);
    patterns[3]->print(x+1*k, y+5*k, k);
}
void AlphaE::printInfo(int x, int y, double k) const {
    cout << "AlphaE: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+1*k, y+1*k, k);
    patterns[2]->printInfo(x+1*k, y+9*k, k);
    patterns[3]->printInfo(x+1*k, y+5*k, k);
}

AlphaF::AlphaF() {
    patterns.push_back(new HorizonLine(8, 0) );
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(7, 0) );
}
void AlphaF::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+1*k, y+1*k, k);
    patterns[2]->print(x+1*k, y+5*k, k);
}
void AlphaF::printInfo(int x, int y, double k) const {
    cout << "AlphaF: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+1*k, y+1*k, k);
    patterns[2]->printInfo(x+1*k, y+5*k, k);
}

AlphaG::AlphaG() {
    patterns.push_back(new CircleArc(0, 60, 4) );
    patterns.push_back(new CircleArc(120, 360, 4) );
    patterns.push_back(new HorizonLine(3, 0) );
}
void AlphaG::print(int x, int y, double k) const {
    patterns[0]->print(x+5*k, y+5*k, k);
    patterns[1]->print(x+5*k, y+5*k, k);
    patterns[2]->print(x+5*k, y+6*k, k);
}
void AlphaG::printInfo(int x, int y, double k) const {
    cout << "AlphaG: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+5*k, y+5*k, k);
    patterns[1]->printInfo(x+5*k, y+5*k, k);
    patterns[2]->printInfo(x+5*k, y+6*k, k);
}

AlphaH::AlphaH() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(8, 0) );
}
void AlphaH::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+9*k, y+1*k, k);
    patterns[2]->print(x+1*k, y+5*k, k);
}
void AlphaH::printInfo(int x, int y, double k) const {
    cout << "AlphaH: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+9*k, y+1*k, k);
    patterns[2]->printInfo(x+1*k, y+5*k, k);
}

AlphaI::AlphaI() {
    patterns.push_back(new HorizonLine(4, 0) );
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(4, 0) );
}
void AlphaI::print(int x, int y, double k) const {
    patterns[0]->print(x+3*k, y+1*k, k);
    patterns[1]->print(x+5*k, y+1*k, k);
    patterns[2]->print(x+3*k, y+9*k, k);
}
void AlphaI::printInfo(int x, int y, double k) const {
    cout << "AlphaI: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+3*k, y+1*k, k);
    patterns[1]->printInfo(x+5*k, y+1*k, k);
    patterns[2]->printInfo(x+3*k, y+9*k, k);
}

AlphaJ::AlphaJ() {
    patterns.push_back(new HorizonLine(6, 0) );
    patterns.push_back(new VerticalLine(0, 5) );
    patterns.push_back(new CircleArc(90, 250, 2) );
}
void AlphaJ::print(int x, int y, double k) const {
    patterns[0]->print(x+2*k, y+1*k, k);
    patterns[1]->print(x+5*k, y+1*k, k);
    patterns[2]->print(x+3*k, y+7*k, k);
}
void AlphaJ::printInfo(int x, int y, double k) const {
    cout << "AlphaJ: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+2*k, y+1*k, k);
    patterns[1]->printInfo(x+5*k, y+1*k, k);
    patterns[2]->printInfo(x+3*k, y+7*k, k);
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
void AlphaK::printInfo(int x, int y, double k) const {
    cout << "AlphaK: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+8*k, y+1*k, k);
    patterns[2]->printInfo(x+1*k, y+5*k, k);
}

AlphaL::AlphaL() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(8, 0) );
}
void AlphaL::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+1*k, y+9*k, k);
}
void AlphaL::printInfo(int x, int y, double k) const {
    cout << "AlphaL: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+1*k, y+9*k, k);
}

AlphaM::AlphaM() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new ObliqueLine(4, 4) );
    patterns.push_back(new AntiObliqueLine(4, 4) );
    patterns.push_back(new VerticalLine(0, 8) );
}
void AlphaM::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+1*k, y+1*k, k);
    patterns[2]->print(x+9*k, y+1*k, k);
    patterns[3]->print(x+9*k, y+1*k, k);
}
void AlphaM::printInfo(int x, int y, double k) const {
    cout << "AlphaM: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+1*k, y+1*k, k);
    patterns[2]->printInfo(x+9*k, y+1*k, k);
    patterns[3]->printInfo(x+9*k, y+1*k, k);
}

AlphaN::AlphaN() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new ObliqueLine(8, 8) );
    patterns.push_back(new VerticalLine(0, 8) );
}
void AlphaN::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+1*k, y+1*k, k);
    patterns[2]->print(x+9*k, y+1*k, k);
}
void AlphaN::printInfo(int x, int y, double k) const {
    cout << "AlphaN: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+1*k, y+1*k, k);
    patterns[2]->printInfo(x+9*k, y+1*k, k);
}

AlphaO::AlphaO() {
    patterns.push_back(new Circle(4) );
}
void AlphaO::print(int x, int y, double k) const {
    patterns[0]->print(x+5*k, y+5*k, k);
}
void AlphaO::printInfo(int x, int y, double k) const {
    cout << "AlphaO: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+5*k, y+5*k, k);
}

AlphaP::AlphaP() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(4, 0) );
    patterns.push_back(new CircleArc(0, 180, 2) );
    patterns.push_back(new HorizonLine(4, 0) );
}
void AlphaP::print(int x, int y, double k) const {
    patterns[0]->print(x+2*k, y+1*k, k);
    patterns[1]->print(x+2*k, y+1*k, k);
    patterns[2]->print(x+6*k, y+3*k, k);
    patterns[3]->print(x+2*k, y+5*k, k);
}
void AlphaP::printInfo(int x, int y, double k) const {
    cout << "AlphaP: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+2*k, y+1*k, k);
    patterns[1]->printInfo(x+2*k, y+1*k, k);
    patterns[2]->printInfo(x+6*k, y+3*k, k);
    patterns[3]->printInfo(x+2*k, y+5*k, k);
}

AlphaQ::AlphaQ() {
    patterns.push_back(new CircleArc(0, 360, 4) );
    patterns.push_back(new ObliqueLine(3, 2) );
}
void AlphaQ::print(int x, int y, double k) const {
    patterns[0]->print(x+5*k, y+5*k, k);
    patterns[1]->print(x+6*k, y+7*k, k);
}
void AlphaQ::printInfo(int x, int y, double k) const {
    cout << "AlphaQ: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+5*k, y+5*k, k);
    patterns[1]->printInfo(x+6*k, y+7*k, k);
}

AlphaR::AlphaR() {
    patterns.push_back(new VerticalLine(0, 8) );
    patterns.push_back(new HorizonLine(4, 0) );
    patterns.push_back(new CircleArc(0, 180, 2) );
    patterns.push_back(new HorizonLine(4, 0) );
    patterns.push_back(new ObliqueLine(8, 4) );
}
void AlphaR::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+1*k, y+1*k, k);
    patterns[2]->print(x+5*k, y+3*k, k);
    patterns[3]->print(x+1*k, y+5*k, k);
    patterns[4]->print(x+1*k, y+5*k, k);
}
void AlphaR::printInfo(int x, int y, double k) const {
    cout << "AlphaR: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+1*k, y+1*k, k);
    patterns[2]->printInfo(x+5*k, y+3*k, k);
    patterns[3]->printInfo(x+1*k, y+5*k, k);
    patterns[4]->printInfo(x+1*k, y+5*k, k);
}

AlphaS::AlphaS() {
    patterns.push_back(new CircleArc(0, 50, 2) );
    patterns.push_back(new HorizonLine(2, 0) );
    patterns.push_back(new CircleArc(180, 360, 2) );
    patterns.push_back(new HorizonLine(2, 0) );
    patterns.push_back(new CircleArc(0, 180, 2) );
    patterns.push_back(new HorizonLine(2, 0) );
    patterns.push_back(new CircleArc(180, 260, 2) );
}
void AlphaS::print(int x, int y, double k) const {
    patterns[0]->print(x+6*k, y+3*k, k);
    patterns[1]->print(x+4*k, y+1*k, k);
    patterns[2]->print(x+4*k, y+3*k, k);
    patterns[3]->print(x+4*k, y+5*k, k);
    patterns[4]->print(x+6*k, y+7*k, k);
    patterns[5]->print(x+4*k, y+9*k, k);
    patterns[6]->print(x+4*k, y+7*k, k);
}
void AlphaS::printInfo(int x, int y, double k) const {
    cout << "AlphaS: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+6*k, y+3*k, k);
    patterns[1]->printInfo(x+4*k, y+1*k, k);
    patterns[2]->printInfo(x+4*k, y+3*k, k);
    patterns[3]->printInfo(x+4*k, y+5*k, k);
    patterns[4]->printInfo(x+6*k, y+7*k, k);
    patterns[5]->printInfo(x+4*k, y+9*k, k);
    patterns[6]->printInfo(x+4*k, y+7*k, k);
}

AlphaT::AlphaT() {
    patterns.push_back(new HorizonLine(8, 0) );
    patterns.push_back(new VerticalLine(0, 8) );
}
void AlphaT::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+5*k, y+1*k, k);
}
void AlphaT::printInfo(int x, int y, double k) const {
    cout << "AlphaT: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+5*k, y+1*k, k);
}

AlphaU::AlphaU() {
    patterns.push_back(new VerticalLine(0, 4) );
    patterns.push_back(new CircleArc(90, 270, 4) );
    patterns.push_back(new VerticalLine(0, 4) );
}
void AlphaU::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+5*k, y+5*k, k);
    patterns[2]->print(x+9*k, y+1*k, k);
}
void AlphaU::printInfo(int x, int y, double k) const {
    cout << "AlphaU: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+5*k, y+5*k, k);
    patterns[2]->printInfo(x+9*k, y+1*k, k);
}

AlphaV::AlphaV() {
    patterns.push_back(new ObliqueLine(4, 7) );
    patterns.push_back(new AntiObliqueLine(4, 7) );
}
void AlphaV::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+2*k, k);
    patterns[1]->print(x+9*k, y+2*k, k);
}
void AlphaV::printInfo(int x, int y, double k) const {
    cout << "AlphaV: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+2*k, k);
    patterns[1]->printInfo(x+9*k, y+2*k, k);
}

AlphaW::AlphaW() {
    patterns.push_back(new ObliqueLine(1, 8) );
    patterns.push_back(new AntiObliqueLine(3, 5) );
    patterns.push_back(new ObliqueLine(3, 5) );
    patterns.push_back(new AntiObliqueLine(1, 8) );
}
void AlphaW::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+5*k, y+4*k, k);
    patterns[2]->print(x+5*k, y+4*k, k);
    patterns[3]->print(x+9*k, y+1*k, k);
}
void AlphaW::printInfo(int x, int y, double k) const {
    cout << "AlphaW: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+5*k, y+4*k, k);
    patterns[2]->printInfo(x+5*k, y+4*k, k);
    patterns[3]->printInfo(x+9*k, y+1*k, k);
}

AlphaX::AlphaX() {
    patterns.push_back(new DiagonalLine(8, 8) );
    patterns.push_back(new AntiDiagonalLine(8, 8) );
}
void AlphaX::print(int x, int y, double k) const {
    patterns[0]->print(x+1*k, y+1*k, k);
    patterns[1]->print(x+9*k, y+1*k, k);
}
void AlphaX::printInfo(int x, int y, double k) const {
    cout << "AlphaX: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+9*k, y+1*k, k);
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
void AlphaY::printInfo(int x, int y, double k) const {
    cout << "AlphaY: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+9*k, y+1*k, k);
    patterns[2]->printInfo(x+5*k, y+5*k, k);
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
void AlphaZ::printInfo(int x, int y, double k) const {
    cout << "AlphaZ: [" << x << "," << y << "]" << '\n';

    patterns[0]->printInfo(x+1*k, y+1*k, k);
    patterns[1]->printInfo(x+9*k, y+1*k, k);
    patterns[2]->printInfo(x+1*k, y+9*k, k);
}

Star::Star() {
    patterns.push_back( new ObliqueLine( (cos(54*PI/180.0))*20, (-0.5-(1))*16*(-1) ) );
    patterns.push_back( new ObliqueLine( (cos(54*PI/180.0)-( -cos(18*PI/180.0) ))*20, (-0.5-(sin(18*PI/180.0) ))*20*(-1) ) );
    patterns.push_back( new AntiObliqueLine( (cos(54*PI/180.0))*20, (-0.5-(1))*16*(-1) ) );
    patterns.push_back( new AntiObliqueLine( (cos(54*PI/180.0)-( -cos(18*PI/180.0) ))*20, (-0.5-(sin(18*PI/180.0) ))*20*(-1) ) );
    patterns.push_back( new HorizonLine( cos(18*PI/180.0)*2*20, 0) );
}
void Star::print(int x, int y, double k) const {
    patterns[0]->print(x, y+1*k, k);
    patterns[1]->print(x+(-cos(18*PI/180.0))*k*20, y+(0.5)*k*20, k );
    patterns[2]->print(x, y+1*k, k);
    patterns[3]->print(x+(cos(18*PI/180.0))*k*20, y+(0.5)*k*20, k );
    patterns[4]->print(x+(-cos(18*PI/180.0))*k*20, y+(0.5)*k*20, k );
}
