#include <stdio.h>
int main(){
    char simbol = 'A';
    printf("belgi:%d\n",simbol);
    printf("belgi:%c\n",simbol);

    int son;
    printf("raqamni kiriting:");
    scanf("%d",&son);

    printf("%d ornidagi belgi:%c",son,son);
}