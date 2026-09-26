#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    scanf("%d", &n);

    int sonlar[n];
    for (int i=0; i<n; i++){
        printf("%d-son;", i+1);
        scanf("%d", &sonlar[i]);
    }
    bool almashtirildi=true;
    while(almashtirildi){
    almashtirildi=false;
        for (int i=0; i<n-1; i++){
            if(sonlar[i]>sonlar[i+1]){
                almashtirildi=true;
                int temp=sonlar[i];
                sonlar[i]=sonlar[i+1];
                sonlar[i+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", sonlar[i]);
    }
    
    return 0;
}