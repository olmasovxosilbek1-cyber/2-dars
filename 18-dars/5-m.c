#include <stdio.h>
int raqamlar_yigindisi(int son){
    if (son<10){
        return son;
    }
    return 1 + raqamlar_yigindisi (son / 10);
}

int main(){
int son;
printf("son:");
scanf("%d",&son);

printf("%d ning raqamlar yigindisi=%d",son,raqamlar_yigindisi(son));
}