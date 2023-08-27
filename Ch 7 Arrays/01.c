#include<stdio.h>

void main(){
    int arr[5];
    for(int i=0; i<5; i++){
        printf("Enter marks %d : ", i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n The marks you entered are : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Marks of student %d = %d\n",i+1, arr[i]);
    }
    

}