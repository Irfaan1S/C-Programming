#include<stdio.h>
  
int main(){
    
    int age = 22;
    int*ptr = &age;

    printf("%d\n",age);   // value of age

    printf("%d\n",*ptr);  // value at address stored in ptr

    printf("%u\n",*(&age)); //value at adress (address of age) 

    return 0;
}
