#include<stdio.h>

void main(){

    int a = 5;
    int b = 10;
    int c = 16;

    int *ptr1 = &a;
    int *ptr2 = &c;

    printf("The address of a is : %u\n",ptr1);
    printf("The address of b is : %u\n",ptr2);

    int k = ptr1-ptr2;
    
    int *m = ptr1+1;

    printf("the summation of ptr1 and ptr2 is : %d\n",k);
    printf("the value of ptr++ is : %u",m);

}

