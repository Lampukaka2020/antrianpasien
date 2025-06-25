#include <iostream>  // Library untuk input-output
using namespace std; // Agar tidak perlu menulis std:: setiap saat

// Struktur data untuk menyimpan informasi pasien
struct Pasien {
    string nama;       // Nama pasien
    Pasien* next;      // Pointer ke pasien berikutnya
};
