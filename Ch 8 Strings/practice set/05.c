#include<stdio.h>

char *stringCopy(char *ptr1, char *ptr2);

void main(){
    char arr1[] = "Pratham";
    char arr2[20];

    stringCopy(arr1, arr2);

    printf("The new copied string is : ");
    puts(arr2);
}

char *stringCopy(char *ptr1, char *ptr2){
    int i=0;
    while(ptr1[i]!='\0'){
        ptr2[i]=ptr1[i];
        i++;
    }
    ptr2[i] = '\0';

    return ptr2;

}