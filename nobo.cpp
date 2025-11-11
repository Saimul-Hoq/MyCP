#include <iostream>

using namespace std;

void multiplyBy2(float array[], int n) {
    for (int i = 0; i < n; ++i) {
        array[i] *= 2;
    }
}

int main() {
    float floatVals[4] = {1.2f, 3.7f, 6.2f, 8.55f};

    multiplyBy2(floatVals, 4);

    for (int i = 0; i < 4; i++) {
        cout << floatVals[i] << " ";
    }

    return 0;
}