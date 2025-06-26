#include<stdio.h>
#include<string.h>

int main(){

  FILE *fptr;
  fptr = fopen("Test.txt","r");
  
  int ch;
  fscanf(fptr,"%d",&ch);
  printf("character = %d\n",ch);
  
  fscanf(fptr,"%d",&ch);
  printf("character = %d\n",ch);

  fscanf(fptr,"%d",&ch);
  printf("character = %d\n",ch);

  fclose(fptr);

  return 0;
}
