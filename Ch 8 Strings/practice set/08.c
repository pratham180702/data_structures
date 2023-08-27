// Check whether the given string is present or not

#include<stdio.h>

void main(){
    char arr[] = "PrathamKakkad";

    char c;
    printf("Enter a char to find whether it is present or not : ");
    scanf("%c",&c);
    int flag = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i]==c)
        {
            flag=1;
            break;
        }        
    }
    if (flag==1)
    {
        printf("Yes the entered char is present in the given string!");
    }else{
        printf("No unfortunately the entered char is not present in the default string");
    }
}