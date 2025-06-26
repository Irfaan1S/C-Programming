#include<stdio.h>

int main(){

    int age1 = 20;
    int age2 = 50;

    int *ptr1 = &age1;
    int *ptr2 = &age2;

    printf("ptr2-ptr1 = %d",(*ptr2)-(*ptr1));

    return 0;
}
