#include <stdio.h>
int main()
{
    FILE *file = fopen("matn.text", "w");
    char ism [50];
    printf("addres: %p\n", file);

 
    printf("isimni kiriting:");
    scanf("%s",ism);


 
    fprintf(file,ism);
    printf("fayila malumot saqlandi");
  
}