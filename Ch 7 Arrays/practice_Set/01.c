#include<stdio.h>

void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    ptr=ptr+2;
    printf("Testing print of ptr = %u",ptr);
    printf("\nTesting print of ptr value = %d",*ptr);
}