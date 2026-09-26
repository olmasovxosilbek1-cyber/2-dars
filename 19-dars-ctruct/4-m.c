#include <stdio.h>
#include <string.h>
struct tort_burchak
{
    double uzunlik;
    double eni;
};

int main()
{
    struct tort_burchak t1;
    printf("tortburchakning uzunligi kiritlsin");
    scanf("%d", &t1.uzunlik);

    printf("uzunlik");
    scanf("%lf", &t1.eni);
    int yuzi = t1.uzunlik * t1.eni, per = (t1.eni + t1.uzunlik) * 2;
    printf("yuzi:%d,perimetr:%d\n", yuzi, per);
}