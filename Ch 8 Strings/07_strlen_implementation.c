#include<stdio.h>

void stlen(char *ptr);

void main(){
    printf("Enter a string : ");
    char arr[200];
    char *ptr = arr;
    gets(arr);
    stlen(arr);
}

void stlen(char *ptr){
    int count = 0;
    while(*ptr!='\0'){
        ptr++;
        count++;
    }
    printf("The length of the entered string is : %d",count);
}