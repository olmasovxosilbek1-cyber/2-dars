#include <stdio.h>

int main()
{
    FILE *n = fopen("hello.text", "w");

    fprintf(n,"salom c dasturlash tili\n");
    printf("fyl malumoti saqlandi");
    fscanf("%d",n);

    

   
}