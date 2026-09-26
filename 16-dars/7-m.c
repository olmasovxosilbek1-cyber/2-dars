#include<stdio.h>
#include<string.h>
int main(){
    char ism [50];
    printf("ismingizni kiriting:");
    fgets(ism,50,stdin);

    printf("kiritilgan ism:%s",ism);

    int i=0;
    while (ism [i]!='\n'){
        printf("%c\n",ism[i]);
        i++;
    }
   
}