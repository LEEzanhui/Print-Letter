#include "Letter.cpp"
#include <windows.h>
#include "init.cpp"

using namespace std;

int main(int argc, char const *argv[]) {
    //test();

    //cout << "welcome";
    //system("cls");

    while(1) {
        cout << "Model 1" << '\n';
        cout << "    print some figures" << '\n';
        cout << "Model 2" << '\n';
        cout << "    print some letters" << '\n';
        char input = legalInput(1, 2);

        if(input-'0' == 1) {
            figureMode();
        }
        else {
            letterMode();
        }
    }

    return 0;
}
