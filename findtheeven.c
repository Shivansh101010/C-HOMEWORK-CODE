#include<stdio.h>
 int main(){
    int num;
    printf("Enter the number to check \n");

    scanf("%d", &num);

    if (num%2 == 0){
        printf("Its Even!!");
    }
    else{
        printf("Its Odd!!");
    }
    
    return 0;

 }