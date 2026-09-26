#include <stdio.h>

int main() {
    int n = 3;
    int sonlar[n][n];

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            printf("%d -qator %d -ustun: ", i, j);
            scanf("%d", &sonlar[i][j]);
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(j==i || i+j==n-1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }



        return 0;
}