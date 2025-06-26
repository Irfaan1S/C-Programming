#include<stdio.h>

void namaste();
void bonjour();

int main(){

    printf("enter f for french & i for Indian : ");

    char ch;
    scanf("%c",&ch);

    if(ch=='i'){
        namaste();
    }
    else {               // or write else if(ch == 'f')
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}
