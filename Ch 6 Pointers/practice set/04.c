#include<stdio.h>

void sum(int *sum, int *num1, int *num2);
void average(int *average, int *num1, int *num2);

void main(){
    int num1, num2;
    printf("Enter the number 1 : ");
    scanf("%d", &num1);
     printf("Enter the number 2 : ");
    scanf("%d", &num2);

    int summation = 0, final_average=0;
    int *add_num1 = &num1;
    int *add_num2 = &num2;
    int *add_sum = &summation;
    int *add_average = &final_average;

    sum(add_sum, add_num1, add_num2);
    average(add_average, add_num1, add_num2);

    printf("The sum of both entered numbers is : %d\n", summation);
    printf("The average of both the entered numbers is : %d", final_average);

}

void sum(int *sum, int *num1, int *num2){
    *sum = *num1 + *num2;
}

void average(int *average, int *num1, int *num2){
    *average = (*num1 + *num2)/2;
}