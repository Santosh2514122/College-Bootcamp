#include<stdio.h>
void missingElement(int arr[],int n){
    int diff=arr[0]-0;
    for(int i=0;i<n;i++){
        if(arr[i]-i!=diff){
            while(diff<arr[i]-i){
                printf("%d ",(i+diff));
                diff++;
            }
        }
    }
}
int main(){
    int arr[]={1,2,3,7,8,9,10};
    int n=10;
    missingElement(arr,n);
    return 0;
}