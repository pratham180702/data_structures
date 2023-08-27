#include<stdio.h>

void main(){
    int i=16;
    int *j;
    j= &i;
    printf("The value of i is : %d\n", i);
    printf("The address of i is : %u",j);

    printf("\n\n");
    int k = &i;
    printf("Test address of i is %u",k);

    printf("\n\n");
    printf("NOW THE POINTER TO POINTER\n");

    int **l;
    l = &j;
    printf("The address of j is : %u",l); 

    printf("\n\n");
    printf("What if we directly assign the address of j to the variable\n");
    int m = &j;
    printf("Test address of j is %d",m);
}