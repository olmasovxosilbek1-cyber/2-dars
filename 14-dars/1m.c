#include <stdio.h>
int main(){
    int n=5;
    int *pointer_n =&n;
    printf("n=%d\n",n);
    printf("pointer:%p\n",pointer_n);
    scanf("%d",pointer_n);
    printf("yangi n:%d\n",*pointer_n);
} 