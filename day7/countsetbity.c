#include<stdio.h>
int countSet(int n){
    int count=0;
    while(n!=0){
        if(n%2!=0)
        count++;
        n=n/2;
    }
    return count;
}
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
   printf(" %d", countSet(n));
    return 0;
}