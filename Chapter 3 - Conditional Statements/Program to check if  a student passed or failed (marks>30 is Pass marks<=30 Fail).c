#include<stdio.h>
#include<math.h>

int main(){
    
  int marks;

  printf("enter marks(0-100) : ");

  scanf("%d",&marks);
                              
     if (marks >=0 && marks <= 30) {
         printf ("FAIL \n");
          } 
    else if (marks > 30 && marks <=100){
         printf ("PASS \n");
    }
     else {
        printf ("wrong marks");
     }                                          // or using ternary operator
                                                 //marks<= 30 ? printf("FAIL\n") : printf("PASS\n");

    return 0;
}
