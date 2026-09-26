#include <stdio.h>
#include <string.h>

struct telefon{
    char nomi[50];
    int yil;
    int modeli;
    int hotirasi;
    int kamerasi;
};
int main(){
    strcpy telefon samsung;

    strcpy( samsung.nomi,"samsungA33");
    samsung.yil= 2022;
    samsung.modeli = 33;
    samsung.hotirasi = 128;
    samsung.kamerasi = 48;

    printf("%d: %d-yil,%d-modeli,%d-hotirasi,%d-kamerasi",samsung.nomi,samsung.yil,samsung.modeli,samsung.hotirasi,samsung.kamerasi);
}

