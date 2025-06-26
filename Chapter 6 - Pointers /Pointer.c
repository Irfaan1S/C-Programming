#include<stdio.h>
  
int main(){
    
    int age = 22;
    int*ptr = &age;   //pointer stores memory address of age variable
    int _age = *ptr;  // to access the value stored at the adress in pointer
    
    printf("%d",_age);
    
    return 0;
}
