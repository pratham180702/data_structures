#include<stdio.h>

void main(){
    char *ptr = "pratham";

    int i = 0;
    while(ptr[i]!='\0'){

        printf("%c",ptr[i]);
        i++;
    }
}