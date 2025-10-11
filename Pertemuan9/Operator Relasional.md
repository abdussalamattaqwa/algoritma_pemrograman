# 🧮 Materi: Operator Relasional dalam C++


---

## 🔍 1. Pengertian Operator Relasional
**Operator relasional** digunakan untuk membandingkan dua nilai, misalnya membandingkan angka, karakter, atau hasil perhitungan.  
Operator ini akan menghasilkan nilai **boolean**, yaitu:

- `true` → jika perbandingan benar  
- `false` → jika perbandingan salah

Contoh sederhana:

```cpp
5 > 3   // true
10 == 7 // false
```

---

## ⚙️ 2. Jenis-Jenis Operator Relasional

| Operator | Nama | Arti | Contoh | Hasil |
|-----------|------|------|---------|--------|
| `==` | Sama dengan | Mengecek apakah dua nilai sama | `5 == 5` | true |
| `!=` | Tidak sama dengan | Mengecek apakah dua nilai berbeda | `4 != 3` | true |
| `>` | Lebih besar dari | Mengecek apakah kiri lebih besar dari kanan | `10 > 8` | true |
| `<` | Lebih kecil dari | Mengecek apakah kiri lebih kecil dari kanan | `6 < 9` | true |
| `>=` | Lebih besar atau sama dengan | Mengecek apakah kiri ≥ kanan | `7 >= 7` | true |
| `<=` | Lebih kecil atau sama dengan | Mengecek apakah kiri ≤ kanan | `4 <= 6` | true |

---

## 💡 3. Contoh Visual Perbandingan

Misalkan kita punya variabel:

```cpp
int a = 10;
int b = 5;
```

Maka hasil dari ekspresi berikut adalah:

| Ekspresi | Hasil |
|-----------|--------|
| `a > b` | true |
| `a < b` | false |
| `a == b` | false |
| `a != b` | true |
| `a >= 10` | true |
| `b <= 3` | false |

---

## 💻 4. Contoh Program Dasar

### Contoh 1 – Membandingkan Dua Angka

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << "Apakah a == b? " << (a == b) << endl;
    cout << "Apakah a > b? " << (a > b) << endl;
    cout << "Apakah a < b? " << (a < b) << endl;

    return 0;
}
```

🧠 *Penjelasan:*  
Setiap ekspresi menghasilkan nilai 1 (true) atau 0 (false).  
Contoh input: `a = 5`, `b = 7`  
Output:
```
Apakah a == b? 0
Apakah a > b? 0
Apakah a < b? 1
```

---

### Contoh 2 – Menentukan Nilai Lulus

```cpp
#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai kamu: ";
    cin >> nilai;

    bool lulus = nilai >= 60;
    cout << "Status kelulusan (1=lulus, 0=tidak): " << lulus << endl;

    return 0;
}
```

🧠 *Penjelasan:*  
Jika nilai ≥ 60 → true (1)  
Jika nilai < 60 → false (0)

---
<!-- 

# If-Else dalam Bahasa C

## 📌 Konsep Dasar
Percabangan adalah struktur logika dalam pemrograman yang memungkinkan program **membuat keputusan** berdasarkan kondisi tertentu.  
Struktur **if-else** digunakan untuk **mengecek suatu kondisi** (benar/salah) dan menjalankan perintah sesuai hasilnya.  

- Jika kondisi **benar (true)** → jalankan perintah di dalam blok `if`.  
- Jika kondisi **salah (false)** → jalankan perintah di dalam blok `else`.  

---

## 🧩 Bentuk Umum If-Else
```c
if (kondisi) {
    // aksi jika kondisi benar
} else {
    // aksi jika kondisi salah
}
``` -->
