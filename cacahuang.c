#include <stdio.h>

int main (){
  int nilai_uang;
  int sisa;
  printf("masukkan nila uang : ");
  scanf("%d", &nilai_uang);

  sisa = nilai_uang;

  printf("\n pecahan uang 100000 : %d lembar ", nilai_uang/100000);
  sisa = nilai_uang % 100000;

  printf("\n pecahan uang 50000 : %d lembar ", nilai_uang/50000);
  sisa = nilai_uang % 50000;

  printf("\n pecahan uang 20000 : %d lembar ", nilai_uang/20000);
  sisa = nilai_uang % 20000;

  printf("\n pecahan uang 10000 : %d lembar ", nilai_uang/10000);
  sisa = nilai_uang % 10000;

  
  printf("\n pecahan uang 5000 : %d lembar ", nilai_uang/5000);
  sisa = nilai_uang % 5000;

  
  printf("\n pecahan uang 1000 : %d lembar ", nilai_uang/1000);
  sisa = nilai_uang % 1000;

  
  printf("\n pecahan uang 500 : %d buah ", nilai_uang/500);
  sisa = nilai_uang % 500;

  
  printf("\n pecahan uang 100 : %d buah ", nilai_uang/100);
  sisa = nilai_uang % 100;

}