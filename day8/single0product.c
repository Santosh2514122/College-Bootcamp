#include<stdio.h>
void product(int arr[],int n,int res[]){
    for(int i=0;i<n;i++){
    res[i]=1;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if((i !=j)!=0){
            res[i]*= arr[j]; 
        }
    }
}
}
int main(){
    int arr[]={1,0,3,4};
    int n=4;
    int res[n];
    product(arr,n,res);
    for(int i=0;i<n;i++){
        printf("%d ",res[i]);
    }
    return 0;
}