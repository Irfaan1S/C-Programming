#include<stdio.h>
  
void printAddress(int n);

int main(){
    
    int n = 4;
    
    printf("address of n is : %u\n",&n);

    printAddress(n);
   
    return 0;
} 
void printAddress(int n){
    printf("address of n is : %u\n",&n);
}
// in call by value both the address can never be same as they make copies of variable which have different adress
// if we use call by reference then the outputs or adress will be same for same variable
