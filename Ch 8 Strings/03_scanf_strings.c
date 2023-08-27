#include<stdio.h>

void main(){
    char *str;
    printf("Enter your name : ");
    // scanf("%s",str);
    gets(str);

    printf("The name is : %s",str);

    printf("\n\n ANOTHER WAY OF SCANNING STRING \n\n");
    char arr[50];
    printf("Enter your name again : ");
    gets(arr);
    printf("\n Now the name entered is : ");
    puts(arr);
}