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

Case: 2.	Buatlah sebuah algoritma menggunakan notasi algoritma yang membaca temperatur dalam Celsius lalu mengubahnya kedalam Fahrenheit, dan menampilkan hasil konfersinya ke dalam layar. Formula C diubah menjadi Fahrenheit adalah sebagai berikut :   
Contoh   
Masukan : Temperatur dalam Celsius 50  
Keluaran : Derajat dalam Fahrenheit 122  
Catatan : (teks bergaris bawah adalah input):  


Pseudocode:
Program KonversiSuhu
Declaration
celcius, fahrenheit : real

Algorithm
read(celcius)
fahrenheit <- (celcius * 9 / 5) + 32
write(fahrenheit)
*/
#include <stdio.h> 
int main() {     
float celsius, fahrenheit; 
scanf("%f", &celsius); 
fahrenheit = (celsius * 9.0 / 5.0) + 32; 
printf("%f", fahrenheit); 
} 
