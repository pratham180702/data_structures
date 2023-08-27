#include<stdio.h>

void main(){
    int arr[2]={2,3};
    int b = 5;
    int *i = &arr[0];
    // int *k = &arr[1];
    int *j =  &b;
    printf("The starting address of the array 0 is : %u\n",i);
    //  printf("The starting address of the array 1 is : %u\n",k);
    printf("The starting address of the variable b is : %u", j);
}