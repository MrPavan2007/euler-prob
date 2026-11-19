#include <stdio.h>

int main(){
    long long n,ans;
    n=1;
    while(1){
    
    // printf("%lld\n",n);
    if(n%1==0 && n%2==0 && n%3==0 && n%4==0 && n%5==0 && n%6==0 && n%7==0 && n%8==0 && n%9==0 && n%10==0 && n%11==0 && n%12==0 && n%13==0 && n%14==0 && n%15==0 && n%16==0 && n%17==0 && n%18==0 && n%19==0 && n%20==0)
    {
        ans=n;
        break;
    }
    else{
        n++;
    }
}
    printf("%lld",ans);
    return 0;
}

