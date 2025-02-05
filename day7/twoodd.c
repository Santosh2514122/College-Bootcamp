#include<stdio.h>
void oddapp(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count%2!=0)
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={3,3,4,4,5,5,4,4,8,7},n=10;
   oddapp(arr,n);
    return 0;
}