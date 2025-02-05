#include<stdio.h>
int main(){
    int n,k;
    printf("enter number :");
    scanf("%d",&n);
    printf("enter k value:");
    scanf("%d",&k);
    if((n&(1<<(k-1)))==1)
    printf("yes,is set bit");
    else
    printf("no, it is not set bit");
    return 0;
        }