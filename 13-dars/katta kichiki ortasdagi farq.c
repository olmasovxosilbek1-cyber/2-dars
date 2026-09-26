 #include <stdio.h>

 int main (){

 int n;
 printf("nchta son kerak:");
 scanf ("%d",&n);
 int sonlar [n];
     for (int i=0; i<=n;i++){
         printf("%d - son:",i);
         scanf("%d",&sonlar[i]);
     }

     int katta=sonlar[0];
     int kichik=sonlar[0];
     for(int i=0;i<=n;i++){
        if(sonlar[i]>katta){
         katta = sonlar[i];
        }
     }


 if(sonlar[n]<kichik){
     kichik = sonlar[n];
 }
 printf("eng kichik son: %d\n",katta);
 printf("eng katta  son: %d\n",kichik);
 printf ("orasidgi faq:%d",katta - kichik);
}