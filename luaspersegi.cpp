#include <iostream>
using namespace std;

class Luaspersegipanjang
{
private:
    int panjang;
    int lebar;
    int luas;

public:
    void input_data()
    {
        cout << "Masukkan panjang =";
        cin >> panjang;
        cout << "Masukkan lebar =";
        cin >> lebar;
    }
    void hitung_luas()
    {
        luas = panjang * lebar;
    }
    void output_data()
    {
        cout << "Tampilkan luas =" << luas << endl;
    }
};

int main()
{
    Luaspersegipanjang lmao;
}
