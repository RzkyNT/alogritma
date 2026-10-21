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

int main(void) {
    //Declaration
    int x;

    //Algorithm
    scanf("%d",&x);
    if (x%2==0) {
        printf("even number"); 
        } else {
            printf("odd number");
    }

}

/*
Output:
PS C:\laragon\www\Kuliah\alogritma\oktober\latihan_prg2> run-c .\latihan1.c

[ GCC ] Compiling C:\laragon\www\Kuliah\alogritma\oktober\latihan_prg2\latihan1.c...
[ OUTPUT ] C:\laragon\www\Kuliah\alogritma\oktober\latihan_prg2\build\latihan1.exe
[SUCCESS] Compile berhasil!
1
odd number
[EXIT] Kode: 0
PS C:\laragon\www\Kuliah\alogritma\oktober\latihan_prg2> run-c .\latihan1.c

[ GCC ] Compiling C:\laragon\www\Kuliah\alogritma\oktober\latihan_prg2\latihan1.c...
[ OUTPUT ] C:\laragon\www\Kuliah\alogritma\oktober\latihan_prg2\build\latihan1.exe
[SUCCESS] Compile berhasil!
2
even number
[EXIT] Kode: 0
*/
