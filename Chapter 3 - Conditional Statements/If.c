#include<stdio.h>
#include<math.h>

int main(){
    
  int age;
  printf("enter age : ");
  scanf("%d",&age);

  if(age>18){            // sirf ye statement true hai ya nahi hai wo check hogi
    printf("adult\n");          
    printf("they can vote\n");  
    printf("they can drive\n");
  }

  printf("thank you");
                                                 
    return 0;
}
