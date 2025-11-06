#include<stdio.h>
int main(){
    int arr[5]={1,5,3,0,2};
    for(int i=1;i<5;i++){
        int j=i;
        while(arr[j]<arr[j-1]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    printf("inserted array:");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}