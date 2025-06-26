#include<stdio.h>
#include<string.h>

int main(){
  
   char firstStr[100] = "Hello ";
   char secStr[] = "world";

   strcat(firstStr,secStr);
   puts(firstStr);

   return 0;
}
