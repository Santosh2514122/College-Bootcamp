#include<stdio.h>
int maxProfit(int price[],int n){
    int profit=0;
    for(int i=0;i<n;i++){
        if(price[i]>price[i-1])
        profit+=price[i]-price[i-1];
    }
    return profit;
}
int main(){
    int price[]={7,1,5,3,6,4},n=6;
    printf("%d ",maxProfit(price,n));
    return 0;
}