#include <stdio.h>
//javob qaytarmaydigan funksiya
void salomlashish(){
    printf("hammaga salom\n");

}

//javob qaytaradigan funksiya
int kalkulyator (int a,int b,char amal){
    switch(amal){
        case'+': return a+b;
        case'-':return a-b;
        case'*':return a*b;
    }

}

int main(){
    salomlashish();
    int natija = kalkulyator(4, 8, '*');
    printf("%d",natija);
}
