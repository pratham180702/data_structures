#include<stdio.h>
#include<string.h>

void main(){
    char arr[200];
    char *str = arr;
    printf("Enter a string : ");
    gets(str);
    printf("YES!! ABSOLUTELY : ");
    puts(str);
    printf("\n");

    char *ptr;
    for(int i =0; i<5; i++){
        printf("Enter the character %d",i);
        scanf("%c", ptr[i]);
    }

}