#include "Mahasiswa.h"

int totalNilaiIteratif(const vector<int>& nilai) {
    int total = 0;
    for (int n : nilai) {
        total += n;
    }
    return total;
}

int totalNilaiRekursif(const vector<int>& nilai, int n) {
    if (n == 0) return 0;
    return nilai[n-1] + totalNilaiRekursif(nilai, n-1);
}
