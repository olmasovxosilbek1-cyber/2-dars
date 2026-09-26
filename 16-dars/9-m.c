#include <stdio.h>
#include <string.h>

int main(){

    char matn[200];

    printf("Matn kiriting:");
    fgets(matn, sizeof(matn), stdin);
    int count = 0;
    for (int i = 0; matn[i] != '\n';i++){
        if(matn[i] >=65 && matn[i]<=90){
            matn[i] += 32;
        }else if(matn[i] >= 'a' && matn[i] <='z'){
            matn[i] -= 32;
        }
    }
    printf("Natija: %s", matn);
    return 0;
}