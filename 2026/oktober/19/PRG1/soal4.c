/*
Translasi Pesudocode ke dalam Bahasa
+----------------------+---------------------------+-----------------------------------------------+
| Group                | Pseudocode                | C                                             |
+----------------------+---------------------------+-----------------------------------------------+
| Tipe Data Primitif   | integer                   | int                                           |
|                      | short int                 | short int                                     |
|                      | long int                  | long int                                      |
|                      |                           | unsigned int                                  |
|                      | real                      | float                                         |
|                      |                           | double                                        |
|                      |                           | long double                                   |
|                      | Boolean                   | Not available (gunakan int: 0=false,          |
|                      |                           | selain 0=true)                                |
|                      | Char                      | char                                          |
+----------------------+---------------------------+-----------------------------------------------+
| Tipe Data Bentukan   | String                    | Not available (gunakan array of char)         |
|                      |                           | char sapaan[4] = {'h','a','i','\0'};          |
|                      |                           | char sapaan[] = "hai";                        |
|                      |                           |                                               |
|                      | Type mhs <                | struct mhs {                                  |
|                      |   nama : string           |     char nama[100];                           |
|                      |   kelas : char            |     char kelas;                               |
|                      |   No_absen : integer      |     int No_absen;                             |
|                      | >                         | };                                            |
+----------------------+---------------------------+-----------------------------------------------+
| Operator Arithmetic  | +                         | +                                             |
|                      | -                         | -                                             |
|                      | *                         | *                                             |
|                      | /                         | /                                             |
|                      | div                       | /                                             |
|                      | mod                       | %                                             |
+----------------------+---------------------------+-----------------------------------------------+
| Comparison           | <                         | <                                             |
|                      | <=                        | <=                                            |
|                      | >                         | >                                             |
|                      | >=                        | >=                                            |
|                      | !=                        | !=                                            |
+----------------------+---------------------------+-----------------------------------------------+
| Logical              | not                       | !                                             |
|                      | and                       | &&                                            |
|                      | or                        | ||                                            |
|                      | xor                       | Not available (gunakan ekspresi logika)       |
+----------------------+---------------------------+-----------------------------------------------+
| Comments             | { comments }              | /* comments */                             /* |
+----------------------+---------------------------+-----------------------------------------------+
| Etc                  | const                     | const or #define                              |
|                      | type                      | typedef                                       |
|                      | assignment: <-            | =                                             |
+----------------------+---------------------------+-----------------------------------------------+
| Input / Output       | read                      | scanf()                                       |
|                      | write                     | printf()                                      |
+----------------------+---------------------------+-----------------------------------------------+

Case:
4.	Buat algoritma yang dapat membaca sebuah nilai uang (rupiah) yang harus dibayar dan lembar sepuluh ribuan yang disediakan. Algoritma tersebut akan menampilkan jumlah sepuluh ribuan paling sedikit yang dapat diperlukan untuk membayar nilai tersebut dan informasi apakah uang yang disediakan cukup atau tidak.  
Contoh interaksi yang diminta adalah sebagai berikut (teks bergaris bawah adalah input):  

Contoh 1 :  
Nilai uang : 28500   
Lembar Rp.10000,- yang diberikan: 5  
Lembar Rp.10000,- yang digunakan: 3  
Cukup? true  
Keterangan contoh 1 :   
Diperlukan 3 lembar sepuluh ribuan, sehingga 5 lembar sangat mencukupi.  
Contoh 2  
Nilai uang: 540000  
Lembar Rp.10000,- yang diberikan: 45  Lembar Rp.10000,- yang digunakan: 54 Cukup? false  
Keterangan contoh 2:   
Diperlukan 54 lembar sepuluh ribuan, sehingga 45 lembar sangat kurang.  

Pseudocode:

Declaration
nilai_uang, lembar_digunakan, lembar_diberikan, cukup : int
Algorithm
write("Nilai uang : ")
read(nilai_uang)
write("Lembar Rp.10000,- yang diberikan: ")
read(lembar_diberikan)
lembar_digunakan <- (nilai_uang + 9999) / 10000
cukup <- lembar_digunakan <= lembar_diberikan
write("Cukup?", cukup " = ", cukup ? "True" : "False")
*/
#include <stdio.h> 
int main() {
int nilai_uang, lembar_diberikan, lembar_digunakan, cukup;
printf("Nilai uang : "); 
scanf("%d", &nilai_uang);     
printf("Lembar Rp.10000,- yang diberikan: "); 
scanf("%d", &lembar_diberikan);     
lembar_digunakan = (nilai_uang + 9999) / 10000;
cukup = lembar_digunakan <= lembar_diberikan;
printf("Cukup? %d = %s", cukup, cukup ? "True" : "False");
} 

/*
Output:
Nilai uang : 28500
Lembar Rp.10000,- yang diberikan: 5
Cukup? 1 = True
*/