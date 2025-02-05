#include<stdio.h>
void Sort(int arr[],int n){
 int i=-1,j=n;
 while(1){
    do{
        i++;
    }
    while(arr[i]<0);
    do{
        j--;
    }
    while(arr[j]>=0);
    if(i>=j)
    return ;
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
 }   
}
int main(){
    int arr[]={-3,-5,3,5};
    int n=4;
    Sort(arr,n);
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}