#include "Line.hpp"

void setpos(short int x, short int y) {
    COORD point={x,y};
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, point);
}

char Pattern::fChar = '*';


Line::Line(int endX, int endY):
    endX(endX), endY(endY) {}


HorizonLine::HorizonLine(int endX, int endY):
    Line(0, endY) {}
void HorizonLine::print(int initX, int initY, int k) const {
    setpos(initX, initY);
    int i;
    for(i = 0; i< endY * k; i++) {
        std::cout << fChar;
    }
};

VerticalLine::VerticalLine( int endX, int endY):
    Line(endX, 0) {}
void VerticalLine::print(int initX, int initY, int k) const {
    int i;
    for(i = 0; i < endX * k; i++) {
        setpos(initX, initY + i);
        std::cout << fChar;
    }
}


DiagonalLine::DiagonalLine(int endX, int endY):
    Line(endX, endY) {}
void DiagonalLine::print(int initX, int initY, int k) const {
    int i;
    for(i=0; i < endX * k; i++) {
        setpos(initX + i, initY + i);
        std::cout << fChar;
    }
}

AntiDiagonalLine::AntiDiagonalLine(int endX, int endY):
    Line(endX, endY) {}
void AntiDiagonalLine::print(int initX, int initY, int k) const {
    int i;
    for(i = 0; i < endX * k; i++) {
        setpos(initX - i, initY + i);
        std::cout << fChar;
    }
}


ObliqueLine::ObliqueLine(int endX, int endY):
    Line(endX, endY), theta(atan((double)endY/endX) ) {}
void ObliqueLine::print(int initX, int initY, int k) const {
    if(endX > endY)
      for(int x = 0; x < endX * k; x++) {
          setpos(initX + x + 0.5, initY + x*tan(theta) + 0.5);
          // + 0.5 实现四舍五入
          std::cout << fChar;
      }
    else for(int y = 0; y < endY * k; y++) {
        setpos(initX + y/tan(theta) + 0.5, initY + y + 0.5);
        std::cout << fChar;
    }
}

AntiObliqueLine::AntiObliqueLine(int endX, int endY):
    Line(endX, endY), theta(atan((double)endY/endX) ) {}
void AntiObliqueLine::print(int initX, int initY, int k) const {
    if(endX > endY)
      for(int x = 0; x < endX * k; x++) {
          setpos(initX - x + 0.5, initY + x*tan(theta) + 0.5);
          //+0.5 实现四舍五入
          std::cout << fChar;
      }
    else for(int y = 0; y < endY * k; y++) {
        setpos(initX - y/tan(theta) + 0.5, initY + y + 0.5);
        std::cout << fChar;
    }
}


CircleArc::CircleArc(int begDeg, int endDeg, int rad):
    begDeg(begDeg), endDeg(endDeg), rad(rad) {}
void CircleArc::print(int x0, int y0, int k) const {
    int i;
    for(i = begDeg; i < endDeg; i++) {
        setpos(x0 + rad*sin(i*PI/180.0) + 0.5, y0 - rad*cos(i*PI/180.0) + 0.5);
        std::cout << fChar;
    }
}

Circle::Circle(int rad): CircleArc(0, 360, rad) {}
