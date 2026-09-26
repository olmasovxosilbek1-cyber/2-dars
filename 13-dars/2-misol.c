#include <stdio.h>

int main (){

int n;
printf("nchta son kerak:");
scanf ("%d",&n);
int sonlar [n];
    for (int i=0; i<=n;i++){
        printf("%d - son:",i);
        scanf("%d",&sonlar[i]);
    }


    for(int i=0;i<n;i++){
        printf ("%d ", sonlar[i]*sonlar[i]);
    }

    return 0;
}