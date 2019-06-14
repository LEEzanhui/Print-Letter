#include "Line.hpp"

using std::cout;

//x: col, y: row
void setpos(short int x, short int y) {
    COORD point={x,y};
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, point);
}

char Pattern::fChar = '*';


Line::Line(int endX, int endY): endX(endX), endY(endY) {}


HorizonLine::HorizonLine(int endX, int endY): Line(endX, 0) {}
void HorizonLine::print(int initX, int initY, double k) const {
    setpos(initX, initY);
    int i;
    for(i = 0; i <= endX * k; i++) {
        cout << fChar;
    }
};
void HorizonLine::printInfo(int initX, int initY, double k) const {
    cout << "    HorizonLine: from [" << initX << "," << initY
        << "] to [" << initX + endX*k << "," << initY + endY*k
        << "]" << '\n';
}

VerticalLine::VerticalLine(int endX, int endY): Line(0, endY) {}
void VerticalLine::print(int initX, int initY, double k) const {
    int i;
    for(i = 0; i <= endY * k; i++) {
        setpos(initX, initY + i);
        cout << fChar;
    }
}
void VerticalLine::printInfo(int initX, int initY, double k) const {
    cout << "    VerticalLine: from [" << initX << "," << initY
        << "] to [" << initX + endX*k << "," << initY + endY*k
        << "]" << '\n';
}


DiagonalLine::DiagonalLine(int endX, int endY): Line(endX, endY) {}
void DiagonalLine::print(int initX, int initY, double k) const {
    int i;
    for(i=0; i <= endX * k; i++) {
        setpos(initX + i, initY + i);
        cout << fChar;
    }
}
void DiagonalLine::printInfo(int initX, int initY, double k) const {
    cout << "    DiagonalLine: from [" << initX << "," << initY
        << "] to [" << initX + endX*k << "," << initY + endY*k
        << "]" << '\n';
}

AntiDiagonalLine::AntiDiagonalLine(int endX, int endY): Line(endX, endY) {}
void AntiDiagonalLine::print(int initX, int initY, double k) const {
    int i;
    for(i = 0; i <= endX * k; i++) {
        setpos(initX - i, initY + i);
        cout << fChar;
    }
}
void AntiDiagonalLine::printInfo(int initX, int initY, double k) const {
    cout << "    AntiDiagonalLine: from [" << initX << "," << initY
        << "] to [" << initX - endX*k << "," << initY + endY*k
        << "]" << '\n';
}


ObliqueLine::ObliqueLine(int endX, int endY):
    Line(endX, endY), theta(atan((double)endY/endX) ) {}
void ObliqueLine::print(int initX, int initY, double k) const {
    if(endX > endY)
      for(int x = 0; x <= endX * k; x++) {
          setpos(initX + x + 0.5, initY + x*tan(theta) + 0.5);
          // + 0.5 实现四舍五入
          cout << fChar;
      }
    else for(int y = 0; y <= endY * k; y++) {
        setpos(initX + y/tan(theta) + 0.5, initY + y + 0.5);
        cout << fChar;
    }
}
void ObliqueLine::printInfo(int initX, int initY, double k) const {
    cout << "    ObliqueLine: from [" << initX << "," << initY
        << "] to [" ;
    if(endX > endY)
        cout << initX + endX*k + 0.5 <<"," << initY + endX*k*tan(theta) + 0.5;
    else
        cout << initX + endY*k/tan(theta) + 0.5 << "," << initY + endY*k + 0.5;
    cout << "]" << '\n';
}

AntiObliqueLine::AntiObliqueLine(int endX, int endY):
    Line(endX, endY), theta(atan((double)endY/endX) ) {}
void AntiObliqueLine::print(int initX, int initY, double k) const {
    if(endX > endY)
      for(int x = 0; x <= endX * k; x++) {
          setpos(initX - x + 0.5, initY + x*tan(theta) + 0.5);
          //+0.5 实现四舍五入
          cout << fChar;
      }
    else for(int y = 0; y <= endY * k; y++) {
        setpos(initX - y/tan(theta) + 0.5, initY + y + 0.5);
        cout << fChar;
    }
}
void AntiObliqueLine::printInfo(int initX, int initY, double k) const {
    cout << "    AntiObliqueLine: from [" << initX << "," << initY
        << "] to [" ;
    if(endX > endY)
        cout << initX - endX*k + 0.5 <<"," << initY + endX*k*tan(theta) + 0.5;
    else
        cout << initX - endY*k/tan(theta) + 0.5 << "," << initY + endY*k + 0.5;
    cout << "]" << '\n';
}


CircleArc::CircleArc(int begDeg, int endDeg, int rad):
    begDeg(begDeg), endDeg(endDeg), rad(rad) {}
void CircleArc::print(int x0, int y0, double k) const {
    int i;
    for(i = begDeg; i <= endDeg; i++) {
        setpos(x0 + k*rad*sin(i*PI/180.0) + 0.5, y0 - k*rad*cos(i*PI/180.0) + 0.5);
        std::cout << fChar;
    }
}
void CircleArc::printInfo(int initX, int initY, double k) const {
    cout << "    CircleArc: origin [" << initX << "," << initY
        << "] begin degree:" << begDeg << " end degree:"
        << endDeg << " rad:" << rad << '\n';
}


Circle::Circle(int rad): CircleArc(0, 360, rad) {}
void Circle::printInfo(int initX, int initY, double k) const {
    cout << "   Circle: origin [" << initX << ',' << initY
        << "] rad:" << rad << '\n';
}
