// COMSC-210 | Lab 14 | Fahad Fawad Ahmad
// IDE used: Visual Studio
#include <iostream>

using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    int getRed() {return red;}
    int getGreen() {return green;}
    int getBlue() {return blue;}

    void setRed(int r) {red = r;}
    void setGreen(int g) {green = g;}
    void setBlue(int b) {blue = b;}

    void print() {
        cout << "Red: " << red << endl;
        cout << "Green: " << green << endl;
        cout << "Blue: " << blue << endl; 
    }
};

int main() {
    

}