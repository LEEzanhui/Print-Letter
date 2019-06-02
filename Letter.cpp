#include <vector>
using namespace std;

class Figure: public Shape {
public:
    Figure(int x, int y, int k);
    void print(int initX, int initY, int k) const =0;
protected:
    std::vector<Line*> lines;
    int x, y, k;
};
Figure::Figure(int x, int y, int k) {
    this->x = x;
    this->y = y;
}

class AlphaZ: public Figure {
public:
    AlphaZ(int x, int y, int k);
    void print(int initX, int initY, int k) const{}
private:

};
AlphaZ::AlphaZ(int x, int y, int k): Figure(x, y, k) {
    Line *newLine = new HorizonLine(x, y, k);
    lines.push_back(newLine);
}
