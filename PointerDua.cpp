#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    // Pointer Object mhs menggunakan alokasi dinamis
    mahasiswa *mhs = new mahasiswa; 
    mhs->nim = 2;
    mhs->showNim();
    
    delete mhs; // Menghapus memori yang dialokasikan
    return 0;
}