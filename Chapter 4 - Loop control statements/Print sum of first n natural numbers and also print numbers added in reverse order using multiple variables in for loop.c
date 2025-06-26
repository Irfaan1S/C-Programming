#include<stdio.h>

int main(){
   
   int n;
   printf("enter number : ");

   scanf("%d",&n);

   int sum = 0;
   for(int i=1,j=n;i<=n && j>=1;i++,j--){     /*for(int j=n;j>=1;j--){
                                                printf("%d\n",j);
                                                }*/
    sum = sum + i;  // sum+=i
    printf("%d\n",j);
   }
   
   printf("Sum is %d",sum);

    return 0;
}
