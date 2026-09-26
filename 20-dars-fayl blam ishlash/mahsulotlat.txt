 #include <stdio.h>

int main() {

    char nomi[100];
    double narx, daromad;
    int mavjud, sotildi;

    FILE *mahsulot = fopen("mahsulot.txt", "r");

    if (mahsulot == NULL) {
        printf("Faylni ochib bo'lmadi!");
        return 0;
    }

    while (fscanf(mahsulot, "%s %lf %d %d",
                  nomi, &narx, &mavjud, &sotildi) == 4) {

        if (sotildi <= mavjud) {

            daromad = narx * sotildi;
            mavjud -= sotildi;

            printf("\n----------------------\n");
            printf("Mahsulot: %s\n", nomi);
            printf("Narx: %.2lf $\n", narx);
            printf("Sotildi: %d ta\n", sotildi);
            printf("Qoldi: %d ta\n", mavjud);
            printf("Daromad: %.2lf $\n", daromad);

        } else {
            printf("\n%s mahsulot yetarli emas!\n", nomi);
        }
    }

    fclose(mahsulot);

    return 0;
}