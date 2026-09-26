#include <stdio.h>
int main(){
    int partalar[3][8]={
        { 2 , 5 , 6, 7, 8, 4,9,2 },
        { 12 ,10,11 , 13 ,14,15,16,17,18},
        { 21,22,23,24,25,26,27,28,}
    };
    int qator_yigindilari[3]={0,0,0};
    int ustun_yigindilari[8]={0,0,0,0,0,0,0,0};

    for(int i=0;i<3;i++){
        for (int j=0;j<8;j++){
            printf("%d", partalar [i][j]);
            qator_yigindilari[i] += partalar [i] [j];

            ustun_yigindilari[j] += partalar [i] [j];
        }
        printf("\n");
    }
    for(int i=0; i<3;i++){
        printf("%d-qator yigindisi:%d\n",i,qator_yigindilari[i]);

    }
    for (int i=0;i<8;i++){
        printf("%d",ustun_yigindilari[i]);
    }
    
}