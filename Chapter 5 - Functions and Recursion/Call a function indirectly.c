#include<stdio.h>

void namaste();
void bonjour();

int main(){

    namaste();
  
    return 0;
}

void namaste(){
    printf("Namaste\n");
    bonjour();
}
void bonjour(){
    printf("Bonjour\n");
}
