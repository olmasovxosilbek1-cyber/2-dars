#include <stdio.h>
void ascii_table(){
    for (int belgi=0;belgi<=127;belgi++){
        printf("%d -> %c\n",belgi,belgi);
    }
}
int main(){
ascii_table();
}