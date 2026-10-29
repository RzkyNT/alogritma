#include <stdio.h> 
int main() {
int nilai_uang, lembar_diberikan, lembar_digunakan, cukup; 
printf("Nilai uang : "); 
scanf("%d", &nilai_uang);     
printf("Lembar Rp.10000,- yang diberikan: "); 
scanf("%d", &lembar_diberikan);     
lembar_digunakan = (nilai_uang +9999) / 10000;
cukup = lembar_digunakan <= lembar_diberikan;

printf("Cukup? %d = %s", cukup,cukup ? "True" : "False");
} 
