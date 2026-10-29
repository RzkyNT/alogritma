![](data:image/jpeg;base64...)

Aim | Synergy | Trustworthiness | Achievement oriented | Responsibility

![](data:image/jpeg;base64...)MODUL

![](data:image/jpeg;base64...)PEMROGRAMAN 1

|  |
| --- |
|  |

Disusun oleh :

Dosen 1

Dosen 2

Instruktur 1

…..

LP2M Politeknik Manufaktur Astra

JAKARTA

|  |  |  |
| --- | --- | --- |
| ![](data:image/jpeg;base64...) | |  | | --- | |  | |

Aim | Synergy | Trustworthiness | Achievement oriented | Responsibility

MODUL Pemrograman 1

Penulis :

Dosen Pengampu

Instruktur

Penerbit :

LP2M Politeknik Manufaktur Astra

Jl. Gaya Motor Raya No.8 Sunter II Jakarta 14330

Telepon: (021) 6519555 Fax: (021) 6519821

Email: <u>sekretariat@polman.astra.ac.id</u>

# KATA PENGANTAR

Modul praktikum ini dibuat sebagai pedoman mahasiswa dalam melakukan kegiatan praktikum mata kuliah ……………. di Politeknik Astra. Modul praktikum ini terdiri dari ……... topik praktikum yang membahas tentang ……………………. Modul praktikum ini diharapkan dapat membantu mahasiswa/i dalam melaksanakan praktikum dengan lebih baik, terarah, dan terencana. Pada setiap topik telah ditetapkan tujuan pelaksanaan praktikum dan semua kegiatan yang harus dilakukan oleh mahasiswa/i serta teori singkat untuk memperdalam pemahaman mahasiswa/i mengenai materi yang dibahas.

Penyusun menyakini bahwa dalam pembuatan Modul Praktikum mata kuliah …………...

ini masih jauh dari sempurna. Oleh karena itu penyusun mengharapkan kritik dan saran yang membangun guna penyempurnaan modul praktikum ini dimasa yang akan datang. Akhir kata, penyusun mengucapkan banyak terima kasih kepada semua pihak yang telah membantu baik secara langsung maupun tidak langsung.

Jakarta, ………………….

Penulis

# DAFTAR ISI

