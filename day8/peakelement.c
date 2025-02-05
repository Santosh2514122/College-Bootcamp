#include<stdio.h>
void peakEle(int arr[],int n){
    for(int i=0;i<n;i++){
        if((i>0&& arr[i]>arr[i-1])&&(i<n-1&&arr[i]>arr[i+1]))
        printf("%d ",arr[i]);
    }
    return;
}
int main(){
    int arr[]={1,2,7,4,6,5,3};
    int n=7;
    peakEle(arr,n);
    return 0;
}