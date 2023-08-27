#include<stdio.h>
#include<string.h>

void main(){
    char *ptr = "Pratham";
    char str[30];
    char *ptr2 = str;
    printf("Entered in the main function\n");
    strcpy(ptr2,ptr);
    printf("exited from the strcpy function\n");
    printf("The value of ptr2 is : ");
    puts(ptr2);
}