#include<stdio.h>

void change(int a);

void main(){
    int b = 55;
    change(b);
    printf("THE VALUE OF B after getting out of the function is : %d",b);
}

void change(int a){
    a = 77;
    printf("The temporary change of the value of variable is : %d\n",a);
}