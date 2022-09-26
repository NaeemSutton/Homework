#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int r, g, b; // r, g, b are the red, green, and blue components of the color
    int smallest; // smallest is the smallest of the three components
    cin >> r >> g >> b; // read the RGB values
    smallest =  min(r, min(g, b)); //can only min two values at a time


    r -= smallest; //subtract the smallest value from the other two
    g -= smallest; 
    b -= smallest;

    /*if (smallest == r) {         //old code that works but is not as efficient
        g = g - r;
        b = b - r;
        r = 0;
    } else if (smallest == g) {
        r = r - g;
        b = b - g;
        g = 0;
    } else if (smallest == b) {
        r = r - b;
        g = g - b;
        b = 0;
    } */



    


}