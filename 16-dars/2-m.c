#include <stdio.h>
char toUpper(char belgi){
    if (belgi >=97 && belgi<= 122){
        return belgi -32;
    }
       return belgi;
}

int main(){
char belgi;
printf("belgini kiriting:");
scanf("%c",&belgi);

printf("%c -> %c\n",belgi,toUpper(belgi));
}