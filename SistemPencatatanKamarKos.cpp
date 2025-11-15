#include <iostream>
#include <string>
using namespace std;

// Jumlah kamar
const int JUMLAH_KAMAR = 20;

// Struktur data kamar kos
struct Kamar {
    int nomor;              // ex: 101–120
    string penghuni;        // nama penghuni
    string statusHuni;      // "Kosong" atau "Terisi"
    string statusBayar;     // "Belum Bayar" atau "Lunas"
};

// Array berisi semua data kamar
Kamar dataKamar[JUMLAH_KAMAR];


// =========================
// 1. Fungsi Inisialisasi
// =========================
void inisialisasiDataKamar() {
    int nomorAwal = 101;

    for (int i = 0; i < JUMLAH_KAMAR; i++) {
        dataKamar[i].nomor = nomorAwal + i;
        dataKamar[i].penghuni = "-";
        dataKamar[i].statusHuni = "Kosong";
        dataKamar[i].statusBayar = "Belum Bayar";
    }

    cout << "Data kamar berhasil diinisialisasi!\n";
}


// =========================
// 2. Menu Utama
// =========================
void tampilkanMenu() {
    cout << "\n========== MENU UTAMA ==========\n";
    cout << "1. Tampilkan Semua Kamar\n";
    cout << "2. Cari Kamar Berdasarkan Nomor\n";
    cout << "3. Cari Penghuni Berdasarkan Nama\n";
    cout << "4. Update Status Pembayaran\n";
    cout << "5. Update Status Penghuni\n";
    cout << "6. Laporan Tunggakan\n";
    cout << "7. Keluar\n";
    cout << "================================\n";
    cout << "Pilih menu: ";
}


// =========================
// PROGRAM UTAMA
// =========================
int main() {

    // 1. Inisialisasi semua kamar
    inisialisasiDataKamar();

    int pilihan;

    // 2. Loop utama program (while menu)
    do {
        tampilkanMenu();
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {

            case 1:
                cout << "[Menu 1] Tampilkan Semua Kamar\n";
                // nanti memanggil: tampilkanSemuaKamar();
                break;

            case 2:
                cout << "[Menu 2] Cari Kamar Berdasarkan Nomor\n";
                // nanti memanggil: cariKamar();
                break;

            case 3:
                cout << "[Menu 3] Cari Penghuni Berdasarkan Nama\n";
                // nanti memanggil: cariPenghuni();
                break;

            case 4:
                cout << "[Menu 4] Update Status Pembayaran\n";
                // nanti memanggil: updatePembayaran();
                break;

            case 5:
                cout << "[Menu 5] Update Status Penghuni\n";
                // nanti memanggil: updateStatusPenghuni();
                break;

            case 6:
                cout << "[Menu 6] Laporan Tunggakan Belum Bayar\n";
                // nanti memanggil: laporanTunggakan();
                break;

            case 7:
                cout << "Keluar dari program...\n";
                break;

            default:
                cout << "Pilihan menu tidak valid!\n";
        }

    } while (pilihan != 7);

    return 0;
}