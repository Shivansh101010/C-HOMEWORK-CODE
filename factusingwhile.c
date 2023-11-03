//wap to calculate the factorial of a given number using while loop

#include<stdio.h>
int main(){
    int x ,i=1,fact =1;

    printf("Enter a number : ");
    scanf("%d",&x);

    while(i<=x){
        fact*=i;
        i++;
    }
    printf("%d",fact);
}