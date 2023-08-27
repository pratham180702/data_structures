#include<stdio.h>

float cel_to_fer(float celcius);

void main(){
    float celcius;
    printf("Enter the temperature in celcius : ");
    scanf("%f",&celcius);
    float fer = cel_to_fer(celcius);
    printf("The temperature in ferenhiet is : %.2f", fer);
}

float cel_to_fer(float celcius){
    float fer = (celcius * 1.8) + 32;
    return fer;
}