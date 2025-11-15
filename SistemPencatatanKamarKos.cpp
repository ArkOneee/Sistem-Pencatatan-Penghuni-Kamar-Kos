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


// 1. Fungsi Inisialisasi
void inisialisasiDataKamar() {
    int nomorAwal = 101;

    for (int i = 0; i < JUMLAH_KAMAR; i++) {
        dataKamar[i].nomor = nomorAwal + i;
        dataKamar[i].penghuni = "-";
        dataKamar[i].statusHuni = "Kosong";
        dataKamar[i].statusBayar = "Belum Bayar";
    }
    //   DATA KAMAR SAMPLE 
    dataKamar[0].penghuni     = "Budi";
    dataKamar[0].statusHuni   = "Terisi";
    dataKamar[0].statusBayar  = "Belum Bayar";

    dataKamar[1].penghuni     = "Siti";
    dataKamar[1].statusHuni   = "Terisi";
    dataKamar[1].statusBayar  = "Lunas";

    dataKamar[2].penghuni     = "Andi";
    dataKamar[2].statusHuni   = "Terisi";
    dataKamar[2].statusBayar  = "Belum Bayar";

    dataKamar[3].penghuni     = "Rina";
    dataKamar[3].statusHuni   = "Terisi";
    dataKamar[3].statusBayar  = "Lunas";

    dataKamar[4].penghuni     = "Joko";
    dataKamar[4].statusHuni   = "Terisi";
    dataKamar[4].statusBayar  = "Belum Bayar";

    cout << "Data kamar berhasil diinisialisasi!\n";
}

// 2. SORTING KHUSUS MENU 1 – Lunas → Belum Bayar
void sortPembayaranMenu1() {

    for (int i = 0; i < JUMLAH_KAMAR - 1; i++) {
        for (int j = 0; j < JUMLAH_KAMAR - 1 - i; j++) {

            // Jika yang sekarang Belum Bayar dan setelahnya Lunas → tukar
            if (dataKamar[j].statusBayar == "Lunas" &&
                dataKamar[j+1].statusBayar == "Belum Bayar") 
            {
                Kamar temp = dataKamar[j];
                dataKamar[j] = dataKamar[j+1];
                dataKamar[j+1] = temp;
            }
        }
    }
}


// 3. MENU 1 – Tampilkan Semua Kamar 
void tampilkanSemuaKamar() {

    cout << "\n===== DAFTAR SEMUA KAMAR (DIURUT PEMBAYARAN) =====\n";

    sortPembayaranMenu1();

    for (int i = 0; i < JUMLAH_KAMAR; i++) {
        cout << "Kamar " << dataKamar[i].nomor << endl;
        cout << " Penghuni      : " << dataKamar[i].penghuni << endl;
        cout << " Status Huni   : " << dataKamar[i].statusHuni << endl;
        cout << " Status Bayar  : " << dataKamar[i].statusBayar << endl;
        cout << "----------------------------------\n";
    }
}

// 2. Menu Utama
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


// PROGRAM UTAMA
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
                tampilkanSemuaKamar();
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