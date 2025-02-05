#include<stdio.h>
int rangeXOR(int left,int right){
int result=0;
for(int i=left;i<=right;i++){
    result=result^i;
}
return result;
}
int main(){
    int left=4,right=8;
    printf("%d ",rangeXOR(left,right));
    return 0;
}