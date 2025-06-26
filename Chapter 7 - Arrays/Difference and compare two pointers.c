#include<stdio.h>

int main(){

    int age = 22;
    int _age = 24;

    int *ptr  = &age;
    int *_ptr = &_age;

    printf("%u,%u difference = %u\n",ptr,_ptr,ptr - _ptr); // difference he ek integer ka(4 bytes)

    _ptr = &age; //_ptr stores same address as ptr 
    printf("comparison = %u\n",ptr == _ptr);  // true as both points to the same address


    return 0;
}
