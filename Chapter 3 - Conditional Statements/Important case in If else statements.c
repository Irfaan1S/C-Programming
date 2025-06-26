#include<stdio.h>
#include<math.h>

int main(){

  int x=2;

  if (x=1){                    // to check x is equal to 1 use == not = as '=' is an assignment operator so the value of x is changed to 1 from 2
    printf("x is equal to 1\n"); // as 1 is a non zero number so compiler takes it as true so "if" condition executes 
    printf("%d\n",x);
  }
  else {
    printf("x is not equal to 1");
  }
// 
  if (x=0)
  {
    printf("x is equal to 0\n");
    printf ("%d\n",x);
  }
  else {
    printf("x is not equal to 0"); // this statement executes, as 0 means false so "if" condition doesn't execute 
    printf ("%d\n",x);    
  }
  
    return 0;
}
