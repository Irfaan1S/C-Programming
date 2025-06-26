#include<stdio.h>
#include<string.h>

int main(){

  FILE *fptr;
  fptr = fopen("Test.txt","r");
  
  printf("%c\n",fgetc(fptr));
  printf("%c\n",fgetc(fptr));
  printf("%c\n",fgetc(fptr));
  printf("%c\n",fgetc(fptr));
  printf("%c\n",fgetc(fptr));

  fclose(fptr);

  return 0;
}
