#include<stdio.h>

int main(){
   
   int n;

   do{
      printf("enter number : ");
      scanf("%d",&n);
      printf("%d\n",n);

      if(n%7 == 0){
         break;
      }
   }
   while(1);   // 1 means true

   printf("thank you\n");

    return 0;
}
