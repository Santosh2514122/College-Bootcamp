#include<stdio.h>
 int fibonacci(int n){
    int res;
    if(n==0){
        return 0;
    }
    else if(n==1){
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
    for( int i=0;i<=n;i++)
    {
        printf(" %d ",fibonacci(i));
    }
}
// enter number :5
 //0  1  1  2  3  5 