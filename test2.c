#include<stdio.h>
int main(){
    int i ,x,y;

    printf("enter a number : ");
    scanf("%d",&x);

    for (i = 1;i<=20;i++){
        y = x*i;
        printf("%d\n",i);
    }
}