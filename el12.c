// #include <stdio.h>

// int main(){
//     int check=0,count;
//     long long n=1;
//     while (1){
//         long long triangle =n*(n+1) / 2;
//         count=0;
//         for(int i=1;i<triangle;i++){
//             if(triangle%i==0){
//                 count++;
//             }
    
//     }
//     if(count>5){
//         printf("The number is %lld",triangle);
//         break;
//     }
//   n++;
//     }

//     return 0;
// }

/*Right now in the for loop you are checking for every i, 
whether triangle is completely divisible by i. 
But you don't have to check for every i. Once you find out m,n are factors, 
you can store m,n, m×n, 2×m×n, 3×m×n, etc in an array and count them.*/

#include <stdio.h>
int countdivisor(int n){
    int count=0;
    for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
}
return count;
}

int main()
{
    int check=0,count;
    long long n=500,a,b;
    while (1){
        long long triangle =n*(n+1) / 2;
        if(n%2==0){
            a=n/2;
            b=n+1;
        }
        else{
            a=(n+1)/2;
            b=n;
        }
        count= countdivisor(a)*countdivisor(b);
    if(count>500){
        printf("The number is %lld",triangle);
        break;
    }
  n++;  
    }

    return 0;
}
