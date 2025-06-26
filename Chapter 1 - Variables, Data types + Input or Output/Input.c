#include<stdio.h>

int main(){
 
   int age;
   printf("enter age");
   
   scanf("%d",&age);    /*age ko enter kiya aur memory ke andar age variable 
                         jis bhi location par point kar raha tha vaha par  
                          jake hamne age ko store karadiya*/

   printf("age is : %d",age); //printf ne number vapas maanga toh uske baad hamara print hogaya age is:

    return 0;
}
