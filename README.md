# Analisis Algoritma Iteratif dan Rekursif  
## pada Pengolahan Data Mahasiswa

##  Deskripsi
Aplikasi ini dibuat untuk menganalisis dan membandingkan efisiensi algoritma **iteratif** dan **rekursif** dalam pengolahan data mahasiswa. Studi kasus yang digunakan adalah perhitungan **total nilai**, **rata-rata nilai**, dan **penentuan status kelulusan mahasiswa**.

Aplikasi dikembangkan menggunakan bahasa pemrograman **C++** dengan dua versi:
1. Versi **Console**
2. Versi **GUI (Qt Widgets)**

---

## 🎯 Tujuan
- Menerapkan algoritma iteratif dan rekursif pada pengolahan data mahasiswa
- Menganalisis kompleksitas waktu dari kedua algoritma
- Membandingkan performa algoritma berdasarkan waktu eksekusi
- Menentukan algoritma yang lebih efisien untuk data berukuran besar

---

##  Konsep Algoritma
- **Algoritma Iteratif**  
  Menggunakan perulangan untuk menjumlahkan data nilai mahasiswa satu per satu.

- **Algoritma Rekursif**  
  Menggunakan pemanggilan fungsi secara berulang hingga mencapai kondisi dasar (*base case*).

Kedua algoritma memiliki kompleksitas waktu **O(n)**, namun algoritma iteratif lebih efisien dari sisi penggunaan memori dan waktu eksekusi.

---

## 🛠️ Teknologi yang Digunakan
- Bahasa Pemrograman : C++
- GUI Framework      : Qt Widgets
- Compiler           : GCC / MinGW
- IDE (opsional)     : Qt Creator, Dev-C++, Code::Blocks

---

## Cara Menjalankan Program

###  Versi GUI (Qt)
1. Install **Qt Creator**
2. Buat project baru → *Qt Widgets Application*
3. Masukkan file `.h`, `.cpp`, dan `.ui` ke project
4. Build dan jalankan program

### Versi Console
Compile dengan perintah:
```bash
g++ main.cpp Mahasiswa.cpp -o mahasiswa
./mahasiswa

