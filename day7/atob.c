#include<stdio.h>
int main(){
    int a=10;
    int b=6;
    int res=a^b;
     printf("result=%d",res);
    int count=0;
    while(res!=0){
        if(res%2!=0)
        count++;
        res=res/2;
    }
    printf("\ncountsetbit=%d",count);

    return 0;
}