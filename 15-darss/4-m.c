#include <stdio.h>
int main (){
    int sonlar[3][8]{
          { 2 , 5 , 6, 7, 8, 4,9,2},
        { 12 ,10,11 , 13 ,14,15,16,17,18}, 
        { 21,22,23,24,25,26,27,28,}
        };
    int eng_katta;
    int kattalr[3];
    for(int i=0;i<3;i++){
        eng_katta  =  sonlar[i][0];
        for(int j=0;j<8;j++){
            printf("%d",sonlar [i][j]);
            if (sonlar[i][j]>eng_katta){
                eng_katta=sonlar[i][j];
            }
        }
        printf("katta=%d\n",eng_katta);
        kattalr[i]=eng_katta;
    }
    for(int i=0;i<3;i++){
        printf("%d",kattalr[i]);
    }
    
}