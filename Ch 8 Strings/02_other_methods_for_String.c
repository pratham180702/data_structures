#include<stdio.h>

void main(){
    char *ptr = "Pratham Kakkad";
    printf("%s\n",ptr);
    
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
}