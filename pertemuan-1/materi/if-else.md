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
```

---

## 📖 Contoh Sederhana
### Kasus: Menentukan Lulus atau Tidak
```c
#include <stdio.h>

int main() {
    int nilai;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 60) {
        printf("Lulus\n");
    } else {
        printf("Tidak Lulus\n");
    }

    return 0;
}
```

- Jika nilai ≥ 60 → tampil "Lulus".  
- Jika nilai < 60 → tampil "Tidak Lulus".  

---

## 🔀 If-Else Bertingkat (Else If)
Jika ada lebih dari satu kondisi yang perlu dicek, kita bisa menggunakan **if-else bertingkat**.  

### Bentuk Umum
```c
if (kondisi1) {
    // aksi jika kondisi1 benar
} else if (kondisi2) {
    // aksi jika kondisi2 benar
} else {
    // aksi jika semua kondisi salah
}
```

### Contoh: Kategori Nilai
```c
#include <stdio.h>

int main() {
    int nilai;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 85) {
        printf("Grade A\n");
    } else if (nilai >= 70) {
        printf("Grade B\n");
    } else if (nilai >= 55) {
        printf("Grade C\n");
    } else if (nilai >= 40) {
        printf("Grade D\n");
    } else {
        printf("Grade E\n");
    }

    return 0;
}
```

---

## 🔄 If-Else Bersarang di Dalam If
Kadang kondisi bisa dicek lebih detail di dalam blok `if` pertama.  

### Contoh: Diskon Belanja
```c
#include <stdio.h>

int main() {
    int totalBelanja;
    printf("Masukkan total belanja: ");
    scanf("%d", &totalBelanja);

    if (totalBelanja >= 100000) {
        printf("Anda mendapat diskon 10%%\n");

        if (totalBelanja >= 500000) {
            printf("Bonus tambahan: Voucher belanja Rp50.000\n");
        }

    } else {
        printf("Belanja belum cukup untuk diskon\n");
    }

    return 0;
}
```

---

## 📊 Ilustrasi Logika If-Else
```
       ┌─────────────┐
       │   Kondisi   │
       └──────┬──────┘
              │
     ┌────────┴─────────┐
   TRUE                FALSE
    │                     │
    ▼                     ▼
 Aksi jika benar     Aksi jika salah
```

---

## ✅ Kapan Menggunakan If-Else?
- Jika jumlah kondisi **sedikit**.  
- Jika kondisi berupa **perbandingan kompleks** (misalnya: `nilai > 80 && usia < 25`).  
- Jika hasil keputusan **bisa bercabang lebih dalam**.  

---

## ⚠️ Kekurangan If-Else
- Jika kondisi terlalu banyak (misalnya 5–10 pilihan), kode akan **panjang dan kurang rapi**.  
- Dalam kasus pilihan sederhana (misalnya menu angka), lebih baik gunakan `switch-case`.  
