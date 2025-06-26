#include<stdio.h>

int countOdd(int arr[],int n);

int main(){
    
    int arr[]={1,2,3,4,5,6};

    printf("%d",countOdd(arr,6));

    return 0;
}
int countOdd(int arr[],int n){

    int count = 0;

    for(int i=0;i<n;i++){       // to traverse the array
       if(arr[i] % 2 != 0){    //odd
        count++;               //increase value of count by 1
       }
    }
    
    return count;       
}
// similarly,we can also make a function to calculate number of even numbers,multiples of 3,multiples of 5 etc
