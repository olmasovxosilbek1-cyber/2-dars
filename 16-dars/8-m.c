#include <stdio.h>
#include <string.h>
char toUpper(char belgi){
    if (belgi >=97 && belgi<= 122){
        return belgi -32;
    }
       return belgi; 

}

int main(){
char harf[25];
printf("belgini kiriting:");
fgets("%s",25,stdin);

printf("%c -> %c\n",harf,toUpper(*harf));
}