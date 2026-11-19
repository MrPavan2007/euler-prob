#include <stdio.h>

int main(){
int n1=1,n2=2,n=0,sum=0;
while( n<=4000000)
{
n=n1+n2;
if(n%2==0){
 sum+=n;}
n1=n2;
n2=n;

}
sum=sum+2;
printf("%d",sum);
return 0;
}