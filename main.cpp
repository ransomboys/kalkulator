#include <iostream>
using namespace std;

int main(){

    int nomor, satu, dua, hasil;

    cout << "=========================" << endl;
    cout << "     Author: Pennywise   " << endl;
    cout << "   KALKULATOR SEDERHANA  " << endl;
    cout << "=========================" << endl;
    cout << "1. Tambahan" << endl;
    cout << "2. Kurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "=========================" << endl;
    cout << "=========================" << endl;
    cout << "@root::Masukan nomor:--> ";
    cin >> nomor;

    if (nomor == 1){
        cout << "masukan no pertama: ";
        cin >> satu;
        cout << "masukan no kedua: ";
        cin >> dua;

        hasil = satu + dua;
        cout << satu << " + " << dua << " = " << hasil << endl;

    } else if (nomor == 2){
        cout << "masukan no pertama: ";
        cin >> satu;
        cout << "masukan no kedua: ";
        cin >> dua;

        hasil = satu - dua;
        cout << satu << " - " << dua << " = " << hasil << endl;
    } else if (nomor == 3){
        cout << "masukan no pertama: ";
        cin >> satu;
        cout << "masukan no kedua: ";
        cin >> dua;

        hasil = satu * dua;
        cout << satu << " x " << dua << " = " << hasil << endl;

    }else if (nomor == 4){
        cout << "masukan no pertama: ";
        cin >> satu;
        cout << "masukan no kedua: ";
        cin >> dua;

        hasil = satu / dua;
        cout << satu << " / " << dua << " = " << hasil << endl;

    }else {
        cout << "tidak ada nomor dalam menu!";

    }

    return 0;
}
