#include <stdio.h>
void HitungRataRata(int N, float *u);
int main()
{
    int N;          
    float rerata;   
    printf("Jumlah peserta ujian? = "); 
    scanf("%d", &N);
    HitungRataRata(N, &rerata);     
    printf("Nilai rata-rata = %f \n", rerata);  
    if (rerata < 50)
    {
        printf("nilai rata-rata ujian tidak bagus \n");
    }
    else
    {
        printf("nilai rata-rata ujian bagus \n");
    }
}
void HitungRataRata(int N, float *u)
{
    float x;        
    int i;          
    float jumlah;   
    jumlah = 0; 
    for (i = 1; i <= N; i++)
    {
        printf("Nilai ujian yang ke-%d = ", i); scanf("%f", &x);
        jumlah = jumlah + x;
    }
    *u = jumlah / N;
}
