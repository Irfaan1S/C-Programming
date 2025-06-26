#include<stdio.h>
#include<math.h>

int main(){
    
  int x;

  printf("enter a number:");

  scanf("%d",&x);

  printf("%d",x % 2 == 0);  // by operator precedence see priority first % then == 

    return 0;
}
