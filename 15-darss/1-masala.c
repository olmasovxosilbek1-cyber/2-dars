#include <stdio.h>

int main(){
 int a=9;
 int *p = &a;

 printf("%d\n",a );
 printf("%p\n",&*p );
}