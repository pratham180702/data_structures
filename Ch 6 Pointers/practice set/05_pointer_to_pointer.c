#include<stdio.h>

void main(){
    int i = 5;
    int *j = &i;
    int **k = &j;
    printf("The value of j is : %u",**k);

}