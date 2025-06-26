#include<stdio.h>
#include<math.h>

int main(){
     
    int a=4+9*10; //operator precedence

    int b = 4*3 / 6*2 ;  //associativity (for same precedence) is left to right in the equation

    printf("%d\n",a);

    printf("%d\n",b);
 
    return 0;
}
