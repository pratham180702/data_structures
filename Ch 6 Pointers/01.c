#include<stdio.h>

void main(){
    int *ptr;
    int a = 10;
    ptr = &a;
    printf("The value of a is : %d\n", a);
    printf("The address of a is : %u",ptr);

    // NOW FOR THE CHARACTERS
    char b = 'c';
    char *ptr2;
    ptr2 = &b;
    printf("\nThe value of b is : %c\n", b);
    printf("The address of b is : %u\n",ptr2);

    printf("What if i store the char variable in the int pointer!\n");
    char *ptr3;
    char c = 'x';
    ptr3 = &c;
    printf("The character is : %c", *ptr3);
    printf("\n and the address of the char is : %u",ptr3);

}