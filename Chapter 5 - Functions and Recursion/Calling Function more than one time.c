#include<stdio.h>

//declaration or function prototype
void printHello();   
 
int main(){

    for(int i=1;i<=3;i++){
        printHello();
    }
    return 0;
}

//function definition

void printHello(){

    printf("Hello!\n");
}
