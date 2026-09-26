#include <stdio.h>
#include <string.h>

struct mahsulot {
  int narx;
  int miqdori;

};
int main(){
    struct mahsulot olma;
       int narx;
    int miqdori;

   
    olma.narx=25;
    olma.miqdori=4;

    printf(" %d-narx,%d-miqdori",olma.narx,olma.miqdori);
    
}
