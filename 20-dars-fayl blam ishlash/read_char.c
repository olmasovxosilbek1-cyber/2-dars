#include <stdio.h>
int main(){
     FILE *sher=fopen("sher.txt","r");

     if (sher== NULL){
        printf("fayilni ochishda hatolik:");
        return 0;
     }
     char belgi;
     while ((belgi=fgetc(sher)) !=EOF)  {
   printf("%c",belgi);
     }
     fclose(sher);
}