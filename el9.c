#include <stdio.h>

int main(){
    int i,j,k;
    for( i=1;i<=1000;i++){
        for( j=1;j<=1000;j++){
            for( k=1;k<=1000;k++){
                long long a1=(i*i) + (j*j)- (k*k);
                if(a1==0 && i<k && j<k && i<j && i+j+k==1000){
                    printf(" %d %d %d \n",i,j,k);
                    printf("product=%lld\n",i*j*k);
                }
            }
        }
    }
    return 0;
}