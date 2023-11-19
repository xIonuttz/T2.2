#include <iostream>
#include <cmath>
using namespace std;
float roundToNearestMultiple(float number, int multiple) {
    return round(number / multiple) * multiple;
}

float f(float n, bool isRoundedTo100 = false) {
    if (isRoundedTo100) {
        return roundToNearestMultiple(n, 100);
    }
    else {
        return round(n);
    }
}

int main() {
    float number = 146.89;

    cout << "Rounded to the closest integer: " << f(number) << endl;
    cout << "Rounded to the closest multiple of 100: " << f(number, true) << endl;

    return 0;
}
