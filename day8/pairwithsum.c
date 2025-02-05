#include<stdio.h>
void triplet(int arr[],int n,int x){
    int i,j,k;
    int found=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
           
                if(arr[i]+arr[j]==x)
                printf("%d %d ",arr[i],arr[j]);
                found=1;
            }
            printf("\n");
        }
if(!found){
    printf(" no triplet found");
}
}
int main(){
    int arr[]={2,3,10,3,5,6,7,8};
    int n=8;
    int x=13;
    triplet(arr,n,x);
    return 0;
}