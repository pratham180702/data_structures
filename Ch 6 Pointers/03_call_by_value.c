#include<stdio.h>

void wrong_swap(int a, int b);

void main(){
    int a=5, b=6;
    printf("The value of a and b before swap is %d and %d \n", a,b);
    wrong_swap(a,b);
    printf("The value of a and b after swap is %d and %d ", a,b);

}

void wrong_swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}