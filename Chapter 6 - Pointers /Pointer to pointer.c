#include<stdio.h>
  
int main(){
    
    int i = 5;
    int *ptr = &i;
    int**pptr = &ptr; // see below comment

    printf("%d\n",**pptr);  // or **(&ptr)

    return 0;
}
