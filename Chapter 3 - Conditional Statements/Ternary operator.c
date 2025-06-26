#include<stdio.h>
#include<math.h>

int main(){
    
  int age;
  printf("enter age : ");
  scanf("%d",&age);

    age >= 18 ? printf("adult\n") : printf("not adult\n");  /*ternary operator it's syntax is 
                                                             condition ? do Something if TRUE : do something if FALSE; 
                                                             instead of using 
                                                              if(age>=18){     
                                                                 printf("adult\n");
                                                                  }  
                                                              else{
                                                                 printf("not adult");
                                                              */
                              
    return 0;
}
