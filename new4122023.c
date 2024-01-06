#include<stdio.h>
int add (int a,int b,int c);
int sub(int a,int b,int c);
int mul(int a,int b,int c);
int div(int a,int b,int c);
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("");

}

int add(int a,int b, int c){
    c=a+b;
    return c; 
}

int sub(int a,int b,int c){
    c=a-b;
    return c;

}

int mul(int a, int b, int c){
    c= a*b;
    return c;
}

int div(int a, int b,int c){
    c= a/b;
    return c;
}