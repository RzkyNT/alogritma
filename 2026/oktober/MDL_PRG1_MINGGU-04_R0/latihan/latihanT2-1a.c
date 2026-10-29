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
(Cetak nama bulan berdasarkan nomor bulan (1..12).)

Pseudocode:
Program NamaBulan

Declaration
bulanke : int
Algorithm
write("Masukkan nomor bulan 1-12 : ")
read(bulanke)
if (bulanke = 1) then
    write("Januari") 
    else if (bulanke = 2) then
        write("Februari") 
        else if (bulanke = 3) then
            write("Maret") 
            else if (bulanke = 4) then
                write("April") 
                else if (bulanke = 5) then
                    write("Mei") then
                    else if(bulanke = 6) then
                        write("Juni")
                        else if (bulanke = 7) then
                            write("Juli") 
                            else if (bulanke = 8) then
                                write("Agustus")
                                    else if (bulanke = 9) then
                                    write("September")
                                        else if (bulanke = 10) then
                                        write("Oktober") 
                                            else if (bulanke = 11) then
                                                write("November")
                                                else if (bulanke = 12) then
                                                    write("Desember")
                                                endif
                                            endif
                                        endif
                                    endif
                                endif
                            endif
                        endif
                    endif
                endif
            endif
        endif
    endif


*/

#include <stdio.h>

int main(void) {
    // Declaration
    int bulanke;

    // Algorithm
    printf("Masukkan nomor bulan (1-12): ");
    scanf("%d", &bulanke);

    if (bulanke == 1) {
        printf("Januari");
    } else if (bulanke == 2) {
        printf("Februari");
    } else if (bulanke == 3) {
        printf("Maret");
    } else if (bulanke == 4) {
        printf("April");
    } else if (bulanke == 5) {
        printf("Mei");
    } else if (bulanke == 6) {
        printf("Juni");
    } else if (bulanke == 7) {
        printf("Juli");
    } else if (bulanke == 8) {
        printf("Agustus");
    } else if (bulanke == 9) {
        printf("September");
    } else if (bulanke == 10) {
        printf("Oktober");
    } else if (bulanke == 11) {
        printf("November");
    } else if (bulanke == 12) {
        printf("Desember");
    }

    printf("\n");

    return 0;
}

/*
Output:

*/
