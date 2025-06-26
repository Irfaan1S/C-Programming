#include<stdio.h>

int main(){

    int marks[] = {98,94,85};

    int *ptr = &marks[0];
    int *pointer = marks;
    
    // array is a pointer
    printf("%d\n",*ptr);  
    printf("%d\n",*pointer);

    return 0;
}
