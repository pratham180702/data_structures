// sum of first n natural numbers

#include<stdio.h>

int sum(int num);

void main(){
    int num;
    printf("Enter a number to find the sum of first N natural numbers : ");
    scanf("%d",&num);
    int result = sum(num);
    printf("The sum of first %d natural numbers is : %d ",num, result);
}

int sum(int num){
    if (num==1)
    {
        return 1;
    }
    else{
        return num+sum(num-1);
    }
    
}