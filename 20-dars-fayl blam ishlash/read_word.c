#include <stdio.h>
#include <string.h>

int main(){
FILE*sher=fopen("sher.txt","r");

if (sher == NULL){
    printf("fayilni ochishda hatolik");
    return 0;
}
char word[50];
while (fscanf(sher,"%s",word)==1){
    printf("%s",word);
}
fclose(sher);

}