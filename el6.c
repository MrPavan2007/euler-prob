#include <stdio.h>

int main(){
    long long sum1= 0,sum2=0,n=1;
    for(n=1;n<=100;n++){
        sum1+=n*n;
        sum2+=n;
    }
    printf("Sum of squares: %lld\n", sum1);
    printf("Square of sum: %lld\n", sum2*sum2);
    printf("Difference: %lld\n", (sum2*sum2)-sum1);
    return 0;
}