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
Program HariDalamBulan

Declaration
    bulan, tahun, jumlah_hari : integer

Algorithm
    write("Masukkan nomor bulan (1-12): ")
    read(bulan)
    write("Masukkan tahun: ")
    read(tahun)

    if (bulan = 2) then
        if (tahun mod 400 = 0) or (tahun mod 4 = 0 and tahun mod 100 != 0) then
            jumlah_hari <- 29
        else
            jumlah_hari <- 28
        endif
    else if (bulan = 4) or (bulan = 6) or (bulan = 9) or (bulan = 11) then
        jumlah_hari <- 30
    else if (bulan >= 1 and bulan <= 12) then
        jumlah_hari <- 31
    else
        jumlah_hari <- 0
    endif

    if (jumlah_hari = 0) then
        write("Nomor bulan tidak valid")
    else
        write("Jumlah hari: ", jumlah_hari)
    endif
*/

#include <stdio.h>

int main(void) {
    // Declaration
    int bulan, tahun, jumlah_hari;

    // Algorithm
    printf("Masukkan nomor bulan (1-12): ");
    scanf("%d", &bulan);
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    if (bulan == 2) {
        if (tahun % 400 == 0 || (tahun % 4 == 0 && tahun % 100 != 0))
            jumlah_hari = 29;
        else
            jumlah_hari = 28;
    } else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
        jumlah_hari = 30;
    } else if (bulan >= 1 && bulan <= 12) {
        jumlah_hari = 31;
    } else {
        jumlah_hari = 0;
    }

    if (jumlah_hari == 0)
        printf("Nomor bulan tidak valid\n");
    else
        printf("Jumlah hari: %d\n", jumlah_hari);

    return 0;
}


/*
Output:

*/
