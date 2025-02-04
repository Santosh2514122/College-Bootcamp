//check number positive or negative
 #include<stdio.h>
 int main()
 {
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>0)
    {
       printf("positive number:\n"); 
    }
    else if(n<0)
    {
        printf("negative number:\n");
    }
    else
    printf("zero:\n");
}
//enter the number:5
//positive number: