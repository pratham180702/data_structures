#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a string : ");
    char originalString[30];
    fgets(originalString, sizeof(originalString), stdin);

    printf("Enter the starting position for slicing : ");
    int m;
    scanf("%d", &m);

    printf("Enter the ending position of the slicing : ");
    int n;
    scanf("%d", &n);

    int originalLength = strlen(originalString);

    if (m < 0 || m >= originalLength || n < m || n >= originalLength) {
        printf("Invalid slicing positions.\n");
    } else {
        char slicedString[30];
        int slicedLength = n - m + 1;
        
        strncpy(slicedString, originalString + m, slicedLength);
        slicedString[slicedLength] = '\0';
        
        printf("Now the sliced string is : %s\n", slicedString);
    }

    return 0;
}
