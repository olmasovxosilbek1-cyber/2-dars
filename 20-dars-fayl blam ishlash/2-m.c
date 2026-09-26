#include <stdio.h>
#include <string.h>
int main(){
    FILE *sonlar = fopen("sonlar.txt","w");

    for (int i = 1; i <=100; i++)
    {
        fprintf(sonlar,"%d\n,",i );

        if(i%10==0){
            printf(sonlar,"\n");

        }
    }
    printf("sonlar fayilga saqlandi!");

    fclose(sonlar);
    
}