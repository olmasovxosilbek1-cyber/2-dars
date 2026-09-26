#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);
    
    int sonlar[n][m];

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            printf("%d -qator %d - ustun:", i, j);
            scanf("%d", &sonlar[i][j]);
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            printf("%d ",sonlar[i][j]);
        }
        printf("\n");
    }

    return 0;
}