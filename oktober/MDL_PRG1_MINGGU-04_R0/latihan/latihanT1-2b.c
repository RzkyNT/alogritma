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
{ Hitung gaji bersih karyawan. Data yang diinput adalah nama pegawai dan gaji pokok bulanannya. Gaji bersih = gaji pokok+tunjangan-pajak. Tunjangan sebesar 20% dari gaji pokok, sedangkan pajak sebesar 15% dari gaji pokok dan tunjangan. Outputnya adalah nama karyawan dan gaji bersihnya. } 
Pseudocode:
Program EmployeeNetSalary 

Declaration
gaji_pokok, gaji_bersih, tunjangan, pajak : real
nama_karyawan : string

Algorithm
read(nama_karyawan)
read(gaji_pokok)
tunjangan = gaji_pokok * 20/100
pajak = gaji_pokok * 15/100
gaji_bersih = gaji_pokok + tunjangan - pajak
write("Nama : Gaji Bersih", nama_karyawan, gaji_bersih)
*/

#include <stdio.h>

int main(void) {
    //Declaration
    float gaji_pokok, gaji_bersih, tunjangan, pajak;
    char nama_karyawan[100];

    //Algorithm
    scanf(" %99[^\n]", nama_karyawan);
    scanf("%f", &gaji_pokok);
    tunjangan = gaji_pokok * 20/100;
    pajak = gaji_pokok * 15/100;
    gaji_bersih = gaji_pokok + tunjangan - pajak;
    printf("Nama karyawan : %s\nGaji Bersih : Rp %.2f", nama_karyawan, gaji_bersih);

    return 0;
}

/*
Output:

*/
