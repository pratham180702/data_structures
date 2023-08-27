#include<stdio.h>

float area(float side);

void main(){
    float s;
    printf("Enter the side of the square : ");
    scanf("%f",&s);
    float final_area = area(s);
    printf("The area of the square is : %.2f", final_area);

}

float area(float side){
    int final_area = side*side;
    return final_area;
}