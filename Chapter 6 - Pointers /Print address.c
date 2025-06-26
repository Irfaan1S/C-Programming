#include<stdio.h>
  
int main(){
    
    int age = 22;
    int*ptr = &age;

    printf("%p\n",&age);
    printf("%u\n",&age);   // age ka adress ptr ke ander store hai

    printf("%u\n",ptr);

    printf("%u\n",&ptr);
    return 0;
}
