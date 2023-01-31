#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        sum=sum+i*i;
    }
    printf("sum is %d",sum);
}