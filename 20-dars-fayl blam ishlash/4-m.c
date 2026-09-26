#include <stdio.h>
#include <string.h>
int main(){
    FILE *ismlar = fopen("ismlar.txt","w");
    char ism [100];
    int jami=0;
    while (1 ==1)
    {
     
        printf("isimni kiriting:");
        scanf("%s",ism);
        if (strcmp(ism,"stop")==0){
            break;
        }
        fprintf(ismlar, "%s\n",ism);
        jami++;
    }
    fprintf(ismlar,"jami ismlar: %d",jami);
    printf("malumot saqlandi!");

    fclose(ismlar);
    
}