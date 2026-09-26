#include <stdio.h>
int eng_kattasi(int sonlar[], int n)
{
    int katta = sonlar[0];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (sonlar[i] > katta)
        {
            katta = sonlar[i];
        }
    }
    for(int i=0;i<n;i++){
        if (katta==sonlar[i]){
            count++;
        }
    }
    return katta;
}
int main()
{
    int n;
    printf("n= ");
    scanf("%d", &n);

    int sonlar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sonlar[i]);
    }
    printf("kattasi:%d", eng_kattasi(sonlar, n));

    
}