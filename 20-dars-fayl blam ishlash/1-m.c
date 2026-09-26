#include <stdio.h>
// r - read -oqish uchun
// w - write-yozish uchun (bish faylda yozadi)
// a- appened-qoshish (davomida yozish)
// flcose->ochilgan fayilni yopadi
int main()
{
    FILE *file = fopen("matn.text", "w");
    char ism [50];
    printf("addres: %p\n", file);

    if (file == NULL)
    {
        printf("fayilni ochib bolmadi!\n");
        return 0;
    }
    printf("isimni kiriting:");
    scanf("%s",ism);


    fprintf(file, "salom");
    fprintf(file,ism);
    printf("fayila malumot saqlandi");
    fclose(file);
}