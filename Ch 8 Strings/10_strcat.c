#include<stdio.h>
#include<string.h>

void main(){
    char arr1[] = "Pratham";
    char arr2[] = "Kakkad";

    strcat(arr1, arr2);
    puts(arr1);
    printf("\n and the value of array 2 is : \n");
    puts(arr2);
    
}