#include<stdio.h>
#include<string.h>

void main(){
    char str[] = "Pratham";
    char *ptr = "Rahul";
    int length = strlen(str);
    int length2 = strlen(ptr);
    printf("\nThe length of the str array is : %d", length);
    printf("\nThe length of the str array is : %d", length2);
}