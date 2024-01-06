//program to calculate area and perimeter of circle , square and rectangle based on users choice
#include<stdio.h>
int main(){
    float c;//radius
    float s;//side 
    float l,w;//length and width
    char ch;

    printf("Enter the object you want to claculate : cicrcle / square/ rectangle :");
    scanf("%c",&ch);
    if(ch=='c'){
        printf("Enter the radius of the circle : ");
        scanf("%f",&c);
        printf("Area of the circle is %f\n", 3.14*c*c);
        printf("Perimeter of the circle is %f\n",2*3.14*c);

    }
    else if(ch == 's'){
        printf("Enter the side  of the square : ");
        scanf("%f",&s);
        printf("Area of the square is %f\n", s*s);
        printf("Perimeter of the circle is %f\n",4*s);

    }
    else if(ch == 'r'){
        printf("Enter the length of the rectangle : ");
        scanf("%f",&l);
        printf("enter the width of the rectangle :");
        scanf("%f",&w);
        printf("Area of the rectangle is %f\n",l*w);
        printf("Perimeter of the rectangle is %f\n",2*l+w);


    }
    return 0;

    

    

}