[KATA PENGANTAR ii](#_Toc28343)

[DAFTAR ISI iii](#_Toc28344)

[M03 Algoritma, Pseudocode dan Kode Program 1](#_Toc28345)

[1. TUJUAN 1](#_Toc28346)

[2. DURASI WAKTU 1](#_Toc28347)

[3. DASAR TEORI 1](#_Toc28348)

[4. PERCOBAAN 5](#_Toc28349)

[5. LATIHAN 17](#_Toc28350)

# M03 Algoritma, Pseudocode dan Kode Program.

## 1. TUJUAN

CPMK :

1. Mahasiswa mampu menjelaskan dan mengimplementasikan struktur teks algoritma dan melakukan transelasi algoritma menjadi kode program.

Sub-CPMK :

1. Mahasiswa mampu untuk membuat algoritma menggunakan notasi pseudocode.
2. Mahasiswa mampu untuk membuat algoritma dan menterjemahkannya ke dalam sebuah program komputer.

## 2. DURASI WAKTU

2 pertemuan x 2 jam

## 3. DASAR TEORI

3.1.Struktur Bahasa Pemrograman C.

Struktur bahasa pemrograman C harus memiliki program utama (main program). Program utama pada pemograman C ditandai dengan adanya fungsi/procesedur

main.

![](data:image/jpeg;base64...)

Gambar 1. Program Utama

Perhatikan contoh kode program dibawah ini :

![](data:image/jpeg;base64...)

Gambar 3. Kode Program Selamat Datang Gambar 2. Kode Program Selamat Datang

Kode program pada Gambar 2 terdiri dari :

* 1. Library yang digunakan (line1)
  2. Program Utama atau Fungsi main (line3)
  3. Instruksi. Pada program diatas hanya ada 1 buah instruksi (line6). untuk membatasi instruksi terdapat kurung kurawal buka ‘{’ (line3)

dan kurung kurawal tutup ‘}’ (line8)

* 1. Komentar (line5). Komentar bisa ditempatkan di mana saja dan sifatnya tidak bersifat wajib. Komentar dapat digunakan untuk membuat catatan yang dapat membantu untuk memahami isi dari program.

<u>Tugas !</u>

1. Carilah bentuk/jenis lain penulisan program utama atau Fungsi Main pada bahasa pemograman C. int main(void) {return 0;}
2. Sebutkan fungsi pada library ![](data:image/jpeg;base64...) yang digunakan pada

program di Gambar 2. printf() untuk menampilkan output ke layar, scanf() untuk menerima input dari pengguna, getchar() untuk membaca satu karakter, putchar() untuk menampilkan satu karakter, fgets() untuk membaca teks, dan puts() untuk menampilkan teks yang diakhiri dengan baris baru

1. Carilah bentuk lain syntax komentar pada bahasa pemograman C. Bentuk lain penulisan komentar pada bahasa pemrograman C adalah komentar satu baris menggunakan // dan komentar beberapa baris menggunakan /\* ... \*/.
2. 2.Coding C Program

Sebuah permasalahan komputasi yang ingin diselesaikan dengan sebuah program komputer perlu dipecahkan terlebih dahulu menjadi sebuah algoritma. Algoritma ini perlu ditranslasikan menjadi bahasa pemograman tertentu, lalu dikompilasi (compiling) menjadi sebuah bahasa yang bisa dipahami dan dieksekusi (execute) oleh mesin CPU.

Langkah untuk menuliskan bahsa pemograman C

* + - Algoritma dituliskan dalam syntax bahasa pemograman C pada text editor lalu selanjutnya disebut sebagai kode program,
    - Kode program tersebut disimpan dalam file teks dengan ekstensi ‘.c’ <namafile>.c tidak ada ketentuan khusus untuk penamaan file tetapi lebih mudah jika penamaan disesuaikan dengan isi kode program yang dibuat

Compile C Program

Compile adalah proses untuk mentranslasikan kode program dengan bahasa pemrograman tertentu ke dalam bahasa yang dapat dipahami oleh mesin. Salah satu compiler bahasa pemrograman C yang umum digunakan adalah GCC (GNU Compiler Collection). Pada command prompt (cmd), compile kode program gunakan instruksi gcc <namafile>.c

Execute C program

Execute program adalah proses untuk mengeksekusi executable file (.exe) yang berhasil dibuat selelah proses compile. Pada command prompt (cmd) Untuk menjalankan program hanya perlu menulis instruksi <namafile>.exe

<u>Tugas!</u>

1. Jika belum belum memiliki compiler dalam bahasa C, silahkan setup environment untuk bahasa pemrograman C ya!
2. Cek versi GCC pada command prompt (cmd) Instruksi pada

cmd adalah : ![](data:image/jpeg;base64...)

3.2.1 Transelasi Pesudocode ke dalam Bahasa

|  |  |  |  |
| --- | --- | --- | --- |
| Group | Pseudocode |  | C |
| Tipe Data Primitif | integer | int |  |
| short int |  |
| long int |  |

|  |  |  |
| --- | --- | --- |
|  |  | unsigned int |

|  |  |  |
| --- | --- | --- |
|  | real | float |
| double |
| long double |
| Boolean | not available  Dapat menggunakan int dimana nilai false=0 dan selain 0 adalah true |
| Char | char |
| Tipe Data  Bentukan | String | not available  Bisa menggunakan array of char    Contoh : char sapaan[4] =  {‘h’,’a’,’i’,’\0’} char sapaan[] =  “hai”  Dapat menggunakan int dimana nilai false=0 dan selain 0 adalah true |
| Type mshs <  nama : string kelas : char  No\_absen : integer  > | struct mhs {  char[100] nama; char kelas; int No\_absen;  } |
| Operator Arithmatics | + | + |
| - | - |
| \* | \* |
| / | / |
| div | / |
| mod | % |
| comparasion | < | < |
|  | ≤ | <= |
| > | > |
| ≥ | >= |
|  | ≠ | != |
| Logical | not | ! |
| and | && |
| or | || |
| xor | Not Available |
| comments | { comments } | /\* comments \*/ |
| etc | const | const or #define |
| type | typedef |
| assignment | <- | = |
| input / output | read | scanf |
| write | printf |

## 4. PERCOBAAN

Percobaan 1. Program Hello Word

Ikuti instruksi dibawah ini dengan seksama!

Pastikan sudah ada compiler bahasa C. Penjelasan pada modul ini menggunakan gcc.

1. Tuliskan program pada gambar 2 pada t ext editor.

|  |  |
| --- | --- |
| 2. | #include <stdio.h> |
| 3. | void main () { |
| 4. | printf("Selamat datang di pemrograman 1 !\n"); |
| 5. | } |

6. Simpan file tersebut dengan format .c. Contoh : “HelloWorld.c”

|  |  |
| --- | --- |
| 7. | HelloWorld.c |

1. Buka Command Prompt. Lalu akses direktori file .c disimpan.

|  |
| --- |
| C:\laragon\www\Kuliah\alogritma>dir praktek.c  Volume in drive C is Windows  Volume Serial Number is 1C61-5DBB    Directory of C:\laragon\www\Kuliah\alogritma  10/10/2026 10.27 85 HelloWorld.c  1 File(s) 85 bytes  0 Dir(s) 37.682.208.768 bytes free |

1. Pada Command Prompt. Compile kode program tersebut tersebut

menggunakan instruksi berikut : ![](data:image/jpeg;base64...)

* 1. Jika berhasil di-compile. Pada direktori yang sama akan muncul file .exe Apa nama file exe yang ada?. Lampirkan printscreen.

Jawab :

C:\laragon\www\Kuliah\alogritma>dir HelloWorld\*

Volume in drive C is Windows

Volume Serial Number is 1C61-5DBB

Directory of C:\laragon\www\Kuliah\alogritma

/10/2026 10.27 85 HelloWorld.c

10

10

/10/2026 10.27 42.405 HelloWorld.exe

2 File(s) 42.490 bytes

0 Dir(s) 37.668.995.072 bytes free

10

/10/2026 10.27

![](data:image/jpeg;base64...)

* 1. Ulangi compile kode program pada command prompt menggunakan instruksi berikut :

gcc HelloWorld.c -o <namafile>.exe contoh :

![](data:image/jpeg;base64...)

* 1. Apa yang terjadi? Jelaskan.

Jawab : yang terjadi adalah muncul file executeable yang bernama sesuai seperti yang kita perintahkan

PS C:\laragon\www\Kuliah\alogritma> gcc .\HelloWorld.c

-o rizki.exe

PS C:\laragon\www\Kuliah\alogritma> dir rizki.exe

Directory: C:\laragon\www\Kuliah\alogritma

Mode LastWriteTime Length Name

|  |  |
| --- | --- |
| ---- ------------- ------ ----a---- 10/10/2026 10.49 38953 rizki.exe | |
|  |  |
|  | |

4. Execute kode program yang telah di buat. Lampirkan printscreen dari command prompt.

Jawab :

![](data:image/jpeg;base64...)

Percobaan 2. Tipe Data Integer : Pecahan uang

Diberikan suatu nilai uang dalam rupiah. Nyatakan nilai uang tersebut dalam pecahan uang sepuluh ribu, lima ribu, dan seribu rupiah.

* + Contoh masukan:

19000

* + Contoh keluaran:

Pecahan uang 10000: 1 lembar

Pecahan uang 5000: 1 lembar

Pecahan uang 1000: 4 lembar

Pseudocode

![](data:image/jpeg;base64...)

C Program

![](data:image/jpeg;base64...)

1. Ikuti program C diatas. Printscreen layar console yang menampilkan input dan output!

Jawab :

![](data:image/jpeg;base64...)

1. Modifikasi kode diatas dengan pecahan uang pada rupiah.

Uang kertas Rp 100.000

Uang kertas Rp 50.000

Uang kertas Rp 20.000

Uang kertas Rp 10.000

Uang kertas Rp 2.000

Uang koin Rp 1.000

Uang koin Rp 500

Uang koin Rp 100

Contoh 1

Masukan: 240600 Keluaran:

Pecahan uang 100000: 2 lembar

Pecahan uang 50000: 0 lembar

Pecahan uang 20000: 2 lembar Pecahan uang 10000: 0 lembar

Pecahan uang 5000: 0 lembar

Pecahan uang 1000 : 0 buah

Pecahan uang 500 : 1 buah

Pecahan uang 100: 1 buah

Printscreen hasil modifikasi kode program dan tampilan console disini ya!

Jawab :

#include <stdio.h>

|  |  |
| --- | --- |
| int main() { int nilai\_uang; int sisa;  printf("masukkan nila uang : "); scanf("%d", &nilai\_uang);  sisa = nilai\_uang;  printf("\nPecahan uang 100000: %d lembar", sisa / 100000); sisa = sisa % 100000;    printf("\nPecahan uang 50000 : %d lembar", sisa / 50000); sisa = sisa % 50000;  printf("\nPecahan uang 20000 : %d lembar", sisa / 20000); sisa = sisa % 20000;  printf("\nPecahan uang 10000 : %d lembar", sisa / 10000); sisa = sisa % 10000;  printf("\nPecahan uang 5000 : %d lembar", sisa / 5000); sisa = sisa % 5000;  printf("\nPecahan uang 1000 : %d buah", sisa / 1000); sisa = sisa % 1000;    printf("\nPecahan uang 500 : %d buah", sisa / 500); sisa = sisa % 500;  printf("\nPecahan uang 100 : %d buah", sisa / 100); sisa = sisa % 100;  printf("\n");  return 0;  } | |
|  | ![](data:image/jpeg;base64...) |

Percobaan 3. Tipe Data Real : Mencari luas lingkaran

Buatlah sebuah program untuk menghitung luas lingkaran. Program akan menerima input berupa jari – jari lingkaran

Masukan : Program menerima input berupa jari – jari lingkaran dalam tipe data real Keluaran : Program menampilkan luas lingkaran.

Pseudocode

![](data:image/jpeg;base64...)

C Program

![](data:image/jpeg;base64...)

1. Ikuti program C diatas. Printscreen layar console yang menampilkan input dan output!

Jawab :

![](data:image/jpeg;base64...)

1. Modifikasi program C diatas. Sehingga tampilan program seperti berikut.

![](data:image/jpeg;base64...)

Catatan : program hanya menampilkan 2 desimal dibelakang koma. Ini bisa didapatkan dengan modifikasi fungsi printf untuk float %.

Printscreen hasil modifikasi kode program dan tampilan console disini ya!

|  |  |
| --- | --- |
| Jawab : #include <stdio.h>  void main() { #define pi 3.14 float r; float a;  printf("Masukkan jari - jari linkaran :"); scanf("%f" , &r); a = pi \* r \* r;  printf("Luas dari lingkaran tersebut adalah %f", a);  } | |
|  | ![](data:image/jpeg;base64...)90 |

Percobaan 4. Tipe Data Boolean : Cek Kelulusan

Buatlah sebuah program untuk mengecek kelulusan. Diberikan nilai akhir seorang mahasiswa [0..100] dan status mengerjakan tugas atau tidak. Apakah mahasiswa tersebut lulus atau gagal? Batas lulus nilai akhir yang diperoleh diatas 55 dan mengerjakan tugas atau mempunyai nilai akhir yang diperoleh diatas 90 (nilaiAkhir>90).

Contoh dalam pseudocode :

Masukan: 65 true

Keluaran: Mahasiswa tersebut lulus? true Contoh dalam bahasa c :

Masukan : 91 0

Keluaran: Mahasiswa tersebut lulus? 1

Catatan. Dalam bahasa C, 0 adalah false, dan selain 0 adalah true. Pseudocode

![](data:image/jpeg;base64...)

Program C

![](data:image/jpeg;base64...)

1. Ikuti program C diatas. Printscreen layar console yang menampilkan input dan output!

Jawab :

![](data:image/jpeg;base64...)

|  |
| --- |
|  |

1. Modifikasi program C diatas.

Tambahkan kondisi mahasiswa pengecekan batas lulus nilai akhir yang diperoleh diatas 55 dan mengerjakan tugas atau mahasiswa boleh tidak mengerjakan tugas asalkan nilai akhir diatas diatas 90 (nilaiAkhir>90) dan kehadiran 100%

Catatan : tambahkan input berupa Boolean yang menyatakan status kehadiran penuh atau tidak.

Printscreen hasil modifikasi kode program dan tampilan console-nya disini ya!

|  |  |
| --- | --- |
| Jawab : #include <stdio.h>  #include <stdbool.h>  int main() {  int nilaiakhir; int statustugas; bool kehadiranpenuh; int input;  scanf("%d %d %d", &nilaiakhir, &statustugas, &input); kehadiranpenuh = input;  printf("Mahasiswa tersebut lulus? %d", (nilaiakhir > 55 && statustugas) || (nilaiakhir > 90 && kehadiranpenuh));  } | |
|  | ![](data:image/jpeg;base64...) |

Percobaan 5. Tipe Data String : input nama mahasiswa

Buatlah sebuah program sederhana untuk mencatat nama mahasiswa dan menampilkannya kembali pada console.

Pseudocode

![](data:image/jpeg;base64...)

Program C

![](data:image/jpeg;base64...)

1. Ikuti program C diatas.

Masukan pada console nama mahasiswa “Selamat Riyadi” Printscreen layar console yang menampilkan input dan output!

Jawab :

![](data:image/jpeg;base64...)

1. Apakah program diatas dapat menyimpan nama lengkap ke dalam tipe data string? Jika tidak modifikasi program diatas sehingga bisa menyimpan data nama lengkap ( data yang dipisahkan dengan spasi)

Catatan : dapat mengunakan beberapa modifikasi pada scanf, salah satunya mengganti dengan fungsi gets()

Printscreen hasil modifikasi kode program dan tampilan console-nya disini ya!

|  |  |
| --- | --- |
| #include <stdio.h>  int main() {  char namamhs[50];  gets(namamhs);  printf("Selamat datang %s!", namamhs);  return 0;  } | |
|  | ![](data:image/jpeg;base64...) |

## 5. LATIHAN

Latihan T1

Ubahlah pseudocode yang sudah dikerjakan pada modul 2 Latihan T2.2 ke dalam bahasa pemrograman C!

Latihan T2. Latihan dalam grup.

Dalam regu Anda, lakukan diskusi, dan tulislah algoritma berikut dengan notasi pseudocode.

Lalu masing – masing anggota dalam kelompok secara mandiri terjemahkan ke dalam bahasa pemrograman C.

Semua soal pada modul 2 dan modul 3 diselesaikan hanya menggunakan struktur algoritma runutan/ sequential.

1. Pada toko, pembeli mendapat diskon 5% untuk setiap barang yang dibeli. Buat sebuah algoritma yang membaca harga barang dalam rupiah, lalu kalkulasi setelah harga barangnya diskon.

Contoh 1

Masukan : 250000 Keluaran : 237500

Contoh 2

Masukan : 30000 Keluaran : 28500

ALGORITMA HitungDiskon

declaration:

harga : real

start

read (harga)

harga ← harga - (harga \* 5 / 100)

write (harga)

end

|  |
| --- |
| #include <stdio.h>  Int main() {  float harga;  scanf("%f", &harga);  harga = (harga - (harga \* 5/100));  printf("%f", harga);  } |
|  |

1. Buatlah sebuah algoritma menggunakan notasi algoritma yang membaca temperatur dalam Celsius lalu mengubahnya kedalam Fahrenheit, dan menampilkan hasil konfersinya ke dalam layar. Formula C diubah menjadi Fahrenheit adalah sebagai berikut :

Contoh

Masukan : Temperatur dalam Celsius <u>50</u>

Keluaran : Derajat dalam Fahrenheit 122

Catatan : (teks bergaris bawah adalah input):

ALGORITMA KonversiSuhu

declaration:

celsius, fahrenheit : real

start

read (celsius)

fahrenheit ← (celsius \* 9 / 5) + 32

write (fahrenheit)

end

|  |
| --- |
| #include <stdio.h>  int main() {  float celsius, fahrenheit;  scanf("%f", &celsius);  fahrenheit = (celsius \* 9.0 / 5.0) + 32;  printf("%f", fahrenheit);  } |

1. Pada bank konvensional, uang yang disimpan dengan sejumlah x akan mendapatkan bunga setiap p% setiap tahunnya. Buatlah sebuah algoritma yang dapat membaca x dan p, lalu kalkulasikan bunga dari uang tersebut setelah disimpan selama 1 tahun.

Contoh 1

Masukan : 87000000 10

Keluaran : 95700000

Contoh 2

Masukan : 200000000 2.5

Keluaran : 205000000

ALGORITMA HitungBunga

declaration:

x, p, bunga : real

start

read (x)

read (p)

bunga ← x \* (p div 100)

write (x + p)

end

|  |
| --- |
| #include <stdio.h>  int main() {  float x, p, bunga;  scanf("%f", &x);  scanf("%f", &p); bunga = x \* (p / 100.0); printf("%f", x + bunga);  } |

1. Buat algoritma yang dapat membaca sebuah nilai uang (rupiah) yang harus dibayar dan lembar sepuluh ribuan yang disediakan. Algoritma tersebut akan menampilkan jumlah sepuluh ribuan paling sedikit yang dapat diperlukan untuk membayar nilai tersebut dan informasi apakah uang yang disediakan cukup atau tidak.

Contoh interaksi yang diminta adalah sebagai berikut (teks bergaris bawah adalah input):

Contoh 1 :

Nilai uang : <u>28500</u>

Lembar Rp.10000,- yang diberikan: 5

Lembar Rp.10000,- yang digunakan: 3

Cukup? true

Keterangan contoh 1 :

Diperlukan 3 lembar sepuluh ribuan, sehingga 5 lembar sangat mencukupi.

Contoh 2

Nilai uang: <u>540000</u>

Lembar Rp.10000,- yang diberikan: 45 Lembar Rp.10000,- yang digunakan: 54 Cukup? false

Keterangan contoh 2:

Diperlukan 54 lembar sepuluh ribuan, sehingga 45 lembar sangat kurang.

ALGORITMA CekCukupUang

declaration:

cukup, nilai\_uang, lembar\_diberikan, lembar\_digunakan : integer

start

read (nilai\_uang)

read (lembar\_diberikan)

lembar\_digunakan ← (nilai\_uang + 9999) DIV 10000

cukup ← (lembar\_digunakan <= lembar\_diberikan)

write ("Cukup?", cukup “ = ”, cukup ? “True” : “False”)

end

|  |
| --- |
| #include <stdio.h>  int main() {  int nilai\_uang, lembar\_diberikan, lembar\_digunakan, cukup;  printf("Nilai uang : ");  scanf("%d", &nilai\_uang);  printf("Lembar Rp.10000,- yang diberikan: "); |
| scanf("%d", &lembar\_diberikan);  lembar\_digunakan = (nilai\_uang +9999) / 10000;  cukup = lembar\_digunakan <= lembar\_diberikan;  printf("Cukup? %d", cukup ? "True" : "False");  } |