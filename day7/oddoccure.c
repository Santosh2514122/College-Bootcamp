#include<stdio.h>
int oddapp(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count%2!=0)
        return arr[i];
    }
    return 0;
}
int main(){
    int arr[]={4,5,5,3,3,4,4,4,3},n=9;
   printf("%d",oddapp(arr,n));
    return 0;
}