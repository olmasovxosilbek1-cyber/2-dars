//rekyrsiv funksiya 
// 1-shart funksiya ozini ichida ozini chaqirishi kerash
// 2-shart toxtash sharti bolishi kerak
#include <stdio.h>
int yigindi(int n){
    if (n==1){
        return 1;
    }
    return n+ yigindi(n-1);
}
int main(){
printf("yigindi: %d",yigindi(10));
}