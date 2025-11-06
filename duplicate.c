#include<stdio.h>
int main(){
    int arr[11]={6,1,7,3,2,5,4,8,9,9,10};
    int sum=0;
    int n=10*11/2;
    for(int i=0;i<11;i++){
       sum+=arr[i];
    }
    printf("the sum is:%d\n",sum);
    printf("sum:%d\n",n);
    printf("the duplicate num is:%d\n",sum-n);
    
    return 0;
}