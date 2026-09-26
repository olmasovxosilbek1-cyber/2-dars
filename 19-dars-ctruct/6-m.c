#include <stdio.h>
struct talaba{
    float math;
    float tarx;
    float kimyo;
};

int main(){
struct talaba toshmat;

toshmat.math=80;
toshmat.tarx=90;
toshmat.kimyo=50;
float ortacha;
ortacha= (toshmat.math+toshmat.tarx+toshmat.tarx)/3;

printf("ortacha:%.2f",ortacha);
}