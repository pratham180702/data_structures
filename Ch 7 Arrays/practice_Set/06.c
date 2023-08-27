#include<stdio.h>

void count_positive(int arr[], int size);

void main(){
    int arr[]= {1,2,-3,-5,-6,6,7,-10,6};

    count_positive(arr,9);
    
}

void count_positive(int arr[], int size){
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>=0){
            count++;
        }
    }
    printf("Total number of positive elements in the passed array = %d",count);
}