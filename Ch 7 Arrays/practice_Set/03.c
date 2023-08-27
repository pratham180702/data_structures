#include<stdio.h>

void main(){
    int arr[10];
    int num;
    printf("Enter the number for which you want to find the table : ");
    scanf("%d",&num);


    for(int i=0; i<10; i++){
        arr[i]=num*(i+1);
    }
    printf("Now the value of array is : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n",num,i+1,arr[i]);
    }
    
}