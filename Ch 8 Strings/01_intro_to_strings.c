#include<stdio.h>

void main(){
    char str[] = {'p','k','s','\0'};
    char *ptr = str;

    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
}