#include <stdio.h>

int main()
{
    int i, j, count,no=0,ans,n=0;

    for(i = 2; i <= 10000000; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {         
        

            printf("%d=",++n);
            printf("%d ", i);
            if(n==10001){
                ans=i;
                break;
            }
        }
    }
printf("\nThe final answer is %d",ans);
    return 0;
}