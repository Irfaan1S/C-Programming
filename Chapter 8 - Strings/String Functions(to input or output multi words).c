#include<stdio.h>

int main(){
   
   char str[100];
   gets(str); // dangerous and outdated
   fgets(str,100,stdin);
   puts(str);

   return 0;
}
