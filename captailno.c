//wap to to enter the string and change its first letter into captail letter
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100];
    printf("enter the string:");
    scanf("%s",str1);
    int i;
    int l=strlen(str1);
    for(i=0;i<l;i++)
    {
        printf("the ascii number of %c is %d\n",str1[i],str1[i]);
        str1[0]-=32;
        printf("this ascii number %d of %c\n",str1[i],str1[i]);
        if(str1[i]=='\0')
        {
            str1[i+1]-=32;
            printf("this ascii number %d of %c\n",str1[i],str1[i]);
        }
    }
} 