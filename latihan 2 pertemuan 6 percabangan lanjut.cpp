#include <iostream>
using namespace std;

int main() {
    string nama;
    float nilai, kehadiran;

    cout << "PROGRAM MENENTUKAN KELULUSAN SISWA" << endl;

    cout << "Nama Siswa : ";
    getline(cin, nama);

    cout << "Nilai Ujian : ";
    cin >> nilai;

    cout << "Persentase Kehadiran : ";
    cin >> kehadiran;

    if (nilai >= 75) {
        if (kehadiran >= 80) {
            cout << "\nSiswa bernama " << nama << endl;
            cout << "Dinyatakan LULUS" << endl;
        }
        else {
            cout << "\nSiswa bernama " << nama << endl;
            cout << "Dinyatakan TIDAK LULUS karena kehadiran kurang" << endl;
        }
    }
    else {
        cout << "\nSiswa bernama " << nama << endl;
        cout << "Dinyatakan TIDAK LULUS karena nilai kurang" << endl;
    }

    return 0;
}