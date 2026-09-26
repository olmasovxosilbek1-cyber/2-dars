#include <stdio.h>
#include <math.h>

struct nuqta
{
    float x;
    float y;
};
int main()
{
    struct nuqta a, b;

    printf("a nuqta: ");
    scanf("%f %f", &a.x, &a.y);

    printf("b nuqta: ");
    scanf("%f %f", &b.x, &b.y);

    double masofa;
    masofa = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    printf("masofa:%lf", masofa);
}