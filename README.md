# Analisis Algoritma Iteratif dan Rekursif  
## pada Pengolahan Data Mahasiswa

## Deskripsi
Program ini dibuat untuk menganalisis dan membandingkan efisiensi algoritma **iteratif** dan **rekursif** dalam pengolahan data mahasiswa. Studi kasus yang digunakan adalah perhitungan **total nilai**, **rata-rata nilai**, serta **penentuan status kelulusan mahasiswa**.

Program dikembangkan menggunakan bahasa pemrograman **C++** dan dijalankan melalui **console**.

---

##  Tujuan
- Menerapkan algoritma iteratif dan rekursif pada pengolahan data mahasiswa
- Menentukan kompleksitas waktu dari kedua algoritma
- Membandingkan performa algoritma iteratif dan rekursif
- Mengetahui algoritma yang lebih efisien untuk jumlah data yang besar

---

## Konsep Algoritma
- **Algoritma Iteratif**  
  Menggunakan perulangan untuk menjumlahkan nilai mahasiswa satu per satu.

- **Algoritma Rekursif**  
  Menggunakan pemanggilan fungsi secara berulang hingga mencapai kondisi dasar (*base case*).

Kedua algoritma memiliki kompleksitas waktu **O(n)**, namun algoritma iteratif lebih efisien dari sisi penggunaan memori dan waktu eksekusi.

---

## Teknologi yang Digunakan
- Bahasa Pemrograman : C++
- Compiler           : GCC / MinGW
- IDE (opsional)     : Dev-C++, Code::Blocks, Visual Studio Code

---

## 📁 Struktur Project
|-main.cpp
|-Mahasiswa.h
|-Mahasiswa.cpp
|-Readme.md


## Cara Menjalankan Program

###  Menggunakan Compiler GCC
```bash
g++ main.cpp Mahasiswa.cpp -o mahasiswa
./mahasiswa
