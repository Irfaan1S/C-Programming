#include<stdio.h>
#include<math.h>

int main(){
    
   int a=1;
   int b=4;

   a = a * b;
   printf("%d\n",a);

   int c=1;           
   c*=b;        // same as c = c * b
   printf("%d\n",c);

    return 0;
}
