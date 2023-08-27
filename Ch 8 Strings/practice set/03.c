// OWN VERSION OF STRLEN FUNCTION

#include<stdio.h>

void stringlen(char *ptr);

void main(){
    char str[] = "pratham";

    stringlen(str);
}

void stringlen(char *ptr){
    int count = 0;
    int i =0;
    while(ptr[i]!='\0'){
        count++;
        i++;
    }
    printf("The length of the string is : %d",count);
}