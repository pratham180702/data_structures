#include<stdio.h>

float average(float a, float b, float c);

void main(){
    float a,b,c;
    printf("Enter the Number 1 : ");
    scanf("%f",&a);
    printf("Enter the Number 2 : ");
    scanf("%f",&b);
    printf("Enter the Number 3 : ");
    scanf("%f",&c);

    float answer = average(a,b,c);

    printf("The Average of the 3 entered numbers is : %.2f", answer);
}

float average(float a, float b, float c){
    float answer = (a+b+c)/3;
    return answer;
}