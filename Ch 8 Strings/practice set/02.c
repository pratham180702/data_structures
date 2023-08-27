// !!!!!           IMPORTANT QUESTION          !!!!!!


#include <stdio.h>
#include <string.h>

int main() {
    char arr[20];
    char arr2[20];
    char c;
    int i = 0;

    printf("Enter the string 1 : ");
    scanf("%s", arr);

    printf("The string 1 is : %s\n", arr);

    printf("Enter the second string : ");

    // remove all the flush which is present in the scanf function of the str
    // as we are going to use the scanf for the arr2

    fflush(stdin);

    while (c != '\n') {
        scanf("%c", &c);
        arr2[i] = c;
        i++;
    }

    // this step is very imp step aur mere surr ke upar se gaya ye
    arr2[i-1] = '\0';

    printf("The second string is : %s\n", arr2);

    printf("The length of the string 1 = %d", strlen(arr));
    printf("\n and the length of the string 2 is : %d",strlen(arr2));


    int cmp = strcmp(arr, arr2);

    if (cmp == 0) {
        printf("\nBoth the entered strings are equal.\n");
    } else {
        printf("\nBoth the strings entered are not equal.\n");
    }
    return 0;

}
