#include<stdio.h>

//declaration or function prototype
void printHello();   
 
int main(){

    printHello();   // function call
    printHello();
    printHello();
    
    return 0;
}

//function definition

void printHello(){

    printf("Hello!\n");
}
