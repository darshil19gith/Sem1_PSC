#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[7]={1,2,3,4,5};
    int x=4;
   
    bool flag=false;//false means not present
    for(int i=0;i<7;i++){
        if(a[i]==x){
             flag=true;//true means present
            break;
        }
    }
    if(flag=true){
        printf("%d is present in the array ",x);
    }
    else{
        printf("%d is not present im the array",x);
    }
    return 0;
} 