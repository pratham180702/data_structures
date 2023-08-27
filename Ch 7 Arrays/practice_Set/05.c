// reverses the array

#include<stdio.h>

void reverse_array(int arr[], int size);

void main(){
    int arr[]= {1,2,3,4,5};
    printf("Array before passing it to the reverse conversion function\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }

    reverse_array(arr,5);

    printf("Now the array after passing it to reverse conversion function \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

void reverse_array(int arr[], int size){
    int temp;

    for (int i = 0; i < (size/2); i++)
    {
        temp = arr[i];
        arr[i]= arr[size-i-1];
        arr[size-i-1] = temp;
    }
    
    
}