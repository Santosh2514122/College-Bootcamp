#include<stdio.h>
void triplet(int arr[],int n,int x){
    int i,j,k;
    int found=0;
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x)
                printf("%d %d %d",arr[i],arr[j],arr[k]);
                found=1;
            }
            printf("\n");
        }
    }
if(!found){
    printf(" no triplet found");
}
}
int main(){
    int arr[]={2,3,5,3,5,6,7,8};
    int n=8;
    int x=13;
    triplet(arr,n,x);
    return 0;
}