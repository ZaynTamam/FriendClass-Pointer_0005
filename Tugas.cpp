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

    // Prototipe friend function
    friend double hitungKelilingBK(BelahKetupat bk, LayangLayang ll);

    void output() {
        cout << "Luas Belah Ketupat: " << hitungLuas() << endl;
    }
};

class LayangLayang {
private:
    double d1, d2, s1, s2;

public:
    void input() {
        cout << "\n--- Input Layang-Layang ---" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi 1    : "; cin >> s1;
        cout << "Sisi 2    : "; cin >> s2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 2 * (s1 + s2);
    }

    // Memberikan izin akses ke friend function yang didefinisikan di luar
    friend double hitungKelilingBK(BelahKetupat bk, LayangLayang ll);

    void output() {
        cout << "Luas Layang-Layang    : " << hitungLuas() << endl;
        cout << "Keliling Layang-Layang: " << hitungKeliling() << endl;
    }
};

double hitungKelilingBK(BelahKetupat bk, LayangLayang ll) {
    return 4 * bk.sisi;
}

int main() {
    // Akses hanya melalui object
    BelahKetupat bk;
    LayangLayang ll;

    bk.input();
    ll.input();

    cout << "\n--- Hasil Perhitungan ---" << endl;
    bk.output();
    // Memanggil friend function
    cout << "Keliling Belah Ketupat: " << hitungKelilingBK(bk, ll) << endl;
    
    ll.output();

    return 0;
}