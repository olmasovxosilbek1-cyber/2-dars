#include <stdio.h>
int main(){
    int a,b,kopaytma=1;
    scanf(" %d %d", &a, &b);

    for(int i=a; a<=b; i++){
        int ichki=0;
        for(int k=1;k<=i; k++){
            ichki+= kopaytma;
        }
        kopaytma=ichki;
        printf("%d\n",ichki);


    }
    printf("natija: %d",kopaytma);
}