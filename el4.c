#include <stdio.h>
int ifpal(long long p){
    long long n,original,rem,rev=0;
    n=p;
    original= p;
while(n>0){
    rem=n%10;
    rev=rev*10 +rem;
    n=n/10;
}
if (original==rev){
    return 1;
}
else{
    return 0;
}
}

int main(){
long long product=0,max=0;
int i,j;

for(i=100;i<=999;i++){
    for(j=100;j<=999;j++){
product=i*j;
if(ifpal(product)==1 && product>max){
    max=product;
}

    }
}
printf("%lld",max);

    return 0;
}