//sum of n th terms
#include<stdio.h>
 int fibonacci(int n){
    int res;
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 1;
    }
    else 
     res=(fibonacci(n-1)+fibonacci(n-2));
    return res;
 }
 int main()
 {
    int n,i;
    printf("enter number :");
    scanf("%d",&n);
    
    {
        printf(" %d ",fibonacci(i));
    }
}