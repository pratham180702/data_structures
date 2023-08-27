#include<stdio.h>
#include <stdbool.h>

void main(){
    int a = 5;
    int b = 9;
    int *i=&a, *j=&a;

    printf("The address of a is : %u\n",i);
    printf("The address of b is : %u\n",j);

    
    if(i==j)
        printf("\n both values are equal\n");
    else
        printf("both values are different");

}