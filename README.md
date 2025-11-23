Sistem Pencatatan Penghuni Kamar Kos
Aplikasi sederhana berbasis C++ untuk membantu pemilik kos dalam mengelola data kamar, penghuni, dan status pembayaran secara lebih cepat, akurat, dan terstruktur.

Deskripsi Proyek
Sistem ini dibuat sebagai bagian dari Praktik Algoritma Pemrograman.
Tujuannya adalah menyediakan solusi sederhana namun efektif untuk pencatatan data penghuni kamar kos, termasuk:
Nomor kamar
Nama penghuni
Status pembayaran bulanan
Laporan tunggakan
Sistem dirancang tanpa basis data kompleks — hanya menggunakan array dan record sehingga mudah dipahami secara algoritmik.

Fitur Utama
1. Tampilkan Semua Kamar
Menampilkan seluruh kamar (101–120)
Sudah diurutkan berdasarkan status pembayaran → Belum Bayar ditampilkan lebih dulu
Menggunakan algoritma Bubble Sort
2. Cari Kamar Berdasarkan Nomor
Mencari dengan Sequential Search
Menampilkan data lengkap jika kamar terisi
Menampilkan tanda “-” jika kamar kosong
3. Update Status Pembayaran
Hanya dapat dilakukan jika kamar Terisi
Mengubah menjadi Lunas atau Belum Bayar
4. Update Status Penghuni
Mengosongkan kamar
Mengisi penghuni baru
Status bayar otomatis diset ke Belum Bayar
5. Laporan Tunggakan
Menampilkan kamar Terisi + Belum Bayar*
Jika tidak ada tunggakan → tampil pesan khusus
6. Keluar Program

Struktur Program
Program disusun secara modular:
1. inisialisasiDataKamar()	Mengisi data awal 20 kamar (101–120)
2. sortPembayaranMenu1()	Sorting berdasar status bayar
3. tampilkanSemuaKamar()	Menampilkan semua kamar
4. cariKamarBerdasarkanNomor()	Sequential Search
5. updateStatusPembayaran()	Mengubah status pembayaran kamar
6. updateStatusPenghuni()	Mengubah status penghuni kamar
7. laporanTunggakan()	Menampilkan daftar kamar yang belum bayar
8. tampilkanMenu()	Menampilkan menu utama
9. main()	Controller utama program


Pengembang
Julian Christo Daven — 24051130028
Redina Audrey Hasibuan — 24051130030

Program Studi Teknologi Informasi
Fakultas Teknik – Universitas Negeri Yogyakarta
2025
