// ADD 1 TO ASCII

#include <stdio.h>
#include <string.h>

void addOneToASCII(char *str);
void subtractOneToASCII(char *str);

int main() {
    char input[] = "Hello";
    
    printf("Original string: %s\n", input);
    
    addOneToASCII(input);
    
    printf("Encrypted string: %s\n", input);

    printf("\nDo you want to decrypt the given string?(1/0) : ");
    int num;
    scanf("%d",&num);


    if (num==1)
    {
        subtractOneToASCII(input);
    }
    printf("Now the final string is : ");
    puts(input);
    
    
    return 0;
}

void addOneToASCII(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] + 1;
    }
}

void subtractOneToASCII(char *str){
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i]-1;
    }
    
}
