#include<stdio.h>

int sum(int a, int b);

void main(){
    printf("Enter the value of a : ");
    int a,b;
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int sum_value = sum(a,b);
    printf("The sum of %d and %d is %d", a,b,sum_value);
}

int sum(int a, int b){
    int summation = a+b;
    return summation;
}