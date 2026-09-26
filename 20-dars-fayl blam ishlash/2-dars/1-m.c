#include <stdio.h>

int main()
{
    FILE *f = fopen("hello.text", "w");

    fprintf(f,"salom c dasturlash tili\n");
    printf("fyl malumoti saqlandi");
    fscanf("%d",f);

    

   
}