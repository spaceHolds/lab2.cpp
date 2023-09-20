#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int problem1() {
    double x, resultOne, resultTwo;

    cout << "Enter a number: ";
    cin >> x;

    if (x >= 0) {
        resultOne = (cos(x) - pow(sin(x), 3));
        cout << resultOne;
    }

    else {
        resultTwo = (x * pow(exp(x), -x) + ((1) / (x - 1.3)));
        cout << resultTwo;
    }
    return 0;
}

int problem2() {
    double x, y;

    cout << "Enter an x and a y for a dot: ";
    cin >> x >> y;

    double lineEquation = -x + 2;

    if (x >= 0 && y >= 0 && y <= 2 && y >= lineEquation) {
        cout << "Included in the area";
    }
    else {
        cout << "Excluded in the area";
    }
    return 0;
}


int main()
{
    problem1();
    problem2();
    return 0;
} 