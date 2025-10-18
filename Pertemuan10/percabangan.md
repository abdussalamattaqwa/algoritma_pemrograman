# If-Else dalam Bahasa C

## 📌1. Konsep Dasar
Percabangan adalah struktur logika dalam pemrograman yang memungkinkan program **membuat keputusan** berdasarkan kondisi tertentu. 

Percabangan digunakan untuk **mengambil keputusan** berdasarkan **kondisi logika (true atau false)**.  
Dalam C++, kondisi tersebut biasanya menggunakan **operator relasional** (`>`, `<`, `==`, `!=`, `>=`, `<=`) atau **operator logika** (`&&`, `||`, `!`).


Struktur **if-else** digunakan untuk **mengecek suatu kondisi** (benar/salah) dan menjalankan perintah sesuai hasilnya.  



- Jika kondisi **benar (true)** → jalankan perintah di dalam blok `if`.  
- Jika kondisi **salah (false)** → jalankan perintah di dalam blok `else`.  

---

## 🧠 2. Struktur Dasar If
### 🔹 Bentuk Umum:
```cpp
if (kondisi) {
    // perintah yang dijalankan jika kondisi benar (true)
}
```

### 🔹 Contoh:
```cpp
#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 60) {
        cout << "Lulus!" << endl;
    }

    return 0;
}
```

---

## ⚖️ 3. Struktur If–Else
### 🔹 Bentuk Umum:
```cpp
if (kondisi) {
    // jika kondisi benar
} else {
    // jika kondisi salah
}
```

### 🔹 Contoh:
```cpp
#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 60) {
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak lulus" << endl;
    }

    return 0;
}
```

---

## 🔁 4. Struktur If–Else If–Else
### 🔹 Bentuk Umum:
```cpp
if (kondisi1) {
    // jika kondisi1 benar
} else if (kondisi2) {
    // jika kondisi2 benar
} else {
    // jika semua kondisi salah
}
```

### 🔹 Contoh:
```cpp
#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 90) {
        cout << "Grade A" << endl;
    } else if (nilai >= 75) {
        cout << "Grade B" << endl;
    } else if (nilai >= 60) {
        cout << "Grade C" << endl;
    } else {
        cout << "Grade D" << endl;
    }

    return 0;
}
```
---

# 💻 Soal Latihan Dasar – Percabangan If–Else C++

## 🧩 Soal 1 – Menentukan Bilangan Positif atau Negatif
Buat program yang membaca satu bilangan bulat, lalu menentukan apakah bilangan tersebut **positif**, **negatif**, atau **nol**.

**Contoh Eksekusi Program:**
```
Input: -5
Output: Bilangan negatif
```

---

## 🧩 Soal 2 – Menentukan Bilangan Ganjil atau Genap
Buat program untuk memeriksa apakah sebuah bilangan **ganjil** atau **genap**.

**Contoh Eksekusi Program:**
```
Input: 8
Output: Bilangan genap
```

---

## 🧩 Soal 3 – Menentukan Nilai Lulus
Buat program untuk menilai apakah seorang siswa **lulus** atau **tidak** berdasarkan nilai ujian.  
- Lulus jika nilai ≥ 60  
- Tidak lulus jika nilai < 60  

**Contoh Eksekusi Program:**
```
Input nilai: 75
Output: Lulus
```

---

## 🧩 Soal 4 – Menentukan Nilai Huruf
Buat program untuk mengonversi nilai angka ke **nilai huruf**:
- 90–100 → A  
- 75–89 → B  
- 60–74 → C  
- 50–59 → D  
- < 50 → E  

**Contoh Eksekusi Program:**
```
Input nilai: 82
Output: Nilai huruf: B
```
---

## 🧩 Soal 5 – Menentukan Nilai Terbesar dari Dua Angka
Buat program yang membaca dua bilangan dan menentukan bilangan mana yang lebih besar.

**Contoh Eksekusi Program:**
```
Input a: 15
Input b: 9
Output: Bilangan terbesar adalah 15
```

---

---

## 🧩 Soal 6 – Penentuan Golongan Usia
Buat program yang menentukan kategori usia:
- < 12 → Anak-anak  
- 12–17 → Remaja  
- 18–59 → Dewasa  
- ≥ 60 → Lansia  

**Contoh Eksekusi Program:**
```
Input umur: 45
Output: Dewasa
```
