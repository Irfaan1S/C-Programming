#include<stdio.h>
  
void square(int n);
void _square(int* n); //using pointer

int main(){
    
    int number = 4;

    square(number);
    printf("number = %d\n",number);
    
    _square(&number);
    printf("number = %d\n",number); // we directly changed 4 to 16 in address
    return 0;
}
// call by value
void square(int n){
    n = n * n;
    printf("square = %d\n",n);
}
//call by reference
void _square(int* n){
    *n =(*n) * (*n);  // 4 * 4  // jo bhi changes honge wo address ke ander honge
    printf("square = %d\n",*n);
}
