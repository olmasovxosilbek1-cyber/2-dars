#include <stdio.h>
//javob qaytarmaydigan funksiya
void salomlashish(){
    printf("hammaga salom\n");

}

//javob qaytaradigan funksiya
int kopaytrish (int a,int b){
    return a*b;
}

int main(){
    salomlashish();
    int natija = kopaytrish(4, 8);
    printf("%d",natija);
}