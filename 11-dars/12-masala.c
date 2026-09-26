#include <stdio.h>
int main(){
    int n,m;
    printf("qator va ustun soni:");
    scanf("%d %d", &n, &m);

    for(int i=1;i<=n;i++){
        for(int k=1; k<=m; k++){
            if( i==1 || i == n || k==1 || k==m){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}