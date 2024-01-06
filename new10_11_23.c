//wap to count the nmber of students having age <25
//and weight <50 kg out of five
//test cases
/*Enter the age asd weight of 5 students 
age     weight 
23      51 
24      48
26      50 
24      49
25      55

only 2 of 5 stuents 
*/ 

#include<stdio.h>
int main()
{
    int i ,x, age , weight;
    printf("Enter the age and weigth of 5 students \n");
    printf("age \t weight\n");

    for(i=1;i<=5;i++){
        scanf("%d \t %d",&age,weight);
      
       
    

    }  
    if(age<25&&weight<50){
        x++;
    }
    printf("%d",x);

     //printf("%d\n",age);
    // printf("%d\n",weight);
}