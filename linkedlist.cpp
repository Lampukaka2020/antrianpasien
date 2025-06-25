#include <iostream>  // Library untuk input-output
using namespace std; // Agar tidak perlu menulis std:: setiap saat

// Struktur data untuk menyimpan informasi pasien
struct Pasien {
    string nama;       // Nama pasien
    Pasien* next;      // Pointer ke pasien berikutnya
};
// Pointer global untuk menunjuk ke pasien pertama (kepala antrian)
Pasien* head = nullptr;
// Fungsi untuk menambahkan pasien ke antrian
void tambahPasien(string nama) {
    // Buat node baru
    Pasien* baru = new Pasien{nama, nullptr};

    if (head == nullptr) {
        // Jika antrian kosong, pasien pertama langsung jadi head
        head = baru;
    } else {
        // Jika tidak kosong, cari pasien terakhir, lalu tambahkan setelahnya
        Pasien* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = baru;
    }
    cout << "Pasien \"" << nama << "\" ditambahkan ke antrian.\n";
}
