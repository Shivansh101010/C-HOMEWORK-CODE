// #include<stdio.h>
// int main(){
//     int n,max=0,ind=0;
//     printf("Enter the length of the array :");
//     scanf("%d",&n);
//     int a[n],i;
//     printf("Enter the elements of the array: ");
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int j;
//     for(i =0;i<n;i++){
//         int k = 0;
//         for (j=k+1;j<n;j++){
//             if(a[i]>max){
//                 max =a[i];
//                 ind = i;
                
//             }
            
//             k++;
//         }
//     }
//     printf("Max no is : %d\n",max);
//     printf("find on the index : %d",ind);
//     // for(i=0;i<n;i++){
//     //     printf("%d\t",a[i]);
//     // }
    

// }



#include<stdio.h>
int main(){
    int n,max=0,ind=0,max2=0;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the elements of the array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
            ind=i;
            continue;
        }
    }
    max2=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max2&&a[i]<max){
            max2=a[i];
            ind=i;
            //continue;
        }
    }
    printf("The max element is:%d\n",max);
    printf("The second max element is:%d",max2);

    printf("The index of max elemt :%d",ind);
}










