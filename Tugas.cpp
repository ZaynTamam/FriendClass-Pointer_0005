#include <iostream>
#include <cmath>

using namespace std;

class LayangLayang;

class BelahKetupat {
private:
    double d1, d2, sisi;

public:
    void input() {
        cout << "--- Input Belah Ketupat ---" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi      : "; cin >> sisi;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }