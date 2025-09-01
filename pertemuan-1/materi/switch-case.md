# Switch-Case dalam Bahasa C

## 📌 Konsep Dasar
`switch-case` adalah struktur kontrol seleksi dalam bahasa C yang digunakan untuk memilih satu aksi dari beberapa kemungkinan berdasarkan **nilai ekspresi**.  
Struktur ini sangat membantu ketika kita memiliki **banyak kondisi diskrit** yang lebih jelas ditulis dibandingkan dengan rantai `if-else`.

---

## 🏗️ Bentuk Umum
```c
switch (ekspresi) {
    case nilai1:
        // aksi jika ekspresi == nilai1
        break;
    case nilai2:
        // aksi jika ekspresi == nilai2
        break;
    ...
    default:
        // aksi jika tidak ada case yang cocok
}
```

---

## 🔄 Alur Eksekusi
1. **Evaluasi ekspresi** di dalam `switch`.  
2. Program mencari **case** dengan nilai yang sama.  
3. Jika cocok, blok perintah di dalam case tersebut dijalankan.  
4. `break` digunakan untuk keluar dari switch agar tidak mengeksekusi case berikutnya.  
5. Jika tidak ada case yang cocok, blok `default` akan dijalankan.

---

## 📝 Contoh Dasar
```c
#include <stdio.h>

int main() {
    int pilihan;
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Penjumlahan\n");
            break;
        case 2:
            printf("Pengurangan\n");
            break;
        case 3:
            printf("Perkalian\n");
            break;
        case 4:
            printf("Pembagian\n");
            break;
        default:
            printf("Pilihan tidak valid\n");
    }

    return 0;
}
```

---

## ⚡ Contoh Tanpa `break` (Fall-through)
Jika `break` tidak ditulis, eksekusi akan diteruskan ke case berikutnya hingga menemukan `break` atau akhir `switch`.

```c
#include <stdio.h>

int main() {
    int angka = 2;

    switch (angka) {
        case 1:
            printf("Satu\n");
        case 2:
            printf("Dua\n");
        case 3:
            printf("Tiga\n");
        default:
            printf("Akhir\n");
    }

    return 0;
}
```

📌 Output:
```
Dua
Tiga
Akhir
```

---

## 📊 Studi Kasus: Menu Kalkulator Sederhana
```c
#include <stdio.h>

int main() {
    int a, b, pilihan;
    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    printf("\nPilih operasi:\n");
    printf("1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Hasil: %d\n", a + b);
            break;
        case 2:
            printf("Hasil: %d\n", a - b);
            break;
        case 3:
            printf("Hasil: %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Hasil: %.2f\n", (float)a / b);
            else
                printf("Error: Pembagi nol!\n");
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
```

---

## ✅ Kelebihan
- Lebih rapi dibanding rantai `if-else`.
- Eksekusi lebih efisien pada kasus banyak kondisi diskrit.
- Membuat kode lebih mudah dibaca.

## ⚠️ Kekurangan
- Hanya mendukung **nilai konstanta** (integer, char, enum).
- Tidak bisa digunakan untuk kondisi berbasis range (`x > 5`, `y < 10`, dll).
- Tidak cocok untuk ekspresi boolean kompleks.

---

## 📌 Catatan Praktis
- Selalu gunakan `break` untuk mencegah eksekusi tak diinginkan.
- Gunakan `default` agar program tetap menangani input tidak valid.
- Cocok digunakan untuk implementasi **menu program**, **enum**, atau **kode status**.
