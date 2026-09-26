#include <stdio.h>
int main(){
int pul,soni=0;
scanf("%d",&pul);

do{
    soni++;
    pul-=3000;
}while (pul >=3000);

printf("pul:%d;soni:%d",pul,soni);


}