#include <stdio.h>
#include <string.h>

struct car{
    char nomi[100];
    int yil;
    float mator_hajmi;
};
int main(){
    struct car mashina2;

    strcpy(mashina2.nomi,"nexia2");
    mashina2.yil= 2022;
    mashina2.mator_hajmi = 1.5;

    printf("%s: %d-yil,%flitr\n",mashina2.nomi,mashina2.yil,mashina2.mator_hajmi);
}
