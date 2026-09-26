#include <stdio.h>
char toUpper(char belgi){
    if (belgi >=65 && belgi<= 90){
        return belgi   +32;
    }
       return belgi;
}
char swapCase(char belgi){
    if (belgi >=97 && belgi <=122){
         return belgi   -32;
    }
    if (belgi >=65 && belgi <=90){
        return belgi +32;
    }
    return belgi;
}
void whatIs(char belgi){
    printf("whatIs:%c->raqam\n,belgi");
    else if(belgi =>65 && belgi <=90){
        printf("whatIs:%c->katta harf\n,belgi");
    } else if(belgi =>97 && belgi <=122){
        printf("whatIs:%c->katta harf\n,belgi");
}
else{
    printf("whatIs:c ->belgi\n",belgi);
}
}
int main(){
char belgi;
printf("belgini kiriting:");
scanf("%c",&belgi);

printf(" toUpper%c -> %c\n",belgi,toUpper(belgi));
printf("toLower%c -> %c\n",belgi,toLower(belgi));
printf("swapCase%c -> %c\n",belgi,swapCase(belgi));
whatIs(belgi);
}