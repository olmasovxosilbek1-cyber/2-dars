#include <stdio.h>
int main(){
    int n;
    printf("nechta son kerak:");
    scanf("%d",&n);
    int sonlar[n];

    for(int i=0;i<n;i++){
        printf("%d-son:",i);
        scanf("%d",&sonlar[i]);
    }
    bool almashtirildi=true;
    while (almashtirildi){
        almashtirildi=false;
        for ( int i = 0; i < n; i++){
            if(sonlar[i<sonlar[i+1]]){
                almashtirildi=true;
            }
        }   
    }
    
}