//wap to add 10 consicutive numbers starting from 1 by using while loop

#include<stdio.h>
int main(){
    int i = 1,sum =0;
    while (i<=10){
        sum+=i;
        i++;

    }
    printf("%d",sum);
    printf("\n"); 
}