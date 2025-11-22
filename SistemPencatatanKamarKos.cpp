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

// 2. SORTING KHUSUS MENU 1 – Belum Bayar → Lunas
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


// 4. MENU 2 – Cari Kamar Berdasarkan Nomor
void cariKamarBerdasarkanNomor() {
    int nomorCari;
    cout << "Masukkan nomor kamar yang ingin dicari: ";
    cin >> nomorCari;

    bool ditemukan = false;


    for (int i = 0; i < JUMLAH_KAMAR; i++) {


        if (dataKamar[i].nomor == nomorCari) {
            ditemukan = true;

            cout << "\n=== HASIL PENCARIAN ===\n";
            cout << "Kamar " << dataKamar[i].nomor << endl;


            // Jika kamar TERISI → tampilkan data lengkap
            if (dataKamar[i].statusHuni == "Terisi") {
                cout << " Status Huni      : " << dataKamar[i].statusHuni << endl;
                cout << " Nama Penghuni    : " << dataKamar[i].penghuni << endl;
                cout << " Status Pembayaran: " << dataKamar[i].statusBayar << endl;
            }
            else {
                // Jika kamar kosong
                cout << " Status Huni       : Kosong\n";
                cout << " Penghuni          : -\n";
                cout << "Status Pembayaran  : -\n";
            }

            cout << "----------------------------------\n";


            break;
        }
    }


    if (!ditemukan) {
        cout << "\nNomor kamar tidak ditemukan!\n";
    }
}

// 5. MENU 3 – Update Status Pembayaran
void updateStatusPembayaran() {

    int nomorCari;
    cout << "Masukkan nomor kamar yang ingin di-update pembayarannya: ";
    cin >> nomorCari;

    bool ditemukan = false;

    // Sequential Search
    for (int i = 0; i < JUMLAH_KAMAR; i++) {

        if (dataKamar[i].nomor == nomorCari) {
            ditemukan = true;

            cout << "\n=== DATA KAMAR DITEMUKAN ===\n";
            cout << "Kamar " << dataKamar[i].nomor << endl;
            cout << " Penghuni      : " << dataKamar[i].penghuni << endl;
            cout << " Status Huni   : " << dataKamar[i].statusHuni << endl;
            cout << " Status Bayar  : " << dataKamar[i].statusBayar << endl;
            cout << "----------------------------------\n";

            // Hanya bisa update jika kamar TERISI
            if (dataKamar[i].statusHuni == "Kosong") {
                cout << "Kamar ini masih kosong, tidak bisa update pembayaran.\n";
                return;
            }

            // Proses update
            int pilih;
            cout << "\nUbah status pembayaran menjadi:\n";
            cout << "1. Lunas\n";
            cout << "2. Belum Bayar\n";
            cout << "Pilihan: ";
            cin >> pilih;

            if (pilih == 1) {
                dataKamar[i].statusBayar = "Lunas";
                cout << "\nStatus pembayaran berhasil diubah menjadi Lunas!\n";
            }
            else if (pilih == 2) {
                dataKamar[i].statusBayar = "Belum Bayar";
                cout << "\nStatus pembayaran berhasil diubah menjadi Belum Bayar!\n";
            }
            else {
                cout << "\nPilihan tidak valid. Pembaruan dibatalkan.\n";
            }

            return; // selesai setelah update
        }
    }

    if (!ditemukan) {
        cout << "Nomor kamar tidak ditemukan!\n";
    }
}

// 6. MENU 4 – Update Status Penghuni 
void updateStatusPenghuni() {

    int nomorCari;
    cout << "Masukkan nomor kamar yang ingin di-update penghuninya: ";
    cin >> nomorCari;

    bool ditemukan = false;

    for (int i = 0; i < JUMLAH_KAMAR; i++) {

        if (dataKamar[i].nomor == nomorCari) {
            ditemukan = true;

            cout << "\n=== DATA KAMAR ===\n";
            cout << "Kamar " << dataKamar[i].nomor << endl;
            cout << " Status Huni   : " << dataKamar[i].statusHuni << endl;
            cout << " Penghuni      : " << dataKamar[i].penghuni << endl;
            cout << "----------------------------------\n";

            int pilih;
            cout << "Ubah status penghuni menjadi:\n";
            cout << "1. Kosong (keluar)\n";
            cout << "2. Terisi (penghuni baru)\n";
            cout << "Pilihan: ";
            cin >> pilih;

            if (pilih == 1) {
                dataKamar[i].statusHuni = "Kosong";
                dataKamar[i].penghuni = "-";
                dataKamar[i].statusBayar = "Belum Bayar";

                cout << "\nKamar berhasil dikosongkan!\n";
            }
            else if (pilih == 2) {
                cout << "Masukkan nama penghuni baru: ";
                cin.ignore();
                getline(cin, dataKamar[i].penghuni);

                dataKamar[i].statusHuni = "Terisi";
                dataKamar[i].statusBayar = "Belum Bayar";

                cout << "\nData penghuni berhasil diperbarui!\n";
            }
            else {
                cout << "\nPilihan tidak valid.\n";
            }

            return;
        }
    }

    if (!ditemukan) {
        cout << "Nomor kamar tidak ditemukan!\n";
    }
}


// 7. MENU 5 – Laporan Tunggakan Pembayaran
void laporanTunggakan() {

    cout << "\n======= LAPORAN TUNGGAKAN PEMBAYARAN =======\n";

    bool adaTunggakan = false;

    for (int i = 0; i < JUMLAH_KAMAR; i++) {

        // Tampilkan hanya kamar yang terisi & belum bayar
        if (dataKamar[i].statusHuni == "Terisi" &&
            dataKamar[i].statusBayar == "Belum Bayar") {

            adaTunggakan = true;

            cout << "Kamar: " << dataKamar[i].nomor << endl;
            cout << "Penghuni  : " << dataKamar[i].penghuni << endl;
            cout << "Status Bayar : " << dataKamar[i].statusBayar << endl;
            cout << "---------------------------------------\n";
        }
    }

    if (!adaTunggakan) {
        cout << "Tidak ada kamar yang memiliki tunggakan pembayaran.\n";
    }
}


// MENU UTAMA
void tampilkanMenu() {
    cout << "\n========== MENU UTAMA ==========\n";
    cout << "1. Tampilkan Semua Kamar\n";
    cout << "2. Cari Kamar Berdasarkan Nomor\n";
    cout << "3. Update Status Pembayaran\n";
    cout << "4. Update Status Penghuni\n";
    cout << "5. Laporan Tunggakan\n";
    cout << "6. Keluar\n";
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
                 cariKamarBerdasarkanNomor();
                break;


            case 3:
                updateStatusPembayaran();
                break;

            case 4:
                updateStatusPenghuni();
                break;

            case 5:
                laporanTunggakan();
                break;

            case 6:
                cout << "Keluar dari program...\n";
                break;

            default:
                cout << "Pilihan menu tidak valid!\n";
        }

    } while (pilihan != 6);

    return 0;
}