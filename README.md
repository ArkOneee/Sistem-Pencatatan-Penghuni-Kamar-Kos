# 🏠 Sistem Pencatatan Penghuni Kamar Kos

Program ini dibuat untuk membantu pemilik kos dalam mencatat data penghuni, memantau status pembayaran, dan menampilkan laporan tunggakan bulanan.  
Dengan sistem ini, proses pencatatan menjadi lebih efisien, cepat, dan akurat.

---

## Anggota Kelompok
| NIM | Nama |
|------|------|
| 24051130028 | Julian Christo Daven |
| 24051130030 | Redina Audrey Hasibuan |

---

## Deskripsi Program
Program ini menggunakan **struktur data Array of Struct** untuk menyimpan informasi penghuni dan kamar kos.  
Melalui menu yang tersedia, pengguna dapat:
- Menampilkan seluruh data kamar dan penghuni
- Mencari data berdasarkan nomor kamar atau nama penghuni
- Memperbarui status pembayaran bulanan
- Mengubah status penghuni
- Menampilkan laporan penghuni yang belum membayar

---

## Menu Utama Program
1. Tampilkan Semua Kamar  
2. Cari Kamar (Berdasarkan Nomor Kamar)  
3. Cari Penghuni (Berdasarkan Nama)  
4. Update Status Pembayaran Bulanan  
5. Update Status Penghuni  
6. Laporan: Tampilkan Tunggakan (Belum Bayar)  
7. Keluar  

---

## Algoritma yang Digunakan
| No | Algoritma | Fungsi dalam Program |
|----|------------|----------------------|
| 1 | **Array 1D (Struct)** | Menyimpan data kamar, penghuni, dan status bayar |
| 2 | **Binary Search** | Mencari kamar berdasarkan nomor |
| 3 | **Sequential Search** | Mencari penghuni berdasarkan nama |
| 4 | **Bubble Sort** | Mengurutkan data berdasarkan nomor kamar atau status pembayaran |

---

## Rencana Subprogram
- `void tampilMenu()`
- `void tampilSemuaKamar()`
- `void prosesCariKamar()`
- `void prosesCariPenghuni()`
- `void updatePembayaranBulanan()`
- `void updateStatusPenghuni()`
- `void laporanTunggakan()`
- `int binarySearchKamar()`
- `int sequentialSearchNama()`
- `void bubbleSortStatus()`
- `main()`

---

## Rencana Uji Program

### **Tabel Uji Awal + Edge Case**
| No | Skenario Uji | Input | Output yang Diharapkan | Jenis Uji |
|----|---------------|--------|------------------------|-----------|
| 1 | Tampilkan Semua Kamar | - | Semua data kamar dan status pembayaran tampil | Normal |
| 2 | Cari Kamar (Nomor ada) | Nomor Kamar = 103 | Menampilkan data kamar 103 | Normal |
| 3 | Cari Kamar (Nomor tidak ada) | Nomor Kamar = 999 | Pesan “Data tidak ditemukan” | Edge |
| 4 | Cari Penghuni (Nama ada) | Nama = Julian | Menampilkan kamar dan status bayar Julian | Normal |
| 5 | Cari Penghuni (Nama tidak ada) | Nama = Zara | Pesan “Data tidak ditemukan” | Edge |
| 6 | Update Status Pembayaran | Kamar 103, Bulan November, Lunas | “BERHASIL diupdate menjadi LUNAS” | Normal |
| 7 | Update Status Penghuni | Kamar 102 → Dodi | “BERHASIL diupdate” | Normal |
| 8 | Update Status Penghuni (Kamar tidak ditemukan) | Kamar 500 | “Kamar tidak ditemukan” | Edge |
| 9 | Laporan Tunggakan | - | Menampilkan daftar penghuni dengan status “Belum Bayar” | Normal |
| 10 | Keluar Program | - | Program berhenti | Normal |

---

## Data Awal Contoh
| Nomor Kamar | Nama Penghuni | Status Pembayaran |
|--------------|----------------|------------------|
| 101 | Julian | Lunas |
| 102 | Dodi | Belum Bayar |
| 103 | Budi | Lunas |
| 104 | Kosong | N/A |

---

## Hasil yang Diharapkan
- Sistem dapat menampilkan data penghuni dan pembayaran dengan akurat.  
- Pengguna dapat memperbarui data tanpa error.  
- Kasus batas (edge case) dapat ditangani dengan baik.  
- Laporan tunggakan ditampilkan dengan benar.

---

## 🔗 Repositori
GitHub: [ArkOneee / Sistem-Pencatatan-Penghuni-Kamar-Kos](https://github.com/ArkOneee/Sistem-Pencatatan-Penghuni-Kamar-Kos)

