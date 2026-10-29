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

Pseudocode:
Program Name

Declaration

Algorithm

*/
#include <stdio.h>
#include <conio.h>
int main() {
    // Declaration
    float jumlah_ayam;
    float total_biaya;
    float harga;
    float harga_diskon;
    int jenis_potongan;

    // Algorithm
    printf("============Ayam Geprek MbakE============\n");
    printf("->Harga Per potong = Rp. 15.000\n");
    printf("->Beli > 5 Diskon 10%%\n\n");
    printf("->[1] > Paha Bawah = Rp. 5000\n");
    printf("->[2] > Paha Atas = 10.000\n");
    printf("->[3] > Dada = Rp. 15.000\n\n");


    printf("[Tambah Pembelian]\n");
    printf("Jenis Potongan Ayam (1/2/3): ");
    scanf("%d", &jenis_potongan);
    switch (jenis_potongan) {
        case 1:
            harga = 5000;
            break;
        case 2:
            harga = 10000;
            break;
        case 3:
            harga = 15000;
            break;
        default:
            printf("Input tidak valid");
            return 0;
    }
    printf("Jumlah Ayam (Potong): ");
    scanf("%f", &jumlah_ayam);
    harga_diskon = 0;
    total_biaya = jumlah_ayam * harga;
    if (jumlah_ayam >= 10) {
    harga_diskon = (total_biaya * 0.1); 
    }
    printf("\n\n[Struk Pembelian]\n");
    printf("\n[%d] %.0f * Rp. %.2f = Rp. %.2f \n\n", jenis_potongan, jumlah_ayam, harga, total_biaya);
    printf("Total = Rp. %.2f \n", total_biaya);
    printf("Diskon = Rp. %.2f \n",  harga_diskon);
    printf("Total Bayar = Rp. %.2f \n", (total_biaya - harga_diskon));
    printf("\nTerimakasih telah membeli %0.f Potong Ayam Geprek\n",jumlah_ayam);
    getch();
}
