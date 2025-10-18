#include <iostream>
using namespace std;

int main()
{
    int harga, potongan_harga;
    double diskon = 0.10;

    cout << "Input total belanja: ";
    cin >> harga;

    potongan_harga = harga * diskon;
    cout << "Total harga = " << harga - potongan_harga;
}
