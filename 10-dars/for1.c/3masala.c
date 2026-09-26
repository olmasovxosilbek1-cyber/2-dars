//foydalanuvchidan 0 kiritmaguncha son kiritishini sorang.
//kiritilgan  sonlarni yigindisini hioblang.
#include <stdio.h>
int main(){
    int son,yigindi=0;

    do{
        printf("sonni kiriting");
        scanf("%d",&son);
        yigindi +=son;
    }while (son !=0);
    printf("yigindi:%d",yigindi);
   
    
}