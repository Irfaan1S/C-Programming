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
    printf("My Name is Irfaan\n");  //to do more work without changing the above code in main
}
