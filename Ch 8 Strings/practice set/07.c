#include<stdio.h>

void main(){
    char str[]= "tringglinggn";
    char c;
    printf("Enter the charcter you want to find its occurence : ");
    
    scanf("%c",&c);
    
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]==c)
        {
            count++;
        }
    }
    printf("The number of times the given char encontered = %d",count);
    
}