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
    int katta=sonlar[0];
    for(int i=0; i<n; i++){
    if(sonlar[i]>katta){
        katta = sonlar [i];
    }
}

    printf("eng katta son:%d/n",katta);

    return 0;
}