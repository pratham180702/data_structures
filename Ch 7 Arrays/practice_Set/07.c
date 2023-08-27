#include<stdio.h>

void main(){
    int arr[3][10];
    int arr2[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the number for table %d : ",i+1);
        scanf("%d",&arr2[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j]=arr2[i]*(j+1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", arr2[i],j+1,arr[i][j]);
        }
        printf("\nNEXT TABLE\n\n");
    }
    
}