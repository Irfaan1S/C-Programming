#include<stdio.h>
#include<math.h>

int main(){
    
  int age;
  printf("enter age : ");
  scanf("%d",&age);

  if(age>18){  // if this condition is true all the below 3 statements will execute
    printf("adult\n");          //multiple lines can also be written
    printf("they can vote\n");  
    printf("they can drive\n");
  }
  else{
    printf("not adult\n");
  }

  printf("thank you");  /* will execute in all the cases 
                         as it isnt included in if or else
                         it will execute in any condition*/
                                                 
    return 0;
}
