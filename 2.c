#include<stdio.h>
void main(){
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    if(num1==0){
        printf("Zero");
    }
    else if(num1%2==0){
        if(num1>0){
            printf("positive even");
        }
        else if(num1<0){
            printf("negative even");
        }
    }
    else if(num1%2!=0){
        if(num1>0){
            printf("positive odd");
        }
        else if(num1<0){
            printf("negative odd");
        }
    }
}
