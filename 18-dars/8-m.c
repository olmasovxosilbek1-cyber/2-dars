#include <stdio.h>
void display_numbers(int n){
    if(n==0){
        return;
    }
      printf("%d\n",n);
    
    display_numbers(n-1);
}
int main(){
    display_numbers(10);
    return 0;
}


