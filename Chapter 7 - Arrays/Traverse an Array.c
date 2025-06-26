#include<stdio.h>

int main(){

    int aadhar[5];

    //input 
    int *ptr = &aadhar[0];  // here,pointer points at first memory location

    for(int i=0;i<5;i++){
        printf("%d index : ",i); // konse index ki value chahiye for i = 0 then i = 1 and so on
        scanf("%d",(ptr+i));     //address de denge pointer + i ka
    }                            /*pointer 0th inex ko point kar raha he par jese hi usme + i hota rahe ga,
                                 agar + 1 to first position pe aa jayega,+ 2 second position and so on*/
   
    //output
    for(int i = 0;i<5;i++){
        printf("%d index = %d\n",i,*(ptr+i));  // *(ptr + i) to print value of the specific position of the array or we can use aadhar[i]
    }
    return 0;
}
