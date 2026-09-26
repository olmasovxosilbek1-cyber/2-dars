#include <stdio.h>

int main(){
    FILE *sonlar = fopen("sonlar.txt","r");

    if (sonlar == NULL){
        printf("fayilni oqihda muammo yoq");
        return 0;
    }
    int son,yigindi=0,juft=0;

    while (fscanf(sonlar,"%d",&son)==1){
        printf("%d",son);
        yigindi += son;
        if (son %2 == 0){
            juft++;
        }
    }
    printf("\n jami sonlar yigindisi %d\n",yigindi);
    printf("juft sonlar soni:%d\n",juft);

    fclose(sonlar);
}