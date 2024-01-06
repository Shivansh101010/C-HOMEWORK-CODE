#include<stdio.h>
   
    float div(float ,float);
int main(){

    // int add(int ,int);
    // int sub(int ,int);
    // int mul(int ,int);
    // float div(int ,int);

    int a,b,c;
    printf("Enter two numbers : ");

    scanf("%d %d",&a,&b);

    printf("\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
    printf("Enter the choice : ");
    int ch;
    scanf("%d",&ch);
    switch(ch){
        case 1:
        c=add(a,b);
        printf("Sum=%d",c);
        break;

        case 2:
        c=sub(a,b);
        printf("Subtraction = %d",c);
        break;

        case 3:
        c=mul(a,b);
        printf("multiply=%d",c);
        break;

        case 4:
        if(b==0)
        printf("INfiNIty");
        else{
            float c=div(a,b);
            printf("div=%f",c);

        }
        break;

        default:
        printf("enter correct choice");

    }

    return 0;
    
}

int add(int x,int y){
    int z=x+y;
    return z;

}

int sub(int x,int y){
    int z=x-y;
    return z;
}
int mul(int x,int y){
    int z=x*y;
    return z;
}

float div(float x,float y){
    float z=x/y;
    return z;
}
