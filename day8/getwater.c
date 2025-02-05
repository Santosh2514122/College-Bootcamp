#include<stdio.h>
int getWater(int arr[],int n){
    int res=0;
    int lmax[n];
    int rmax[n];
    lmax[0]=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>rmax[i+1])
        printf("%d ",lmax[i]);
        rmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        if(arr[i]>rmax[i+1])
        printf("%d",rmax[i]);
    }
    for(int i=1;i<n-1;i++){
        if(lmax[i]<rmax[i]-arr[i]){
        res=res+lmax[i];
        }
    }
    return 0;
}
int main(){
    int arr[]={5,0,6,2,3};
    int n=5;
    printf("%d",getWater(arr,n));
}