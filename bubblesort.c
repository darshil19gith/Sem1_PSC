#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5]={2,1,5,9,3};
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]); 
    }
    //bubble sort
   int i,j,n;
    for(i=0;i<5;i++){
        bool flag=true;// array is not sorted yet
        for(j=0;j<5;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag =false;
            }
        }
        if(flag==true) break;
    }
    printf("\n");
     for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}