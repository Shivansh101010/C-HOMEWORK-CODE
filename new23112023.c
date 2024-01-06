#include<stdio.h>
#include<string.h>

// int main(){
//     char a[100];
//     printf("enter the string\n");
//     scanf("%s",a);
//     printf("The string is %s\n",a);
//     printf("Enter the string\n");
//     gets(a);
//     printf("the string is %s\n",a);
//     printf("enter the string\n");
//     scanf("%[^\n]s",a);
//     printf("The string is %s\n",a);
//     return 0;

// }





// int main(){
//     char a[100];
//     printf("Enter the string");
//     scanf("%[^\n]s",a);
//     int l=strlen(a);
//     int vow=0,con=0;
//     for(int i=0;i<l;i++){
//         if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
//             vow++;
//         }
//         else{
//             con++;
//         }

//     }
//     printf("the no of vowels are : %d\n",vow);
//     printf("the no of consonent are : %d",con);

// }





// void main(){
//     char a[100];
//     printf("Enter the string ");
//     scanf("%[^\n]s",a);
//     int l=0;
//     for (int i=0;;i++){
//         if(a[i]=='\0'){
//             break;

//         }
//         else{
//             l++;
//         }
//     }
//     printf("The lenght of sring : %d",l);
// }


#include<stdio.h>
#include<stdio.h>
void main(){
    char a[100],b[100];
    printf("enter the string");
    scanf("%[^\n]s",a);
    int l=strlen(a);
    for(int i =0;i<l;i++){
        b[i]=a[i];

    }
    printf("The copied string is = %s",b);
}