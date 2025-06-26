#include<stdio.h>
#include<string.h>

int main(){

  FILE *fptr;
  fptr = fopen("NewTest.txt","w");
  if(fptr==NULL){
    printf("File doesn't exist\n");
  }
  else{
     fclose(fptr);
  }

  return 0;
}
