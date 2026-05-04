#include <stdio.h>
#include <stdbool.h>

int main()
{
   int N;
   bool found = false;
   
   scanf ("%d", &N);
   
   for (int a = 1; 900*a<=N; a++){
       for (int b = 2; 750*b<=N; b+=2){
           for (int c = 1; 200*c<=N; c++){
               if ((900*a+750*b+200*c==N) && (c<a||c<b)){
                   printf("%d %d %d \n",a,b,c);
                   found = true;
               }
           }
       } 
   }
    if (found == false) {
        printf("none\n");
    }
    return 0;
}
