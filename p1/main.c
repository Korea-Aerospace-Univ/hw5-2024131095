#include <stdio.h>

int main()
{
   int N;
   int found = 0;
   
   scanf ("%d", &N);
   
   for (int a = 1; 900*a<=N; a++){
       for (int b = 1; 750*b<=N; b++){
           for (int c = 1; 200*c<=N; c++){
               if ((900*a+750*b+200*c==N) && (b%2==0) && (c<a||c<b)){
                   printf("%d %d %d \n",a,b,c);
                   found = 1;
               }
           }
       } 
   }
    if (found == 0) {
        printf("none\n");
    }
    return 0;
}
