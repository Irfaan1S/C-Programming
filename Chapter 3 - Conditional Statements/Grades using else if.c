#include<stdio.h>
#include<math.h>

int main(){
    
  int marks;

  printf("enter marks(0-100) : ");

  scanf("%d",&marks);
                              
     if(marks < 30){
          printf("C\n");
     }
     else if(marks >= 30  && marks < 70 ){
          printf("B\n");
     }
     else if(marks >= 70 && marks<90){
          printf("A\n");
     }
     else {
          printf("A+\n");        // here ternary operator cant be used as it has many lines and is not simple
     }

    return 0;
}
