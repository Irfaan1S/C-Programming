#include<stdio.h>

int main() {
    
    int i=1;
    
    printf("%d\n",i--);  // Decrease, then use
    printf("%d\n",i);    // stored value of i after i--

    return 0;
}
