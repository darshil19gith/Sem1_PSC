#include<stdio.h>
#include<limits.h>
int main(){
    int a[5]={5,3,6,9,1};
    
    printf("unsorted array:");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    
    for(int i=0;i<5;i++){
     int min=INT_MAX;
    int minidx=-1;
       for(int j=i;j<5;j++){
        if(min>a[j]){
            min=a[j];
            minidx=j;
        }
       }
       int temp=a[minidx];
       a[minidx]=a[i];
       a[i]=temp;
    }
    printf("\nsorted array:");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
     
    }
    return 0;
}