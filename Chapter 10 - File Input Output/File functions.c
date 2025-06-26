#include<stdio.h>
#include<string.h>

int main(){

  FILE *fptr;
  fptr = fopen("Test.txt","r");
  fclose(fptr);

  return 0;
}
