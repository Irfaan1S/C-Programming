#include<stdio.h>
#include<math.h>

int main(){
    
    char ch;
    printf("enter character : ");
    scanf("%c",&ch);

    if(ch>=65 && ch<= 90){
      printf("upper case\n");
    }
    else if(ch>=97 && ch <=122){
      printf("lower case \n");
    }
    else {
      printf("not english letter \n");
    }

    return 0;
}
